//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ZXErrorCorrectionLevel : NSObject
{
    int _bits;
    int _ordinal;
    NSString *_name;
}

+ (id)errorCorrectionLevelH;
+ (id)errorCorrectionLevelQ;
+ (id)errorCorrectionLevelM;
+ (id)errorCorrectionLevelL;
+ (id)forBits:(int)arg1;
@property(readonly, nonatomic) int ordinal; // @synthesize ordinal=_ordinal;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) int bits; // @synthesize bits=_bits;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOrdinal:(int)arg1 bits:(int)arg2 name:(id)arg3;

@end
