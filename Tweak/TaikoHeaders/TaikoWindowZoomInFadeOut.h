//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TaikoWindow.h"

@interface TaikoWindowZoomInFadeOut : TaikoWindow
{
    float cx_;	// 304 = 0x130
    float halfWidth_;	// 308 = 0x134
    SEL updateRoutine_;	// 312 = 0x138
}

- (void)startDisappearing;
- (void)startAppearing;
- (void)updateWithFading;
- (void)updateWithScaling;
- (void)update;
- (id)initWithWindowTextureFrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg1 windowMiddleRect:(struct CGRect)arg2 animationType:(unsigned int)arg3 inDuration:(int)arg4 outDuration:(int)arg5;

@end

