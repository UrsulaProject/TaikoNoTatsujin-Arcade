//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext;

@interface TaikoRenderer : NSObject
{
    EAGLContext *context_;
    unsigned int programs_[3];
    unsigned int defaultFramebuffer_;
    unsigned int colorRenderbuffer_;
    int uniforms_[3][2];
    int backingWidth_;
    int backingHeight_;
    int frameWidth_;
    int frameHeight_;
    float contentScaleFactor_;
    int currentShader_;
    int currentBlendMode_;
    _Bool postscaling_;
    unsigned int postscalingFramebuffer_;
    unsigned int postscalingTexture_;
    struct _AGVERTEX postscalingVertices_[4];
    int backingWidthPostscaling_;
    int backingHeightPostscaling_;
    int frameWidthPostscaling_;
    int frameHeightPostscaling_;
    float _postscaleFactor;
}

@property(nonatomic) float postscaleFactor; // @synthesize postscaleFactor=_postscaleFactor;
- (void)setBlendMode:(int)arg1;
- (void)setShader:(int)arg1;
- (void)display;
- (void)flush;
- (void)initState:(int)arg1 frameHeight:(int)arg2 screenWidth:(int)arg3 screenHeight:(int)arg4;
- (void)setViewport:(int)arg1 frameHeight:(int)arg2 screenWidth:(int)arg3 screenHeight:(int)arg4;
- (_Bool)resize:(id)arg1;
- (_Bool)validateProgram:(unsigned int)arg1;
- (_Bool)linkProgram:(unsigned int)arg1;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 count:(int)arg3 sourcePath:(id)arg4;
- (void)destroyShaders:(unsigned int *)arg1 fragShader:(unsigned int *)arg2 prog:(unsigned int *)arg3;
- (_Bool)loadShader:(int)arg1;
- (void)setContentScaleFactor:(float)arg1;
- (void)setFrameSize:(int)arg1 height:(int)arg2;
- (void)dealloc;
- (id)init;

@end

