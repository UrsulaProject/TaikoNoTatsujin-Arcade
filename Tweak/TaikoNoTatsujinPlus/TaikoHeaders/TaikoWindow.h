//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaikoSceneNode.h"

@class TaikoAction;

@interface TaikoWindow : TaikoSceneNode
{
    struct _AGOBJECT windowLeftObject_;
    struct _AGOBJECT windowMiddleObject_;
    struct _AGOBJECT windowRightObject_;
    TaikoAction *windowInAction_;
    TaikoAction *windowOutAction_;
    TaikoAction *windowAction_;
    unsigned int shadowAlpha_;
    BOOL updated_;
    BOOL hidden_;
    BOOL finished_;
    BOOL _active;
    id <TaikoWindowDelegate> _delegate;
    struct CGPoint _origin;
}

+ (id)windowWithWindowTextureFrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg1 windowMiddleRect:(struct CGRect)arg2 animationType:(unsigned int)arg3 inDuration:(int)arg4 outDuration:(int)arg5;
@property(readonly, nonatomic) BOOL active; // @synthesize active=_active;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(nonatomic) id <TaikoWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setHidden:(BOOL)arg1;
- (BOOL)hidden;
@property(readonly, nonatomic) unsigned int shadowAlpha; // @synthesize shadowAlpha=shadowAlpha_;
- (void)startDisappearing;
- (void)startAppearing;
- (void)render;
- (void)update;
- (void)setFrameIndexOffset:(int)arg1;
- (void)resetColor;
- (void)dealloc;
- (id)initWithWindowTextureFrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg1 windowMiddleRect:(struct CGRect)arg2 animationType:(unsigned int)arg3 inDuration:(int)arg4 outDuration:(int)arg5;

@end

