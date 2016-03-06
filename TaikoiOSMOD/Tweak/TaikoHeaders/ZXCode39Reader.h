//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZXOneDReader.h"

@interface ZXCode39Reader : ZXOneDReader
{
    _Bool _extendedMode;
    _Bool _usingCheckDigit;
}

@property(nonatomic) _Bool usingCheckDigit; // @synthesize usingCheckDigit=_usingCheckDigit;
@property(nonatomic) _Bool extendedMode; // @synthesize extendedMode=_extendedMode;
- (id)decodeExtended:(id)arg1;
- (unsigned short)patternToChar:(int)arg1;
- (int)toNarrowWidePattern:(int *)arg1 countersLen:(unsigned int)arg2;
- (_Bool)findAsteriskPattern:(id)arg1 a:(int *)arg2 b:(int *)arg3 counters:(int *)arg4 countersLen:(int)arg5;
- (id)decodeRow:(int)arg1 row:(id)arg2 hints:(id)arg3 error:(id *)arg4;
- (id)initUsingCheckDigit:(_Bool)arg1 extendedMode:(_Bool)arg2;
- (id)initUsingCheckDigit:(_Bool)arg1;
- (id)init;

@end
