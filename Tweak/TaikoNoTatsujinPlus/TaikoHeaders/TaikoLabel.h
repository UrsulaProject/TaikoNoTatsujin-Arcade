//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaikoSceneNode.h"

@class NSString, UIFont;

@interface TaikoLabel : TaikoSceneNode
{
    struct _AGTEXTURE texture_;
    struct _AGTEXTUREFRAMEGROUP textureFrameGroup_;
    struct CGSize size_;
    UIFont *font_;
    float offset_;
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)render;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 text:(id)arg2 font:(id)arg3;

@end

