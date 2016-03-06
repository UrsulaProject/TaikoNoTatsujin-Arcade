#import "FileHelper.h"

@implementation FileHelper
//return document path
+ (NSString *)documentPath {
    return [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0];
}
//return library path
+ (NSString *)appPath {
    return [NSSearchPathForDirectoriesInDomains(NSApplicationDirectory, NSUserDomainMask, YES) objectAtIndex:0];
}
//remove the music folder and files
+ (void)removeMusic:(int)musicId {
    NSString *removeMusicPath = [NSString stringWithFormat:@"%@/%d.jbt", [FileHelper documentPath], musicId];
    NSFileManager *fileManager = [NSFileManager defaultManager];
    [fileManager removeItemAtPath:removeMusicPath error:nil];
}
//check the file exists
+ (BOOL)fileExists:(NSString *)filePath {
    NSFileManager *fileManager = [NSFileManager defaultManager];
    return [fileManager fileExistsAtPath:filePath];
}
@end