#import "GTMBase64.h"
#import "Base64.h"
#import "Md5.h"
#import "RNDecryptor.h"
#import "RNEncryptor.h"


#import "DesHelper.h"
#import "FileHelper.h"

#import "ServerController.h"
#import "TaikoController.h"
#define NSLog(...) {}
@implementation ServerController
@synthesize application, lastPermissionKey, lastInfomationKey, lastUserKey, lastAllowMusicKey, lastRncApiKey, lastDesApiKey;
-(id)init {
    self.lastPermissionKey = @"eTE=";
    self.lastInfomationKey = @"WGc=";
    self.lastUserKey = @"Mks=";
    self.lastAllowMusicKey = @"bmQ=";
    self.lastRncApiKey = @"dzM=";
    self.lastDesApiKey = @"RzI=";
    return self;
}
//get server data from application
- (NSDictionary *)getServerData {
    return [application objectForKey:ServerDataKey];
}
//get userName from user data
- (NSString *)getUserName {
    NSString *path = [NSString stringWithFormat:@"%@/%@", [FileHelper documentPath], UserAuthFile];
    if (![FileHelper fileExists:path]) {
        return @"";
    }
    NSString *content = [NSString stringWithContentsOfFile:path encoding:NSUTF8StringEncoding error:nil];
    content = [content substringFromIndex:12];
    NSData *data = [GTMBase64 decodeString:[self userKey]];
    NSString *userNameKey = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding] ;
    NSData *decryptData = [NSData dataWithBase64EncodedString:content];
    NSError *error;
    NSData *decryptedData = [RNDecryptor decryptData:decryptData withPassword:userNameKey error:&error];
    NSDictionary *userData = (NSDictionary *)[NSJSONSerialization JSONObjectWithData:decryptedData options:kNilOptions error:NULL];
    return [userData objectForKey:UserIdName];
}
//get user uuid
- (NSString *)getUserUuid {
    NSFileManager *fileManager = [NSFileManager defaultManager];
    NSDictionary *attributes = [fileManager attributesOfItemAtPath:[FileHelper documentPath] error:nil];
    NSDate *mktime = [attributes objectForKey:NSFileCreationDate];
    NSNumber *mktimeNumber = [NSNumber numberWithDouble:[mktime timeIntervalSinceReferenceDate]];
    return[NSString stringWithFormat:@"%@", mktimeNumber];
}
//get last allowList md5
- (NSString *)getAllowListMd5 {
    NSString *path = [NSString stringWithFormat:@"%@/%@", [FileHelper documentPath], AllowMusicListFile];
    NSString *content = [NSString stringWithContentsOfFile:path encoding:NSUTF8StringEncoding error:nil];
    content = [content substringFromIndex:12];
    NSData *data = [GTMBase64 decodeString:[self allowMusicKey]];
    NSString *decryptedAllowMusicKey = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    NSData *decryptData = [NSData dataWithBase64EncodedString:content];
    NSError *error;
    NSData *decryptedData = [RNDecryptor decryptData:decryptData withPassword:decryptedAllowMusicKey error:&error];
    return [decryptedData md5];
}
//save last allowList md5
- (void)saveAllowListMd5:(NSString *)allowList {
    NSError *error;
    NSData *data = [GTMBase64 decodeString:[self allowMusicKey]];
    NSString *decryptedAllowMusicKey = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    NSData *encryptedData = [RNEncryptor encryptData:[allowList dataUsingEncoding:NSUTF8StringEncoding] withSettings:kRNCryptorAES256Settings password:decryptedAllowMusicKey error:&error];
    NSString *encryptedString = [encryptedData base64EncodedStringWithOptions:0];
    encryptedString = [NSString stringWithFormat:@"%@%@", AllowMusicHeader, encryptedString];
    NSString *path = [NSString stringWithFormat:@"%@/%@", [FileHelper documentPath], AllowMusicListFile];
    [[encryptedString dataUsingEncoding:NSUTF8StringEncoding] writeToFile:path atomically:YES];
}
//load last allowList md5
- (NSArray *)getAllowList {
    NSString *path = [NSString stringWithFormat:@"%@/%@", [FileHelper documentPath], AllowMusicListFile];
    if (![FileHelper fileExists:path]) {
        return @[];
    }
    NSString *content = [NSString stringWithContentsOfFile:path encoding:NSUTF8StringEncoding error:nil];
    content = [content substringFromIndex:12];
    NSData *data = [GTMBase64 decodeString:[self allowMusicKey]];
    NSString *decryptedAllowMusicKey = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    NSData *decryptData = [NSData dataWithBase64EncodedString:content];
    NSError *error;
    NSData *decryptedData = [RNDecryptor decryptData:decryptData withPassword:decryptedAllowMusicKey error:&error];
    NSString *decryptedDataString = [[NSString alloc] initWithData:decryptedData encoding:NSUTF8StringEncoding];
    NSArray *decryptedType = [decryptedDataString componentsSeparatedByString:@"="];
    if ([[self decryptData:LastAllowListName] isEqualToString:[decryptedType objectAtIndex:0]]) {
        return [[decryptedType objectAtIndex:1] componentsSeparatedByString:@","];
    }
    return @[];
}
//getuuid userid and md5 last list
- (NSMutableDictionary *)getInputInfomation {
    NSMutableDictionary *info = [NSMutableDictionary dictionary];
    NSString *infoData = [NSString stringWithFormat:@"%@%@%@%@%@", [self getUserName], InfoPattern, [self getUserUuid], InfoPattern, [self getAllowListMd5]];
    NSError *error;
    NSData *data = [GTMBase64 decodeString:[self infomationKey]];
    NSString *decryptedInfomationKey = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    NSData *encryptedData = [RNEncryptor encryptData:[infoData dataUsingEncoding:NSUTF8StringEncoding] withSettings:kRNCryptorAES256Settings password:decryptedInfomationKey error:&error];
    NSString *encryptInfoString = [encryptedData base64EncodedStringWithOptions:0];
    NSString *encryptInfoData = [NSString stringWithFormat:@"%@%@", InfoHeader, encryptInfoString];
    [info setValue:encryptInfoData forKey:InfomationName];
    return info;
}
//checking has the permission
- (BOOL)hasPermission:(NSString *)permissionName {
    NSDictionary *serverData = [self getServerData];
    NSString *content = [self decrypt:[serverData valueForKey:PermissionName]];
    if ([content length] <= 12) {
        return NO;
    }
    content = [content substringFromIndex:12];
    NSData *data = [GTMBase64 decodeString:[self permissionKey]];
    NSString *decryptedPermissionKey = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding] ;
    NSData *decryptData = [NSData dataWithBase64EncodedString:content];
    NSError *error;
    NSData *decryptedData = [RNDecryptor decryptData:decryptData withPassword:decryptedPermissionKey error:&error];
    NSString *decryptedPermission = [[NSString alloc] initWithData:decryptedData encoding:NSUTF8StringEncoding];
    NSArray *permissionData = [decryptedPermission componentsSeparatedByString:@","];
    return [permissionData containsObject:[permissionName uppercaseString]];
}
//get the url encode key
- (NSString *)urlEncodeKey {
    NSString *url = [NSString stringWithFormat:@"%@%@%@%@%@%@", @"Mj", @"BE", @"MT", @"Jk", @"Uz", @"Y="];
    NSData *data = [GTMBase64 decodeString:url];
    return [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
}
//init server path
- (NSString *)serverPath {
    NSString *http = [DesHelper decryptUseDES:Http key:[self urlEncodeKey]];
    NSString *domain = [DesHelper decryptUseDES:Domains key:[self urlEncodeKey]];
    NSString *query = [DesHelper decryptUseDES:Query key:[self urlEncodeKey]];
    return [NSString stringWithFormat:@"%@%@%@", http, domain, query];
}
//get permissionKey
- (NSString *)permissionKey {
    NSString *key = @"RzJ1";
    return [NSString stringWithFormat:@"%@%@%@", PermissionKey, key, self.lastPermissionKey];
}
//get infomationKey
- (NSString *)infomationKey {
    NSString *key = @"RTM1";
    return [NSString stringWithFormat:@"%@%@%@", InfomationKey, key, self.lastInfomationKey];
}
//get userNameKey
- (NSString *)userKey {
    NSString *key = @"dzBv";
    return [NSString stringWithFormat:@"%@%@%@", UserKey, key, self.lastUserKey];
}
//get allowMusicKey
- (NSString *)allowMusicKey {
    NSString *key = @"Z0Yz";
    return [NSString stringWithFormat:@"%@%@%@", AllowMusicKey, key, self.lastAllowMusicKey];
}
//get rncApiKey
- (NSString *)rncApiKey {
    NSString *key = @"UjJJ";
    return [NSString stringWithFormat:@"%@%@%@", RncApiKey, key, self.lastRncApiKey];
}
//get desApiKey
- (NSString *)desApiKey {
    NSString *key = @"MWY0";
    return [NSString stringWithFormat:@"%@%@%@", DesApiKey, key, self.lastDesApiKey];
}
//decode response from server
- (NSString *)decrypt:(NSString *)encryptedString {
    NSData *data = [GTMBase64 decodeString:[self rncApiKey]];
    NSString *rncKey = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    encryptedString = [encryptedString substringFromIndex:12];
    NSData *decryptData = [NSData dataWithBase64EncodedString:encryptedString];
    NSError *error;
    NSData *decryptedData = [RNDecryptor decryptData:decryptData withPassword:rncKey error:&error];
    return [[NSString alloc] initWithData:decryptedData encoding:NSUTF8StringEncoding];
}
//decode des action
- (NSString *)decryptData:(NSString *)serverDataName {
    NSDictionary *serverData = [self getServerData];
    NSString *encryptedString = [serverData objectForKey:serverDataName];
    NSData *data = [GTMBase64 decodeString:[self desApiKey]];
    NSString *desKey = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    NSString *decryptedKey = [DesHelper decryptUseDES:[serverData objectForKey:RncKeyName] key:desKey];
    NSData *decryptData = [NSData dataWithBase64EncodedString:encryptedString];
    NSError *error;
    NSData *decryptedData = [RNDecryptor decryptData:decryptData withPassword:decryptedKey error:&error];
    return [[NSString alloc] initWithData:decryptedData encoding:NSUTF8StringEncoding];
}
//return deleted list
- (NSArray *)deleteList {
    return [self list:DeleteListName];
}
//return allow list
- (NSArray *)allowList {
    return [self list:AllowListName];
}
//decode and init string [xxx,xxx,xxx] to array
- (NSArray *)list:(NSString *)serverKey {
    NSString *songList = [self decryptData:serverKey];

    NSArray *replaceKeys = @[
        @"[", @"]",  @"(", @")", @"{", @"}", @"<", @">"
    ];
    for (NSUInteger i = 0; i < [replaceKeys count]; i++) {
        songList = [songList stringByReplacingOccurrencesOfString:[replaceKeys objectAtIndex:i] withString:@""];
    }
    return [songList componentsSeparatedByString:@","];
}
//checking all the keys are existing
- (BOOL)allKeysExists {
    NSDictionary *serverData = [self getServerData];
    NSArray *checkKeys = @[
        LastVersionName,
        RncKeyName,
        NoticeTitleName,
        NoticeMessageName,
        NoticeButtonName,
        StartupTitleName,
        StartupMessageName,
        StartupOkButtonName,
        StartupCancelButtonName,
        ServerCloseTitleName,
        ServerCloseMessageName,
        ServerCloseButtonName,
                           
        ErrorTitleName,
        HaveNotAllKeyErrorName,
        NotUpdatePluginErrorName,
        SessionErrorName,
        NoAccountErrorName,
        ErrorButtonName,
                           
        LockedTitleName,
        LockedMessageName,
        LockedButtonName,
                           
        DeleteListName,
        TimestampName,
        PermissionName
    ];
    for (NSUInteger i = 0; i < [checkKeys count]; i++) {
        if (![[serverData allKeys] containsObject:[checkKeys objectAtIndex:i]]) {
            return NO;
        }
    }
    return YES;
}
//checking is it need login account
- (BOOL)needAccount {
    if ([[self decryptData:LastVersionName] intValue] == -2) {
        return YES;
    }
    return NO;
}
//checking the account is locked
- (BOOL)accountIsLocked {
    if ([[self decryptData:LastVersionName] intValue] == -1) {
        return YES;
    }
    return NO;
}
//checking the server is closed
- (BOOL)serverIsClosed {
    if ([[self decryptData:LastVersionName] intValue] <= 0) {
        return YES;
    }
    return NO;
}
//checking the last version
- (BOOL)isLastVersion {
    if ([[self decryptData:LastVersionName] intValue] > LAST_VERSION) {
        return NO;
    }
    return YES;
}
//checking the session
- (BOOL)sessionValid {
    double serverTime = [[self decryptData:TimestampName] doubleValue];
    double currentTime = [[NSDate date] timeIntervalSince1970];
    double max = MAX_NUMBER(serverTime, currentTime);
    double min = MIN_NUMBER(serverTime, currentTime);
    if (max - min > MAX_SESSION_SEC) {
        return NO;
    }
    return YES;
}
@end