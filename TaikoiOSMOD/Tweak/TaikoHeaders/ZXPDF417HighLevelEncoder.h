//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ZXPDF417HighLevelEncoder : NSObject
{
}

+ (int)determineConsecutiveBinaryCount:(id)arg1 bytes:(char *)arg2 startpos:(int)arg3 error:(id *)arg4;
+ (int)determineConsecutiveTextCount:(id)arg1 startpos:(int)arg2;
+ (int)determineConsecutiveDigitCount:(id)arg1 startpos:(int)arg2;
+ (_Bool)isText:(BOOL)arg1;
+ (_Bool)isPunctuation:(BOOL)arg1;
+ (_Bool)isMixed:(BOOL)arg1;
+ (_Bool)isAlphaLower:(BOOL)arg1;
+ (_Bool)isAlphaUpper:(BOOL)arg1;
+ (_Bool)isDigit:(BOOL)arg1;
+ (void)encodeNumeric:(id)arg1 startpos:(int)arg2 count:(int)arg3 buffer:(id)arg4;
+ (void)encodeBinary:(char *)arg1 startpos:(int)arg2 count:(int)arg3 startmode:(int)arg4 buffer:(id)arg5;
+ (int)encodeText:(id)arg1 startpos:(int)arg2 count:(int)arg3 buffer:(id)arg4 initialSubmode:(int)arg5;
+ (id)encodeHighLevel:(id)arg1 compaction:(int)arg2 error:(id *)arg3;
+ (char *)bytesForMessage:(id)arg1;
+ (void)initialize;

@end

