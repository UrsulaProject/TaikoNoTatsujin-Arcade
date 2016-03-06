//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaikoSceneNode.h"

@class UIButton, UIView;

@interface TaikoButton : TaikoSceneNode
{
    UIButton *uibutton_;
    struct CGRect bounds_;
    int frameIndices_[3];
    _Bool originChanged_;
    _Bool _enabledEvenIfTransparent;
    id <TaikoButtonDelegate> _delegate;
}

@property(nonatomic) id <TaikoButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enabledEvenIfTransparent; // @synthesize enabledEvenIfTransparent=_enabledEvenIfTransparent;
- (_Bool)isComposedOfUIButton:(id)arg1;
- (void)sendActionsForControlEvents:(unsigned long long)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)update;
@property(nonatomic) _Bool selected;
@property(nonatomic) _Bool enabled;
@property(nonatomic) UIView *superview;
- (void)setBounds:(struct CGRect)arg1;
- (void)setOrigin:(struct CGPoint)arg1;
- (void)updateUIButtonCenter;
- (void)setFrameIndex:(int)arg1 forState:(int)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)changeFrameIndex;
- (void)dealloc;
- (id)initWithTextureFrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg1 touchTransparent:(_Bool)arg2;
- (id)initWithTextureFrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg1;

@end

