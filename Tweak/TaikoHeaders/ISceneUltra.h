//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ISceneBase.h"

@interface ISceneUltra : ISceneBase
{
    struct _AGTEXTURE m_MainTexture;	// 72 = 0x48
    struct _AGTEXTUREFRAMEGROUP m_TFGBack;	// 128 = 0x80
    struct _AGOBJECT m_BackObject;	// 152 = 0x98
    int m_State;	// 208 = 0xd0
    int m_Counter;	// 212 = 0xd4
}

- (int)stateRun;
- (void)render;
- (void)sceneStart;
- (void)sceneDestroy;
- (void)sceneLoad;

@end

