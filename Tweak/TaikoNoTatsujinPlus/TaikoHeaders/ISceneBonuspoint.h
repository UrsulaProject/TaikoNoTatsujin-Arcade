//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISceneBase.h"

@interface ISceneBonuspoint : ISceneBase
{
    struct _AGOBJECT plateObject_;
    struct _AGOBJECT digitObjects_[7];
    int _refund;
}

@property(nonatomic) int refund; // @synthesize refund=_refund;
- (void)render;
- (int)stateRun;
- (void)sceneDestroy;
- (void)sceneLoad;
- (id)initWithManager:(id)arg1 plateFrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg2 digitFrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg3;

@end

