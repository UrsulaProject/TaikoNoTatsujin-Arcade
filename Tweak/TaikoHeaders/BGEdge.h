//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BGFunction;

@interface BGEdge : NSObject
{
    float t0_;	// 8 = 0x8
    BGFunction *function_;	// 16 = 0x10
    float dv_;	// 24 = 0x18
    float dt_;	// 28 = 0x1c
}

+ (id)edgeWithStartTime:(float)arg1 function:(id)arg2;
+ (id)edgeWithStartTime:(float)arg1 function:(id)arg2 offsetTime:(float)arg3;
+ (id)edgeWithStartTime:(float)arg1 function:(id)arg2 offsetValue:(float)arg3;
+ (id)edgeWithStartTime:(float)arg1 function:(id)arg2 offsetValue:(float)arg3 offsetTime:(float)arg4;
@property(readonly, nonatomic) float offsetTime; // @synthesize offsetTime=dt_;
@property(readonly, nonatomic) float offsetValue; // @synthesize offsetValue=dv_;
@property(readonly, nonatomic) BGFunction *function; // @synthesize function=function_;
@property(readonly, nonatomic) float startTime; // @synthesize startTime=t0_;
- (void)dealloc;

@end

