//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaikoSceneNode.h"

@interface TaikoNumberLabel : TaikoSceneNode
{
    int firstFrameIndex_;
    int maxFigures_;
    float stride_;
    float dx_;
    int _number;
    int _numberOfDigits;
}

@property(readonly, nonatomic) int numberOfDigits; // @synthesize numberOfDigits=_numberOfDigits;
@property(nonatomic) int number; // @synthesize number=_number;
@property(readonly, nonatomic) float width;
- (void)renderRelativeToX:(float)arg1 y:(float)arg2;
- (void)render;
- (id)initWithTextureFrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg1 firstFrameIndex:(int)arg2 stride:(float)arg3 maxFigures:(int)arg4;

@end

