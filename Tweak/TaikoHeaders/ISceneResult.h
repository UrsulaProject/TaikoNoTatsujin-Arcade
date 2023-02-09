//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ISceneBase.h"

#import "BGSNSInterfaceDelegate-Protocol.h"
#import "SceneDialogDelegate-Protocol.h"
#import "TwitterApiDelegate-Protocol.h"

@class BGSNSInterfaceError, GameOptionIcons, ISceneDialog, IScenePlayBonusDialog, NSString, NSURL, TwitterApiStatus;

@interface ISceneResult : ISceneBase <TwitterApiDelegate, BGSNSInterfaceDelegate, SceneDialogDelegate>
{
    struct _AASAMPLE m_NewRecordSample;	// 72 = 0x48
    struct _AASAMPLE m_FullComboSample;	// 96 = 0x60
    struct _AASAMPLE m_ScoreSample;	// 120 = 0x78
    struct _AASAMPLE m_ResultSample;	// 144 = 0x90
    struct _AGTEXTURE m_MainTexture;	// 168 = 0xa8
    struct _AGTEXTUREFRAMEGROUP m_BackFrameGroup;	// 224 = 0xe0
    struct _AGTEXTUREFRAMEGROUP m_BoardFrameGroup;	// 248 = 0xf8
    struct _AGTEXTUREFRAMEGROUP m_CourseIconFrameGroup;	// 272 = 0x110
    struct _AGTEXTUREFRAMEGROUP m_ScoreNumFrameGroup;	// 296 = 0x128
    struct _AGTEXTUREFRAMEGROUP m_CommonNumFrameGroup;	// 320 = 0x140
    struct _AGTEXTUREFRAMEGROUP m_MeterFrameGroup;	// 344 = 0x158
    struct _AGTEXTUREFRAMEGROUP m_FireFrameGroup;	// 368 = 0x170
    struct _AGTEXTUREFRAMEGROUP m_DonCommonFrameGroup;	// 392 = 0x188
    struct _AGTEXTUREFRAMEGROUP m_DonCustomFrameGroup;	// 416 = 0x1a0
    struct _AGTEXTUREFRAMEGROUP m_EmblemFrameGroup;	// 440 = 0x1b8
    struct _AGTEXTUREFRAMEGROUP m_PersonalBestFrameGroup;	// 464 = 0x1d0
    struct _AGTEXTUREFRAMEGROUP m_FullComboFrameGroup;	// 488 = 0x1e8
    struct _AGTEXTUREFRAMEGROUP m_FlowersFrameGroup;	// 512 = 0x200
    struct _AGTEXTUREFRAMEGROUP m_CloudFrameGroup;	// 536 = 0x218
    struct _AGTEXTUREFRAMEGROUP m_WaterFrameGroup;	// 560 = 0x230
    struct _AGTEXTUREFRAMEGROUP m_RainFrameGroup;	// 584 = 0x248
    struct _AGTEXTUREFRAMEGROUP m_WormFrameGroup;	// 608 = 0x260
    struct _AGTEXTUREFRAMEGROUP m_SongTitleFrameGroup;	// 632 = 0x278
    struct _AGTEXTUREFRAMEGROUP m_WindowFrameGroup;	// 656 = 0x290
    struct _AGTEXTUREFRAMEGROUP m_WindowContentsFrameGroup;	// 680 = 0x2a8
    struct _AGOBJECT m_BackObject;	// 704 = 0x2c0
    struct _AGOBJECT m_TextObject;	// 760 = 0x2f8
    struct _AGOBJECT m_BoardObject[3];	// 816 = 0x330
    struct _AGOBJECT m_CourseIconObject;	// 984 = 0x3d8
    struct _AGOBJECT m_ScoreNumObject[8];	// 1040 = 0x410
    struct _AGOBJECT m_MaxComboNumObject[4];	// 1488 = 0x5d0
    struct _AGOBJECT m_HitRateNumObject[3];	// 1712 = 0x6b0
    struct _AGOBJECT m_MeterObject[5];	// 1880 = 0x758
    struct _AGOBJECT m_EmblemObject;	// 2160 = 0x870
    struct _AGOBJECT m_PersonalBestObject[3];	// 2216 = 0x8a8
    struct _AGOBJECT m_FullComboObject;	// 2384 = 0x950
    struct _AGOBJECT m_DonObject;	// 2440 = 0x988
    struct _AGOBJECT m_FlowersObject;	// 2496 = 0x9c0
    struct _AGOBJECT m_CloudObject;	// 2552 = 0x9f8
    struct _AGOBJECT m_WaterObject;	// 2608 = 0xa30
    struct _AGOBJECT m_RainObject[24];	// 2664 = 0xa68
    struct _AGOBJECT m_WormObject;	// 4008 = 0xfa8
    struct _AGOBJECT m_SongTitleObject;	// 4064 = 0xfe0
    _Bool m_TwitterEnabled;	// 4120 = 0x1018
    _Bool m_UpdateTwitter;	// 4121 = 0x1019
    int m_NextScene;	// 4124 = 0x101c
    int m_Meter;	// 4128 = 0x1020
    int m_MeterMax;	// 4132 = 0x1024
    int m_MeterLimit;	// 4136 = 0x1028
    _Bool m_KanpekiFailed;	// 4140 = 0x102c
    int m_ScoreTextLength;	// 4144 = 0x1030
    int m_ScoreText[7];	// 4148 = 0x1034
    int m_MaxComboTextLength;	// 4176 = 0x1050
    int m_MaxComboText[4];	// 4180 = 0x1054
    int m_HitRateTextLength;	// 4196 = 0x1064
    int m_HitRateText[3];	// 4200 = 0x1068
    int m_MeterLength;	// 4212 = 0x1074
    int m_Counter;	// 4216 = 0x1078
    int m_EmblemAnimationCounter;	// 4220 = 0x107c
    float m_EmblemPosition;	// 4224 = 0x1080
    float m_EmblemSpeed;	// 4228 = 0x1084
    int m_PersonalBestAnimationCounter;	// 4232 = 0x1088
    int m_FullComboAnimationCounter;	// 4236 = 0x108c
    int m_FireAnimationCounter;	// 4240 = 0x1090
    int m_DonAnimationCounter;	// 4244 = 0x1094
    int m_DonAnimation;	// 4248 = 0x1098
    float m_DonPosition;	// 4252 = 0x109c
    float m_DonJumpHeight;	// 4256 = 0x10a0
    int m_FlowersAnimationCounter;	// 4260 = 0x10a4
    float m_FlowersPosition;	// 4264 = 0x10a8
    float m_RainPosition;	// 4268 = 0x10ac
    float m_RainSpace;	// 4272 = 0x10b0
    int m_FailedAnimationCounter;	// 4276 = 0x10b4
    int m_TextAnimationCounter;	// 4280 = 0x10b8
    int m_SubmitSelect;	// 4284 = 0x10bc
    _Bool m_ShowFire;	// 4288 = 0x10c0
    _Bool m_ShowFlowers;	// 4289 = 0x10c1
    _Bool m_ShowFailed;	// 4290 = 0x10c2
    _Bool m_ShowSubmit;	// 4291 = 0x10c3
    int m_URLRequestType;	// 4292 = 0x10c4
    TwitterApiStatus *m_twitterApi;	// 4296 = 0x10c8
    GameOptionIcons *m_GameOptionIcons;	// 4304 = 0x10d0
    struct _AGOBJECT m_NumJudgeNumObject[3][4];	// 4312 = 0x10d8
    int m_NumJudgeTextLength[3];	// 4984 = 0x1378
    int m_NumJudgeText[3][4];	// 4996 = 0x1384
    int m_JudgeIndex;	// 5044 = 0x13b4
    int m_PauseState;	// 5048 = 0x13b8
    NSURL *m_CollaboURL;	// 5056 = 0x13c0
    struct _AGTEXTUREFRAMEGROUP m_SubmitDialogWindowFrameGroup;	// 5064 = 0x13c8
    struct _AGTEXTUREFRAMEGROUP m_SubmitDialogMessageFrameGroup;	// 5088 = 0x13e0
    struct _AGTEXTUREFRAMEGROUP m_SubmitDialogButtonFrameGroup;	// 5112 = 0x13f8
    struct _AGTEXTUREFRAMEGROUP m_SubmitDialogChoiceFrameGroup;	// 5136 = 0x1410
    ISceneDialog *m_SubmitDialog;	// 5160 = 0x1428
    struct _AGTEXTUREFRAMEGROUP m_BonusDialogWindowFrameGroup;	// 5168 = 0x1430
    struct _AGTEXTUREFRAMEGROUP m_BonusDialogMessageFrameGroup;	// 5192 = 0x1448
    struct _AGTEXTUREFRAMEGROUP m_BonusDialogButtonFrameGroup;	// 5216 = 0x1460
    struct _AGTEXTUREFRAMEGROUP m_BonusDialogChoiceFrameGroup;	// 5240 = 0x1478
    struct _AGTEXTUREFRAMEGROUP m_BonusDialogDigitFrameGroup;	// 5264 = 0x1490
    struct _AGTEXTUREFRAMEGROUP m_BonusDialogGetFrameGroup;	// 5288 = 0x14a8
    struct _AGTEXTUREFRAMEGROUP m_BonusDialogPraiseFrameGroup;	// 5312 = 0x14c0
    IScenePlayBonusDialog *m_BonusDialog;	// 5336 = 0x14d8
    _Bool m_PlayNotified;	// 5344 = 0x14e0
    id m_PlayNotificationObject;	// 5352 = 0x14e8
    BGSNSInterfaceError *m_PlayNotificationError;	// 5360 = 0x14f0
    _Bool m_AchievedGoal;	// 5368 = 0x14f8
    _Bool m_IsGotoRanking;	// 5369 = 0x14f9
    struct _AGTEXTUREFRAMEGROUP m_ExerciseDialogMessageFrameGroup;	// 5376 = 0x1500
    ISceneDialog *m_ExerciseDialog;	// 5400 = 0x1518
}

- (void)sceneDialog:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (int)stateExerciseDialog;
- (void)changeStateExercise;
- (void)updateCollaboBonus;
- (int)stateCollaboIdle;
- (int)stateTwitterIdle;
- (int)stateRankingIdle;
- (int)stateBonusDialog;
- (int)stateWaitResponse;
- (int)stateIdle;
- (int)stateWaitUserInteraction;
- (void)changeStateFromIdle;
- (int)stateSubmit;
- (void)updateRanking;
- (void)SNSInterfaceNumber:(unsigned long long)arg1 didFinishWithCode:(id)arg2 entry:(id)arg3 object:(id)arg4;
- (void)SNSInterfaceNumber:(unsigned long long)arg1 didFailWithError:(id)arg2 object:(id)arg3;
- (void)twitterApiFailed:(int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)twitterApiSuccess;
- (void)updateTwitter;
- (int)stateFadeOut;
- (int)stateFullCombo;
- (int)stateCountMeter;
- (int)stateCountNumJudge;
- (int)stateCountHitRate;
- (int)stateCountMaxCombo;
- (int)stateCountScore;
- (int)stateFadeIn;
- (void)updateAnimation;
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
