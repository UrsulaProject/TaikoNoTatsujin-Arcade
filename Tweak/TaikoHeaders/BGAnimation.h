//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BGAnimation : NSObject
{
    float duration_;	// 8 = 0x8
    int loopCount_;	// 12 = 0xc
    float loopTime_;	// 16 = 0x10
    _Bool overlayed_;	// 20 = 0x14
    _Bool inherited_;	// 21 = 0x15
    NSMutableDictionary *variables_;	// 24 = 0x18
}

@property(readonly, nonatomic) NSMutableDictionary *variables; // @synthesize variables=variables_;
@property(nonatomic) _Bool inherited; // @synthesize inherited=inherited_;
@property(nonatomic) _Bool overlayed; // @synthesize overlayed=overlayed_;
@property(nonatomic) float loopTime; // @synthesize loopTime=loopTime_;
@property(nonatomic) int loopCount; // @synthesize loopCount=loopCount_;
@property(nonatomic) float duration; // @synthesize duration=duration_;
- (_Bool)isInfinite;
- (void)dealloc;
- (id)init;

@end

