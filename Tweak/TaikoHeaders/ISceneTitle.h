//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ISceneBase.h"

#import "BGSNSInterfaceDelegate-Protocol.h"

@class NSString, UIButton;

@interface ISceneTitle : ISceneBase <BGSNSInterfaceDelegate>
{
    struct _AASAMPLE m_TitleSample;	// 72 = 0x48
    struct _AGTEXTURE m_MainTexture;	// 96 = 0x60
    struct _AGTEXTUREFRAMEGROUP m_TFGBack;	// 152 = 0x98
    struct _AGTEXTUREFRAMEGROUP m_TFGVersion;	// 176 = 0xb0
    struct _AGTEXTUREFRAMEGROUP m_TFGStart;	// 200 = 0xc8
    struct _AGTEXTURE m_TitleTexture;	// 224 = 0xe0
    struct _AGOBJECT m_BackObject;	// 280 = 0x118
    struct _AGOBJECT m_VersionObject;	// 336 = 0x150
    struct _AGOBJECT m_ButtonObject;	// 392 = 0x188
    int m_State;	// 448 = 0x1c0
    int m_Counter;	// 452 = 0x1c4
    _Bool m_WaitingExitAgreementDialog;	// 456 = 0x1c8
    int m_JumpScene;	// 460 = 0x1cc
    UIButton *bannerButton_;	// 464 = 0x1d0
}

- (void)SNSInterfaceNumber:(unsigned long long)arg1 didFinishWithCode:(id)arg2 entry:(id)arg3 object:(id)arg4;
- (void)SNSInterfaceNumber:(unsigned long long)arg1 didFailWithError:(id)arg2 object:(id)arg3;
- (void)touchUpInsideOfBannerButton;
- (void)ExitDlg:(int)arg1 Result:(int)arg2;
- (int)stateRun;
- (void)loadBanner;
- (void)render;
- (int)update;
- (void)updateInput;
- (void)sceneStart;
- (void)sceneDestroy;
- (void)sceneLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

