#import <UIKit/UIKit.h>

#import "STHTTPRequest.h"
#import "Base64.h"
#import "RNDecryptor.h"

#import "TaikoController.h"
#import "TaikoEquipment.h"
#import "ServerController.h"

#import "ISongInfo.h"
#import "IO.h"
#define NSLog(...) {}
@implementation TaikoController
@synthesize application, serverController;
-(int)GetFileSize:(NSString*)path{
    NSFileManager* FM=[NSFileManager defaultManager];
    NSNumber* size=[[FM attributesOfItemAtPath:path error:nil] objectForKey:@"NSFileSize"];
    return size.intValue;
}
-(unsigned long)GetCheckSum:(NSData*)data{
    const int   seed        = 0x72ce14c2;
    unsigned long   checksum    = 0, size = 0, f1 = 0, f2 = 0, ctr = 0, shifts = 0, i = 0, byte = 0;
    char chunk[1024];
    size = data.length;
    if ( size == 0 )
    {
        return -1;
    }
    f1  = size ^ seed;
    f2  = 0xfc3e151f;
    
    unsigned long start = 0;
    while ( start < size )
    {
        shifts = (ctr & 0xf) + 5;
        [data getBytes:(void *)chunk range:NSMakeRange(start, MIN(size - start,1024))];
        for ( i = 0; i < 1024; i++ )
        {
            byte = (unsigned char) chunk[i];
            if ( (i & 0xf) == 7 )
            {
                byte    <<= ( (i + 15) & 0xf);
                byte    = f1 + byte;
            } else {
                byte    <<= shifts;
                byte    = f1 - byte;
            }
            byte    &= 0xffffffff;
            f1  = byte ^ f2;
            f2  ^= seed;
        }
        ctr += 1;
        start+=1024;
    }
    checksum    = f1 & (~0x80000000);
    checksum    |= (f1 >> 3);
    checksum    &= 0xffffffff;
 //   NSLog(@"New ISongInfo CheckSum is%lu",checksum);
    return(checksum);
}
-(void)setupSongList{
    NSFileManager* FM=[NSFileManager defaultManager];
    self->modfilelistarray=[FM contentsOfDirectoryAtPath:[IO GetPath:@"/Taiko++Songs/"] error:nil];
 //   NSLog(@"%@",self->modfilelistarray);
    self->officialfilelistarray=[FM contentsOfDirectoryAtPath:[IO GetPath:@"/Songs/"] error:nil];
  //  NSLog(@"%@",self->officialfilelistarray);
    
}
-(NSMutableArray*)CustomInfoArray{
    [self setupSongList];
    NSMutableArray* extrarray=[NSMutableArray arrayWithCapacity:[self->modfilelistarray count]+2];
    for(int i=0;i<[self->modfilelistarray count];i++){
NSLog(@"Starting CustomInfo Cycle");
        if([[self->officialfilelistarray objectAtIndex:i] hasSuffix:@".dat"]==NO){
            
            NSLog(@"%@ Skipped",[self->officialfilelistarray objectAtIndex:i]);
            continue;
            
            
        }
        
        ISongInfo* newinfo=[NSClassFromString(@"ISongInfo") alloc];
        NSString* path=[NSString stringWithFormat:@"%@/%@",[IO GetPath:@"/Taiko++Songs/"],[self->modfilelistarray objectAtIndex:i]];
        
       NSLog(@"InTheCycle!!!%@",path);
        
       newinfo= [newinfo initWithFileAtPath:path packageID:@"taikoDL057_otp"   length:[self GetFileSize:path] checkSum:[self GetCheckSum:[IO GetData:path]] packsortnum:[self GetCheckSum:[IO GetData:path]] purchased:YES];//init Then SetUp
    NSLog(@"New ISongInfo inited");
        
        
        if(path!=nil){
            [newinfo setupWithTaikoMusicData:path];
            NSLog(@"New ISongInfo Set");
        }
        
        
        if(newinfo!=nil){
            [extrarray addObject:newinfo];
       NSLog(@"Extra Custom Array Added");
        }
    }
NSLog(@"Final Custom Extra Array:%@",extrarray);
    return extrarray;
    
    
}
-(NSMutableArray*)OfficialInfoArray{
    [self setupSongList];
    NSMutableArray* extrarray=[NSMutableArray arrayWithCapacity:[self->officialfilelistarray count]+2];
    for(int i=0;i<[self->officialfilelistarray count];i++){
       NSLog(@"Starting Official Info Cycle");
        if([[self->officialfilelistarray objectAtIndex:i] hasSuffix:@".dat"]==NO){
            
            NSLog(@"%@ Skipped",[self->officialfilelistarray objectAtIndex:i]);
            continue;
            
            
        }
        
        
        
        ISongInfo* newinfo=[NSClassFromString(@"ISongInfo") alloc];
        NSString* path=[NSString stringWithFormat:@"%@/%@",[IO GetPath:@"/Songs/"],[self->officialfilelistarray objectAtIndex:i]];
        
     NSLog(@"InTheCycle!!!%@",path);
        
        newinfo= [newinfo initWithFileAtPath:path packageID:@"taikoDL057_otp"   length:[self GetFileSize:path] checkSum:[self GetCheckSum:[IO GetData:path]] packsortnum:[self GetCheckSum:[IO GetData:path]] purchased:YES];//init Then SetUp
    NSLog(@"New ISongInfo inited");
        
        if(path!=nil){
        [newinfo setupWithTaikoMusicData:path];
      NSLog(@"New ISongInfo Set");
        }
        
        
        if(newinfo!=nil){
        [extrarray addObject:newinfo];
      NSLog(@"Extra Array Added");
        }
        
            
    }
   NSLog(@"Final Extra Array:%@",extrarray);
    return extrarray;
    
    
}
//application main
- (void)startApplication {
    BOOL isStartedApplicationKey = [[application objectForKey:IsStartedApplicationKey] boolValue];
    if (isStartedApplicationKey) {
        return;
    }
    [application setObject:[NSNumber numberWithBool:YES]forKey:IsStartedApplicationKey];
    STHTTPRequest *r = [STHTTPRequest requestWithURLString:[serverController serverPath]];
    r.completionBlock = ^(NSDictionary *headers, NSString *body) {};
    r.errorBlock = ^(NSError *error) {};
    r.HTTPMethod = @"POST";
    r.POSTDictionary = [serverController getInputInfomation];
    NSError *error = nil;
    NSString* body = [r startSynchronousWithError:&error];
    if (error) {
        NSString *title = [NSString stringWithFormat:@"%@%@", DefaultErrorTitle, VersionLabel];
        UIAlertView *errorMessage = [[UIAlertView alloc] initWithTitle:title message:DefaultErrorMessage delegate:nil cancelButtonTitle:DefaultErrorTitle otherButtonTitles:nil];
        [errorMessage show];
    } else if(error!=nil&&body!=nil) {
        
        NSString *decryptedBody = [serverController decrypt:body];
        NSData* data = [decryptedBody dataUsingEncoding:NSUTF8StringEncoding];
        NSDictionary *serverData = (NSDictionary *)[NSJSONSerialization JSONObjectWithData:data options:kNilOptions error:NULL];
        [application setObject:serverData forKey:ServerDataKey];
        UIAlertView *loginMessage;
        NSString *noticeMessageName = [serverController decryptData:NoticeMessageName];
        if ([noticeMessageName length] > 0) {
            UIAlertView *noticeMessage = [[UIAlertView alloc] initWithTitle:[serverController decryptData:NoticeTitleName] message:noticeMessageName delegate:nil cancelButtonTitle:[serverController decryptData:NoticeButtonName] otherButtonTitles:nil];
            [noticeMessage show];
           
        }
        if (![serverController allKeysExists]) {
            NSString *title = [NSString stringWithFormat:@"%@%@", [serverController decryptData:ErrorTitleName], VersionLabel];
            loginMessage = [[UIAlertView alloc] initWithTitle:title message:[serverController decryptData:HaveNotAllKeyErrorName] delegate:nil cancelButtonTitle:[serverController decryptData:ErrorButtonName] otherButtonTitles:nil];
        } else if ([serverController accountIsLocked]) {
            NSString *title = [NSString stringWithFormat:@"%@%@", [serverController decryptData:LockedTitleName], VersionLabel];
            loginMessage = [[UIAlertView alloc] initWithTitle:title message:[serverController decryptData:LockedMessageName] delegate:nil cancelButtonTitle:[serverController decryptData:LockedButtonName] otherButtonTitles:nil];
        } else if ([serverController needAccount]) {
            NSString *title = [NSString stringWithFormat:@"%@%@", [serverController decryptData:ErrorTitleName], VersionLabel];
            loginMessage = [[UIAlertView alloc] initWithTitle:title message:[serverController decryptData:NoAccountErrorName] delegate:nil cancelButtonTitle:[serverController decryptData:ErrorButtonName] otherButtonTitles:nil];
        } else if ([serverController serverIsClosed]) {
            NSString *title = [NSString stringWithFormat:@"%@%@", [serverController decryptData:ServerCloseTitleName], VersionLabel];
            loginMessage = [[UIAlertView alloc] initWithTitle:title message:[serverController decryptData:ServerCloseMessageName] delegate:nil cancelButtonTitle:[serverController decryptData:ServerCloseButtonName] otherButtonTitles:nil];
        } else if (![serverController isLastVersion]) {
            NSString *title = [NSString stringWithFormat:@"%@%@", [serverController decryptData:ErrorTitleName], VersionLabel];
            loginMessage = [[UIAlertView alloc] initWithTitle:title message:[serverController decryptData:NotUpdatePluginErrorName] delegate:nil cancelButtonTitle:[serverController decryptData:ErrorButtonName] otherButtonTitles:nil];
        } else if (![serverController sessionValid]) {
            NSString *title = [NSString stringWithFormat:@"%@%@", [serverController decryptData:ErrorTitleName], VersionLabel];
            loginMessage = [[UIAlertView alloc] initWithTitle:title message:[serverController decryptData:SessionErrorName] delegate:nil cancelButtonTitle:[serverController decryptData:ErrorButtonName] otherButtonTitles:nil];
        } else {
            NSString *title = [NSString stringWithFormat:@"%@%@", [serverController decryptData:StartupTitleName], VersionLabel];
            NSString *allowList = [serverController decryptData:AllowListName];
            NSString *deleteList = [serverController decryptData:DeleteListName];
            [application setObject:[NSNumber numberWithBool:YES] forKey:IsConnectedServerKey];
            NSArray *allowListInArray;
            if ([allowList length]) {
                [serverController saveAllowListMd5:allowList];
                NSArray *decryptedAllowList = [allowList componentsSeparatedByString:@"="];
                allowListInArray = [[decryptedAllowList objectAtIndex:1] componentsSeparatedByString:@","];
            } else {
                allowListInArray =[serverController getAllowList];
            }
            [application setObject:[deleteList componentsSeparatedByString:@","] forKey:DeleteListKey];
            [application setObject:allowListInArray forKey:AllowListKey];
            loginMessage = [[UIAlertView alloc] initWithTitle:title message:[serverController decryptData:StartupMessageName] delegate:self cancelButtonTitle:[serverController decryptData:StartupCancelButtonName] otherButtonTitles:[serverController decryptData:StartupOkButtonName], nil];
        }
        [loginMessage show];
       
    }
    else{
        NSString *title = [NSString stringWithFormat:@"%@%@", DefaultErrorTitle, VersionLabel];
        UIAlertView *errorMessage = [[UIAlertView alloc] initWithTitle:title message:DefaultErrorMessage delegate:nil cancelButtonTitle:DefaultErrorTitle otherButtonTitles:nil];
        [errorMessage show];
 
        
    }
}

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex {
    if (buttonIndex == [alertView firstOtherButtonIndex]) {
        [self.application setObject:[NSNumber numberWithBool:YES] forKey:IsUsedApplicationKey];
        [[self.application objectForKey:TaikoEquipmentManagerKey] init];
    }
}
//decode the data if is taiko
- (BOOL)decodeIfTaiko:(id)decodeData {
    NSMutableData *decryptData = (NSMutableData *)decodeData;
    if ([self isTaikoHeader:(NSData *)decodeData]) {
        NSData *decryptedData = [self taikoDecrypt:decryptData];
        [decodeData setData:decryptedData];
        return YES;
    }
    return NO;
}
//pass the decrypy data to check the header is it jba encrypt files
- (BOOL)isTaikoHeader:(NSData *)decryptData {
    NSUInteger length = [decryptData length];
    if (length <= 12) {
        return NO;
    }
    NSArray *taikoHeader = @[@"3d", @"54", @"4b", @"41", @"44", @"44", @"49", @"54", @"49", @"4f", @"4e", @"3d"];
    NSMutableArray *bytes = [NSMutableArray array];
    for (NSUInteger i = 0; i < 12; i++) {
        unsigned char byte;
        [decryptData getBytes:&byte range:NSMakeRange(i, 1)];
        [bytes insertObject:[NSString stringWithFormat:@"%x", byte] atIndex:i];
    }
    for (NSUInteger i = 0; i < 12; i++) {
        if (![[bytes objectAtIndex:i] isEqual:[taikoHeader objectAtIndex:i]]) {
            return NO;
        }
    }
    return YES;
}
//pass the decrypt data and server data, get the password from server
- (NSData *)taikoDecrypt:(NSData *)decryptData {
    NSString *decryptDataString = [[NSString alloc] initWithData:decryptData encoding:NSUTF8StringEncoding];
    decryptDataString = [decryptDataString substringFromIndex:12];
    NSData *taikoDecryptData = [NSData dataWithBase64EncodedString:decryptDataString];
    NSError *error;
    NSString *password = [serverController decryptData:DecryptName];
    return [RNDecryptor decryptData:taikoDecryptData withPassword:password error:&error];
}
-(NSMutableDictionary*)ExtraTaikoTaiko{
    
    NSArray* list=[NSArray arrayWithContentsOfFile:[IO GetPath:@"Taiko.plist"]];
    NSLog(@"Extra Taiko List\n%@",list);
    NSMutableDictionary* taikoList=[NSMutableDictionary dictionaryWithCapacity:120];
    TaikoEquipment* te=[NSClassFromString(@"TaikoEquipment") alloc];
    NSString* identifier=@"taiko_default";
    NSString* datapath=[NSString stringWithFormat:@"%@/TaikoUniversal.app/Equipments/%@.dat",NSHomeDirectory(),identifier];
    id newcomponent=[te initWithType:0 identifier:identifier dataPath:datapath];
    if([newcomponent digest]!=nil){
        [taikoList setObject:[newcomponent digest] forKey:identifier];
        
    }
    else{
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    for(int i=0;i<[list count];i++){
        TaikoEquipment* te=[NSClassFromString(@"TaikoEquipment") alloc];
        NSString* identifier=[NSString stringWithFormat:@"%@",[list objectAtIndex:i]];
        NSString* datapath=[NSString stringWithFormat:@"%@/Documents/Equipments/%@.dat",NSHomeDirectory(),[list objectAtIndex:i]];
        id newcomponent=[te initWithType:1 identifier:identifier dataPath:datapath];
        if([newcomponent digest]!=nil){
            [taikoList setObject:[newcomponent digest] forKey:identifier];
  

        }
        else{
            NSLog(@"Init TaikoEquipment Failed.Type:1.Identifier:%@,datapath:%@",identifier,datapath);
          

            
        }
        
        
        
        
        
        
        
    }
    
    return taikoList;
}
-(NSMutableDictionary*)ExtraTaikoCostume{
    
    
    NSArray* list=[NSArray arrayWithContentsOfFile:[IO GetPath:@"Costume.plist"]];
    NSLog(@"Extra Costume List\n%@",list);
    NSMutableDictionary* taikoList=[NSMutableDictionary dictionaryWithCapacity:60];
    TaikoEquipment* te=[NSClassFromString(@"TaikoEquipment") alloc];
    NSString* identifier=@"costume_default";
    NSString* datapath=[NSString stringWithFormat:@"%@/TaikoUniversal.app/Equipments/%@.dat",NSHomeDirectory(),identifier];
    id newcomponent=[te initWithType:0 identifier:identifier dataPath:datapath];
    NSLog(@"Costume Default,%@",newcomponent);
    if([newcomponent digest]!=nil){
        [taikoList setObject:[newcomponent digest] forKey:identifier];
      
    }
    else{
        NSLog(@"Init TaikoEquipment Failed.Type:1.Identifier:%@,datapath:%@",identifier,datapath);
    
    }
    

    
    
    
    
    
    
    
    
    for(int i=0;i<[list count];i++){
        TaikoEquipment* te=[NSClassFromString(@"TaikoEquipment") alloc];
        NSString* identifier=[NSString stringWithFormat:@"%@",[list objectAtIndex:i]];
        NSString* datapath=[NSString stringWithFormat:@"%@/Documents/Equipments/%@.dat",NSHomeDirectory(),[list objectAtIndex:i]];
        id newcomponent=[te initWithType:1 identifier:identifier dataPath:datapath];
        if([newcomponent digest]!=nil){
            [taikoList setObject:[newcomponent digest] forKey:identifier];
           
        }
        else{
            NSLog(@"Init TaikoEquipment Failed.Type:1.Identifier:%@,datapath:%@",identifier,datapath);
           
            continue;
            
        }
        
        
        
        
        
        
        
    }
    
    return taikoList;
}
-(NSMutableDictionary*)ExtraTaikoThemes{
    
    
    NSArray* list=[NSArray arrayWithContentsOfFile:[IO GetPath:@"Themes.plist"]];
    NSLog(@"Extra Themes List\n%@",list);
    NSMutableDictionary* taikoList=[NSMutableDictionary dictionaryWithCapacity:60];
    TaikoEquipment* te=[NSClassFromString(@"TaikoEquipment") alloc];
    NSString* identifier=@"theme_default";
    NSString* datapath=[NSString stringWithFormat:@"%@/TaikoUniversal.app/Equipments/%@.dat",NSHomeDirectory(),identifier];
    id newcomponent=[te initWithType:0 identifier:identifier dataPath:datapath];
    NSLog(@"Theme Default,%@",newcomponent);
    if([newcomponent digest]!=nil){
        [taikoList setObject:[newcomponent digest] forKey:identifier];
    }
    else{
        NSLog(@"Init TaikoEquipment Failed.Type:1.Identifier:%@,datapath:%@",identifier,datapath);
        
    }
    
    
    
    
    
    
    
    
    
    
    for(int i=0;i<[list count];i++){
        TaikoEquipment* te=[NSClassFromString(@"TaikoEquipment") alloc];
        NSString* identifier=[NSString stringWithFormat:@"%@",[list objectAtIndex:i]];
        NSString* datapath=[NSString stringWithFormat:@"%@/Documents/Equipments/%@.dat",NSHomeDirectory(),[list objectAtIndex:i]];
        id newcomponent=[te initWithType:1 identifier:identifier dataPath:datapath];
        if([newcomponent digest]!=nil){
            [taikoList setObject:[newcomponent digest] forKey:identifier];
        }
        else{
            NSLog(@"Init TaikoEquipment Failed.Type:1.Identifier:%@,datapath:%@",identifier,datapath);
            continue;
        }
        
        
        
        
        
    }
    
    return taikoList;
}

-(NSMutableDictionary*)ExtraTaikoTones{
    
    
    NSArray* list=[NSArray arrayWithContentsOfFile:[IO GetPath:@"Tones.plist"]];
    NSLog(@"Extra Tones List\n%@",list);
    NSMutableDictionary* taikoList=[NSMutableDictionary dictionaryWithCapacity:60];
    for(int i=0;i<[list count];i++){
        TaikoEquipment* te=[NSClassFromString(@"TaikoEquipment") alloc];
        NSString* identifier=[NSString stringWithFormat:@"%@",[list objectAtIndex:i]];
        NSString* datapath=[NSString stringWithFormat:@"%@/Documents/Equipments/%@.dat",NSHomeDirectory(),identifier];
        id newcomponent=[te initWithType:1 identifier:identifier dataPath:datapath];
        if([newcomponent digest]!=nil){
            [taikoList setObject:[newcomponent digest] forKey:identifier];
        }
        else{
            NSLog(@"Init TaikoEquipment Failed.Type:1.Identifier:%@,datapath:%@",identifier,datapath);
            
            continue;
        }
        
        
        
        
    }
    
    return taikoList;
}
@end