//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ZXErrorCorrectionLevel;

@interface ZXFormatInformation : NSObject
{
    BOOL _dataMask;
    ZXErrorCorrectionLevel *_errorCorrectionLevel;
}

+ (id)doDecodeFormatInformation:(int)arg1 maskedFormatInfo2:(int)arg2;
+ (id)decodeFormatInformation:(int)arg1 maskedFormatInfo2:(int)arg2;
+ (int)numBitsDiffering:(int)arg1 b:(int)arg2;
@property(readonly, nonatomic) BOOL dataMask; // @synthesize dataMask=_dataMask;
@property(readonly, nonatomic) ZXErrorCorrectionLevel *errorCorrectionLevel; // @synthesize errorCorrectionLevel=_errorCorrectionLevel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFormatInfo:(int)arg1;

@end

