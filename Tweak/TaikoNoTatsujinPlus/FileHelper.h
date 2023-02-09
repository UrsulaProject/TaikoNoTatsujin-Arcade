#import <Foundation/Foundation.h>
@interface FileHelper:NSObject
+ (NSString *)documentPath;
+ (NSString *)appPath;
+ (void)removeMusic:(int)musicId;
+ (BOOL)fileExists:(NSString *)filePath;
@end