//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, ZXModulusPoly;

@interface ZXModulusGF : NSObject
{
    int _modulus;
    ZXModulusPoly *_one;
    ZXModulusPoly *_zero;
    NSMutableArray *_expTable;
    NSMutableArray *_logTable;
}

+ (id)PDF417_GF;
@property(nonatomic) int modulus; // @synthesize modulus=_modulus;
@property(retain, nonatomic) NSMutableArray *logTable; // @synthesize logTable=_logTable;
@property(retain, nonatomic) NSMutableArray *expTable; // @synthesize expTable=_expTable;
@property(retain, nonatomic) ZXModulusPoly *zero; // @synthesize zero=_zero;
@property(retain, nonatomic) ZXModulusPoly *one; // @synthesize one=_one;
- (void).cxx_destruct;
- (int)size;
- (int)multiply:(int)arg1 b:(int)arg2;
- (int)inverse:(int)arg1;
- (int)log:(int)arg1;
- (int)exp:(int)arg1;
- (int)subtract:(int)arg1 b:(int)arg2;
- (int)add:(int)arg1 b:(int)arg2;
- (id)buildMonomial:(int)arg1 coefficient:(int)arg2;
- (id)initWithModulus:(int)arg1 generator:(int)arg2;

@end

