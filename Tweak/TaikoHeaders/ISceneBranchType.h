//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BGSceneBase.h"

@class BGAnimation, BGSceneObject, NSMutableDictionary;

@interface ISceneBranchType : BGSceneBase
{
    _Bool started_;	// 108 = 0x6c
    BGSceneObject *kuroutoBgObject_;	// 112 = 0x70
    BGSceneObject *tatsujinBgObject_;	// 120 = 0x78
    BGSceneObject *futsuuObject_;	// 128 = 0x80
    BGSceneObject *kuroutoObject_;	// 136 = 0x88
    BGSceneObject *tatsujinObject_;	// 144 = 0x90
    NSMutableDictionary *animationCache_;	// 152 = 0x98
    BGAnimation *animations_[6][5];	// 160 = 0xa0
}

- (void)setBranchPattern:(int)arg1;
- (int)stateRun;
- (int)update;
- (void)sceneStart;
- (void)render;
- (void)sceneDestroy;
- (void)sceneLoad;
- (id)initWithManager:(id)arg1 group:(struct _AGTEXTUREFRAMEGROUP *)arg2;

@end
