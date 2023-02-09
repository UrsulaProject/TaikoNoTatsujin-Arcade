//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BGSceneBase.h"

@class BGSceneObject;

@interface ISceneNamePlate : BGSceneBase
{
    BGSceneObject *iconObject_;	// 112 = 0x70
    BGSceneObject *nameObject_[5];	// 120 = 0x78
    struct _AGTEXTURE texture_;	// 160 = 0xa0
    struct _AGTEXTUREFRAMEGROUP nameGroup_;	// 216 = 0xd8
    _Bool _enabled;	// 240 = 0xf0
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (int)stateRun;
- (int)update;
- (void)sceneStart;
- (void)render;
- (void)display:(int)arg1;
- (void)sceneDestroy;
- (void)sceneLoad;
- (id)initWithManager:(id)arg1 index:(int)arg2;
- (void)createNameFrameGroup;

@end
