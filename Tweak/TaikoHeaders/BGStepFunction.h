//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BGFunction.h"

@interface BGStepFunction : BGFunction
{
    int count_;	// 16 = 0x10
    CDStruct_869f9c67 *indicators_;	// 24 = 0x18
}

+ (id)functionWithValues:(const float *)arg1 durations:(const float *)arg2 count:(int)arg3;
+ (id)functionWithDurationIndicatorArray:(id)arg1;
- (float)internalValueAtTime:(float)arg1;
- (void)dealloc;

@end

