//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ISceneBase.h"

#import "BGSNSInterfaceDelegate-Protocol.h"
#import "TaikoUpdateCheckerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class ISceneBonuspoint, ISceneNamePlate, LumenManager, NSString, TaikoPrize;

@interface ISceneFukubiki : ISceneBase <TaikoUpdateCheckerDelegate, BGSNSInterfaceDelegate, UIAlertViewDelegate>
{
    int m_NextScene;	// 72 = 0x48
    int m_FadeCounter;	// 76 = 0x4c
    TaikoPrize *prize_;	// 80 = 0x50
    int fukubikiCost_;	// 88 = 0x58
    struct _AGTEXTURE mainTexture_;	// 96 = 0x60
    struct _AGTEXTUREFRAMEGROUP backButtonFrameGroup_;	// 152 = 0x98
    struct _AGOBJECT backButtonObject_;	// 176 = 0xb0
    struct _AGTEXTUREFRAMEGROUP tfgPrizeListButton_;	// 232 = 0xe8
    struct _AGOBJECT prizeListButtonObject_;	// 256 = 0x100
    struct _AGTEXTUREFRAMEGROUP tfgLumen_;	// 312 = 0x138
    struct _AGTEXTUREFRAMEGROUP tfgButton_;	// 336 = 0x150
    struct _AGTEXTUREFRAMEGROUP tfgBonuspointPlate_;	// 360 = 0x168
    struct _AGTEXTUREFRAMEGROUP tfgBonuspointDigit_;	// 384 = 0x180
    ISceneBonuspoint *sceneBonuspoint_;	// 408 = 0x198
    ISceneNamePlate *sceneNamePlate_;	// 416 = 0x1a0
    LumenManager *lumenManager_;	// 424 = 0x1a8
    void *lumenPlayer_;	// 432 = 0x1b0
    _Bool isGettingCost_;	// 440 = 0x1b8
    _Bool isGotoPriseList_;	// 441 = 0x1b9
}

- (void)updateChecker:(id)arg1 didFinishWithType:(unsigned int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)SNSInterfaceNumber:(unsigned long long)arg1 didFailWithError:(id)arg2 object:(id)arg3;
- (void)SNSInterfaceNumber:(unsigned long long)arg1 didFinishWithCode:(id)arg2 entry:(id)arg3 object:(id)arg4;
- (int)stateFadeOut;
- (int)stateFadeIn;
- (int)stateGetCost;
- (int)stateResult;
- (int)stateCheckUpdate;
- (int)stateWait;
- (int)stateRun;
- (void)goBackToMenu;
- (void)render;
- (void)updateAnimation;
- (int)update;
- (void)sceneStart;
- (void)sceneDestroy;
- (void)sceneLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

