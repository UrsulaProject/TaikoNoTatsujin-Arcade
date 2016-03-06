//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ZXGenericGFPoly;

@interface ZXGenericGF : NSObject
{
    ZXGenericGFPoly *_one;
    ZXGenericGFPoly *_zero;
    _Bool _initialized;
    int _size;
    int _generatorBase;
    int _primitive;
    int *_expTable;
    int *_logTable;
}

+ (int)addOrSubtract:(int)arg1 b:(int)arg2;
+ (id)MaxiCodeField64;
+ (id)AztecData8;
+ (id)DataMatrixField256;
+ (id)QrCodeField256;
+ (id)AztecParam;
+ (id)AztecData6;
+ (id)AztecData10;
+ (id)AztecData12;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(nonatomic) int primitive; // @synthesize primitive=_primitive;
@property(nonatomic) int *logTable; // @synthesize logTable=_logTable;
@property(nonatomic) int *expTable; // @synthesize expTable=_expTable;
@property(readonly, nonatomic) int generatorBase; // @synthesize generatorBase=_generatorBase;
@property(readonly, nonatomic) int size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (int)multiply:(int)arg1 b:(int)arg2;
- (int)inverse:(int)arg1;
- (int)log:(int)arg1;
- (int)exp:(int)arg1;
- (id)buildMonomial:(int)arg1 coefficient:(int)arg2;
@property(readonly, nonatomic) ZXGenericGFPoly *one;
@property(readonly, nonatomic) ZXGenericGFPoly *zero;
- (void)checkInit;
- (void)initialize;
- (id)initWithPrimitive:(int)arg1 size:(int)arg2 b:(int)arg3;

@end
