//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BGFunction.h"

@interface BGBSplineFunction : BGFunction
{
    float v0_;
    float v2_;
    float p1_;
    float duration_;
}

+ (id)functionWithInitialValue:(float)arg1 controlValue:(float)arg2 finalValue:(float)arg3 duration:(float)arg4;
- (float)internalValueAtTime:(float)arg1;

@end

