//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaikoWindow.h"

@interface TaikoWindowOpenClose : TaikoWindow
{
    float cx_;
    float halfWidth_;
    SEL updateRoutine_;
}

- (void)startDisappearing;
- (void)startAppearing;
- (void)updateWithScaling;
- (void)update;
- (id)initWithWindowTextureFrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg1 windowMiddleRect:(struct CGRect)arg2 animationType:(unsigned int)arg3 inDuration:(int)arg4 outDuration:(int)arg5;

@end

