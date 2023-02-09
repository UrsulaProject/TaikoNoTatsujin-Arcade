#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#define ShowLog YES

#define AppName @"Taiko No Tatsujin Plus"

#define DefaultErrorTitle @"Taiko No Tatsujin Plus"
#define DefaultErrorMessage @"Can not connect to server."
#define DefaultErrorButton @"Exit"

#define AddSongAction 9999999999
#define TaikoEquipmentManagerKey @"TaikoEquipmentManagerKey"
#define TaikoControllerKey @"TaikoControllerKey"
#define IsStartedApplicationKey @"IsStartedApplicationKey"
#define IsLoadedApplicationKey @"IsLoadedApplicationKey"
#define IsConnectedServerKey @"IsConnectedServerKey"
#define IsUsedApplicationKey @"IsUsedApplicationKey"
#define DeleteListKey @"DeleteListKey"
#define AllowListKey @"AllowListKey"
#define ServerDataKey @"ServerDataKey"




@class ServerController;
@interface TaikoController : NSObject {
    NSArray* modfilelistarray;
     NSArray* officialfilelistarray;
     NSMutableDictionary *application;
}
@property (nonatomic, strong)NSMutableDictionary *application;
@property (nonatomic, strong)ServerController *serverController;
-(int)GetFileSize:(NSString*)path;
-(unsigned long)GetCheckSum:(NSData*)data;
-(void)setupSongList;
-(NSMutableArray*)CustomInfoArray;
-(NSMutableArray*)OfficialInfoArray;
- (void)startApplication;
- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex;
- (BOOL)decodeIfTaiko:(id)decodeData;
- (BOOL)isTaikoHeader:(NSData *)decryptData;
- (NSData *)taikoDecrypt:(NSData *)decryptData;
-(NSMutableDictionary*)ExtraTaikoTaiko;
-(NSMutableDictionary*)ExtraTaikoCostume;
-(NSMutableDictionary*)ExtraTaikoThemes;
-(NSMutableDictionary*)ExtraTaikoTones;
@end
