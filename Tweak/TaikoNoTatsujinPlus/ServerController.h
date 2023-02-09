#define Http @"ekpgOdNYpnw="//http://
#define Domains @"idKVLnn+kafpc4/qM5gJfL690Phm5pAh"//rbarcade.82flex.com/
#define Query @"2XSYQgI0yyV+Ia2UDlITtQ=="//v2/taikoV2.php

#define UserAuthFile @"auth.key"
#define AllowMusicListFile @"amlist"

#define InfoHeader @"==GLHEADER=="
#define InfoPattern @"XoX><XjX"
#define AllowMusicHeader @"==AMHEADER=="

#define PermissionKey @"NVcx"
#define InfomationKey @"YUo5"
#define UserKey @"NmlE"
#define AllowMusicKey @"ZGY4"
#define RncApiKey @"MFM4"
#define DesApiKey @"MlN3"

#define UserIdName @"userId"

#define VersionLabel @" V 1.0.2"

#define MAX_NUMBER(a,b) ( ((a) > (b)) ? (a) : (b) )
#define MIN_NUMBER(a,b) ( ((a) < (b)) ? (a) : (b) )

#define LAST_VERSION 100
#define MAX_SESSION_SEC 172800

#define InfomationName @"a"

#define LastVersionName @"a"
#define RncKeyName @"b"
#define NoticeTitleName @"c"
#define NoticeMessageName @"d"
#define NoticeButtonName @"e"
#define StartupTitleName @"f"
#define StartupMessageName @"g"
#define StartupOkButtonName @"h"
#define StartupCancelButtonName @"i"
#define ServerCloseTitleName @"j"
#define ServerCloseMessageName @"k"
#define ServerCloseButtonName @"l"

#define ErrorTitleName @"m"
#define HaveNotAllKeyErrorName @"n"
#define NotUpdatePluginErrorName @"o"
#define SessionErrorName @"p"
#define NoAccountErrorName @"q"
#define ErrorButtonName @"r"

#define LockedTitleName @"s"
#define LockedMessageName @"t"
#define LockedButtonName @"u"

#define DeleteListName @"v"
#define AllowListName @"w"
#define TimestampName @"x"
#define PermissionName @"y"
#define DecryptName @"z"
#define DecryptName @"z"

#define LastAllowListName @"aa"

@interface ServerController : NSObject {
    NSMutableDictionary *application;
    NSString *lastPermissionKey;
    NSString *lastInfomationKey;
    NSString *lastUserKey;
    NSString *lastAllowMusicKey;
    NSString *lastRncApiKey;
    NSString *lastDesApiKey;
}
@property (nonatomic, strong)NSMutableDictionary *application;
@property (nonatomic, strong)NSString *lastPermissionKey;
@property (nonatomic, strong)NSString *lastInfomationKey;
@property (nonatomic, strong)NSString *lastUserKey;
@property (nonatomic, strong)NSString *lastAllowMusicKey;
@property (nonatomic, strong)NSString *lastRncApiKey;
@property (nonatomic, strong)NSString *lastDesApiKey;

- (NSDictionary *)getServerData;
- (NSString *)getUserName;
- (NSString *)getUserUuid;
- (NSString *)getAllowListMd5;
- (void)saveAllowListMd5:(NSString *)allowList;
- (NSArray *)getAllowList;
- (NSMutableDictionary *)getInputInfomation;
- (BOOL)hasPermission:(NSString *)permissionName;
- (NSString *)urlEncodeKey;
- (NSString *)serverPath;
- (NSString *)permissionKey;
- (NSString *)infomationKey;
- (NSString *)userKey;
- (NSString *)allowMusicKey;
- (NSString *)rncApiKey;
- (NSString *)desApiKey;
- (NSString *)decrypt:(NSString *)encryptedString;
- (NSString *)decryptData:(NSString *)encryptedString;
- (NSArray *)deleteList;
- (NSArray *)allowList;
- (NSArray *)list:(NSString *)serverKey;
- (BOOL)allKeysExists;
- (BOOL)needAccount;
- (BOOL)accountIsLocked;
- (BOOL)serverIsClosed;
- (BOOL)isLastVersion;
- (BOOL)sessionValid;
@end