//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ISceneBase.h"

#import "GKTaikoBattleDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class ISceneBranchType, ISceneFullCombo, ISongInfo, NSMutableArray, NSString;

@interface ISceneVSGame : ISceneBase <GKTaikoBattleDelegate, UIAlertViewDelegate>
{
    struct _AASAMPLE m_TaikoSample[2];	// 72 = 0x48
    struct _AASAMPLE m_ComboSample[16];	// 120 = 0x78
    struct _AASAMPLE m_BalloonSample;	// 504 = 0x1f8
    struct _AASAMPLE m_ComboBreakSample;	// 528 = 0x210
    struct _AASAMPLE m_arpBattleSample[10];	// 552 = 0x228
    struct _AGTEXTURE m_MainTexture;	// 792 = 0x318
    struct _AGTEXTURE m_SongTexture;	// 848 = 0x350
    struct _AGTEXTUREFRAMEGROUP m_aroTGFDon[2];	// 904 = 0x388
    struct _AGTEXTUREFRAMEGROUP m_aroTGFGekiDon[2];	// 952 = 0x3b8
    struct _AGOBJECT m_aroObjDonObject[2];	// 1000 = 0x3e8
    struct _AGTEXTUREFRAMEGROUP m_TFGScoreObjectEffect;	// 1112 = 0x458
    struct _AGTEXTUREFRAMEGROUP m_TFGBalloon;	// 1136 = 0x470
    struct _AGOBJECT m_BalloonObject;	// 1160 = 0x488
    struct _AGTEXTUREFRAMEGROUP m_TFGCommonNum;	// 1216 = 0x4c0
    struct _AGTEXTUREFRAMEGROUP m_HitNumFrameGroup;	// 1240 = 0x4d8
    struct _AGTEXTUREFRAMEGROUP m_ComboNumFrameGroup;	// 1264 = 0x4f0
    struct _AGTEXTUREFRAMEGROUP m_TFGLane;	// 1288 = 0x508
    struct _AGOBJECT m_LaneObject[10];	// 1312 = 0x520
    struct _AGTEXTUREFRAMEGROUP m_TFGLaneHit;	// 1872 = 0x750
    struct _AGOBJECT m_LaneFlash;	// 1896 = 0x768
    struct _AGOBJECT m_LaneHit;	// 1952 = 0x7a0
    struct _AGOBJECT m_LaneFeaver;	// 2008 = 0x7d8
    struct _AGTEXTUREFRAMEGROUP m_TFGEvent;	// 2064 = 0x810
    struct _AGTEXTUREFRAMEGROUP m_TFGEventText;	// 2088 = 0x828
    struct _AGTEXTUREFRAMEGROUP m_SongFrameGroup;	// 2112 = 0x840
    struct _AGOBJECT m_SongTitleObject;	// 2136 = 0x858
    struct _AGTEXTUREFRAMEGROUP m_TFGEventEffect;	// 2192 = 0x890
    struct _AGTEXTUREFRAMEGROUP m_TFGJudge;	// 2216 = 0x8a8
    struct _AGOBJECT m_EventEffectObject[2];	// 2240 = 0x8c0
    struct _AGOBJECT m_JudgeObject;	// 2352 = 0x930
    struct _AGTEXTUREFRAMEGROUP m_TFGFire;	// 2408 = 0x968
    struct _AGOBJECT m_BonusFireObject;	// 2432 = 0x980
    struct _AGOBJECT m_ClearFireObject;	// 2488 = 0x9b8
    struct _AGTEXTUREFRAMEGROUP m_TFGTaiko;	// 2544 = 0x9f0
    struct _AGOBJECT m_TaikoObject;	// 2568 = 0xa08
    struct _AGOBJECT m_ComboBubbleDigit[4];	// 2624 = 0xa40
    struct _AGOBJECT m_ComboBubbleObject;	// 2848 = 0xb20
    struct _AGOBJECT m_HitBubbleDigit[4];	// 2904 = 0xb58
    struct _AGOBJECT m_HitBubbleObject[2];	// 3128 = 0xc38
    struct _AGOBJECT m_BalloonBubbleDigitObject[3];	// 3240 = 0xca8
    struct _AGOBJECT m_BalloonBubbleObject;	// 3408 = 0xd50
    struct CGPoint m_DonBallonPosition;	// 3464 = 0xd88
    struct CGPoint m_BalloonPosition;	// 3480 = 0xd98
    struct _AGTEXTUREFRAMEGROUP m_RuleGroup;	// 3496 = 0xda8
    struct _AGOBJECT m_RuleObject;	// 3520 = 0xdc0
    int m_ScoreObjectCount;	// 3576 = 0xdf8
    int m_ScoreObjectFirstIndex;	// 3580 = 0xdfc
    struct _GAME_SCOREOBJECT m_ScoreObject[32];	// 3584 = 0xe00
    struct CGPoint m_ScoreObjectDestination;	// 4864 = 0x1300
    float m_EventTextPosition;	// 4880 = 0x1310
    float m_BarrageEventTextSpace;	// 4884 = 0x1314
    float m_BalloonEventObjectSpace;	// 4888 = 0x1318
    struct CGPoint m_LastTouchPoint[10];	// 4896 = 0x1320
    unsigned int m_TouchRelative[10];	// 5056 = 0x13c0
    double LastTime;	// 5096 = 0x13e8
    double LastEndTime;	// 5104 = 0x13f0
    double m_dAddCurrentTick;	// 5112 = 0x13f8
    float m_MaxTime;	// 5120 = 0x1400
    int m_CurrentBar;	// 5124 = 0x1404
    int m_CurrentTick;	// 5128 = 0x1408
    int m_nAddCurrentTick;	// 5132 = 0x140c
    struct CGPoint m_TaikoCenter;	// 5136 = 0x1410
    float m_TaikoRadius;	// 5152 = 0x1420
    float m_TaikoLimitLine;	// 5156 = 0x1424
    float m_TaikoRyoCenterDistance;	// 5160 = 0x1428
    unsigned int m_TaikoSize;	// 5164 = 0x142c
    int m_NextTaikoHitType;	// 5168 = 0x1430
    int m_TaikoHitType;	// 5172 = 0x1434
    int m_NextTaikoHitTypeInAuto;	// 5176 = 0x1438
    int m_TaikoHitTypeInAuto;	// 5180 = 0x143c
    int m_TaikoTimeOutCounter[4];	// 5184 = 0x1440
    float m_TaikoHitPosition[2];	// 5200 = 0x1450
    int m_LaneHitType;	// 5208 = 0x1458
    int m_LaneHitTimeOutCounter;	// 5212 = 0x145c
    int m_LaneFeaverCounter;	// 5216 = 0x1460
    struct CGPoint m_TargetPoint;	// 5224 = 0x1468
    float m_TimingValue[3][3];	// 5240 = 0x1478
    float m_TimingShift;	// 5276 = 0x149c
    float m_Offset4Inch;	// 5280 = 0x14a0
    int m_BarCount;	// 5284 = 0x14a4
    struct _GAME_BAR *m_Bar;	// 5288 = 0x14a8
    int m_ScoreEventCount;	// 5296 = 0x14b0
    struct _GAME_SCOREEVENT *m_ScoreEvent;	// 5304 = 0x14b8
    float m_EventObjectSpeed;	// 5312 = 0x14c0
    int m_MaxHitCount;	// 5316 = 0x14c4
    int m_MeterAdd[3];	// 5320 = 0x14c8
    int m_MeterMax;	// 5332 = 0x14d4
    int m_MeterLimit;	// 5336 = 0x14d8
    int m_ScoreAdd;	// 5340 = 0x14dc
    int m_ComboAdd;	// 5344 = 0x14e0
    int m_Combo;	// 5348 = 0x14e4
    int m_MaxCombo;	// 5352 = 0x14e8
    int m_ShowCombo;	// 5356 = 0x14ec
    int m_ComboShowCounter;	// 5360 = 0x14f0
    int m_ComboDigitStretchCounter;	// 5364 = 0x14f4
    int m_Score;	// 5368 = 0x14f8
    int m_HitCount;	// 5372 = 0x14fc
    int m_RyoCount;	// 5376 = 0x1500
    int m_FirstRenderEvent;	// 5380 = 0x1504
    int m_CurrentScoreEvent;	// 5384 = 0x1508
    int m_Meter;	// 5388 = 0x150c
    int m_JudgeType;	// 5392 = 0x1510
    int m_JudgeCounter;	// 5396 = 0x1514
    _Bool m_Miss;	// 5400 = 0x1518
    _Bool m_WaitingHitTouch;	// 5401 = 0x1519
    _Bool m_Paused;	// 5402 = 0x151a
    _Bool m_DonFront;	// 5403 = 0x151b
    struct _GAME_SCOREEVENT *m_CurrentBarrage;	// 5408 = 0x1520
    int m_BarrageCount;	// 5416 = 0x1528
    int m_RendaStrechCounter;	// 5420 = 0x152c
    int m_RendaDismissCounter;	// 5424 = 0x1530
    struct _GAME_SCOREEVENT *m_CurrentGekiBarrage;	// 5432 = 0x1538
    int m_GekiBarrageCount;	// 5440 = 0x1540
    int m_GekiBarrageStretchCounter;	// 5444 = 0x1544
    int m_BallonDismissCounter;	// 5448 = 0x1548
    int m_BalloonSize;	// 5452 = 0x154c
    _Bool m_BallonFirstHit;	// 5456 = 0x1550
    _Bool m_BallonFailed;	// 5457 = 0x1551
    _Bool m_BallonGoGoTime;	// 5458 = 0x1552
    _Bool m_GogoTimeActive;	// 5459 = 0x1553
    float m_PauseLimitLine;	// 5460 = 0x1554
    float m_OldClearColor[4];	// 5464 = 0x1558
    struct _AGTEXTURE m_DonTexture;	// 5480 = 0x1568
    struct _AGTEXTURE m_DonTwoTexture;	// 5536 = 0x15a0
    struct _AGTEXTURE m_FontTexture;	// 5592 = 0x15d8
    struct _AGTEXTUREFRAMEGROUP m_ScoreBGFrameGroup;	// 5648 = 0x1610
    struct _AGTEXTUREFRAMEGROUP m_NameFrameGroups[4];	// 5672 = 0x1628
    struct _AGTEXTUREFRAMEGROUP m_ScoreFrameGroup;	// 5768 = 0x1688
    struct _AGTEXTUREFRAMEGROUP m_RankFrameGroup;	// 5792 = 0x16a0
    struct _AGTEXTUREFRAMEGROUP m_ComboWordFrameGroup;	// 5816 = 0x16b8
    struct _AGTEXTUREFRAMEGROUP m_ComNameGroup;	// 5840 = 0x16d0
    struct _AGTEXTUREFRAMEGROUP m_ConnectErrorGroup;	// 5864 = 0x16e8
    struct _AGOBJECT m_ScoreBGObject[4][3];	// 5888 = 0x1700
    struct _AGOBJECT m_ScoreNumObject[4][7];	// 6560 = 0x19a0
    struct _AGOBJECT m_NameObject[4][5];	// 8128 = 0x1fc0
    struct _AGOBJECT m_RankObject[4];	// 9248 = 0x2420
    struct _AGOBJECT m_ComboNumObject[4][4];	// 9472 = 0x2500
    struct _AGOBJECT m_ComboWordObject[4];	// 10368 = 0x2880
    struct _AGOBJECT m_aroObjComName[3];	// 10592 = 0x2960
    struct CGRect m_MemberInfoBackRect[4];	// 10760 = 0x2a08
    struct CGRect m_MemberInfoComboRect[4];	// 10888 = 0x2a88
    struct _AGTEXTUREFRAMEGROUP m_oTexItemRouletteGroup;	// 11016 = 0x2b08
    struct _AGTEXTUREFRAMEGROUP m_oTexOjamaWaitGroup;	// 11040 = 0x2b20
    struct _AGTEXTUREFRAMEGROUP m_oTexOjamaMotionGroup;	// 11064 = 0x2b38
    struct _AGTEXTUREFRAMEGROUP m_oTexOjamaCantUse;	// 11088 = 0x2b50
    struct _AGTEXTUREFRAMEGROUP m_oTexTaikoBack;	// 11112 = 0x2b68
    struct _AGOBJECT m_aroObjItemMine[4];	// 11136 = 0x2b80
    struct _AGOBJECT m_aroObjOjamaFall[4];	// 11360 = 0x2c60
    struct _AGOBJECT m_aroObjOjamaMusic[4];	// 11584 = 0x2d40
    struct _AGOBJECT m_oObjOjamaWait;	// 11808 = 0x2e20
    struct _AGOBJECT m_oObjOjamaUpFromWait;	// 11864 = 0x2e58
    struct _AGOBJECT m_oObjOjamaTouchText;	// 11920 = 0x2e90
    struct _AGOBJECT m_aroObjOjamaMotion[6];	// 11976 = 0x2ec8
    struct _AGOBJECT m_oObjOjamaCantUseBack;	// 12312 = 0x3018
    struct _AGOBJECT m_oObjOjamaCantUseCross;	// 12368 = 0x3050
    struct _AGOBJECT m_oObjTaikoBack;	// 12424 = 0x3088
    struct _AGOBJECT m_aroObjWindowConnectError[3];	// 12480 = 0x30c0
    struct _AGOBJECT m_oObjTextConnectError;	// 12648 = 0x3168
    struct CGPoint m_aroDonPosition[2];	// 12704 = 0x31a0
    int m_IconFlashCounter;	// 12736 = 0x31c0
    int m_BonusFireCounter;	// 12740 = 0x31c4
    int m_NextScene;	// 12744 = 0x31c8
    int m_FadeAmount;	// 12748 = 0x31cc
    _Bool m_BGMStarted;	// 12752 = 0x31d0
    _Bool m_BGMFinished;	// 12753 = 0x31d1
    int m_ChibiType;	// 12756 = 0x31d4
    int m_Counter;	// 12760 = 0x31d8
    int m_Rule;	// 12764 = 0x31dc
    _Bool m_useItem;	// 12768 = 0x31e0
    NSMutableArray *m_members;	// 12776 = 0x31e8
    unsigned int m_AutoPlayHitSide;	// 12784 = 0x31f0
    unsigned int m_CurrentAutoPlayEvent;	// 12788 = 0x31f4
    unsigned int m_AutoCount;	// 12792 = 0x31f8
    struct _TOUCH *m_arsTouchTakoyaki[6];	// 12800 = 0x3200
    struct CGRect m_oRectTakoyakiOut;	// 12848 = 0x3230
    struct CGPoint m_oPointOjamaWaitBase;	// 12880 = 0x3250
    struct CGPoint m_aroPointOjamaFallBase[4];	// 12896 = 0x3260
    struct CGPoint m_aroPointOjamaMotionBase[6];	// 12960 = 0x32a0
    struct CGPoint m_aroPointTakoMoveAdd[6];	// 13056 = 0x3300
    struct CGPoint m_oPointTaikoObjBefore;	// 13152 = 0x3360
    struct CGPoint m_aroPointTaikoObj[4];	// 13168 = 0x3370
    struct CGPoint m_aroPointTakoyakiStart[6];	// 13232 = 0x33b0
    struct CGPoint m_aroPointTakoyakiMoveBefore[6];	// 13328 = 0x3410
    struct CGPoint m_aroPointTakoyakiAdd[6];	// 13424 = 0x3470
    unsigned int m_arnItemRouletteState[4];	// 13520 = 0x34d0
    unsigned int m_arnItemRouletteCount[4];	// 13536 = 0x34e0
    unsigned int m_nItemSubmitType;	// 13552 = 0x34f0
    unsigned int m_nItemSubmitCount;	// 13556 = 0x34f4
    unsigned int m_nOjamaWaitState;	// 13560 = 0x34f8
    unsigned int m_nOjamaWaitCount;	// 13564 = 0x34fc
    unsigned int m_arnOjamaFallState[4];	// 13568 = 0x3500
    unsigned int m_arnOjamaFallCount[4];	// 13584 = 0x3510
    unsigned int m_nOjamaMotionState;	// 13600 = 0x3520
    unsigned int m_nOjamaMotionCount;	// 13604 = 0x3524
    unsigned int m_nOjamaMusicUseMember;	// 13608 = 0x3528
    unsigned int m_nOjamaMusicCount;	// 13612 = 0x352c
    unsigned int m_arnOjamaMotionState[6];	// 13616 = 0x3530
    unsigned int m_arnOjamaMotionCount[6];	// 13640 = 0x3548
    unsigned int m_nTaikoBombState;	// 13664 = 0x3560
    unsigned int m_nTaikoBombCount;	// 13668 = 0x3564
    unsigned int m_ararnStartDelayCount[4][6];	// 13672 = 0x3568
    unsigned int m_nTestDelayCheckCount;	// 13768 = 0x35c8
    unsigned int m_nTestDelayCheckMember;	// 13772 = 0x35cc
    unsigned int m_arnComEvent[4];	// 13776 = 0x35d0
    unsigned int m_arnComBarrageCount[4];	// 13792 = 0x35e0
    unsigned int m_arnComOjamaWaitType[4];	// 13808 = 0x35f0
    unsigned int m_arnComOjamaWaitCount[4];	// 13824 = 0x3600
    unsigned int m_arnComOjamaMotionCount[4];	// 13840 = 0x3610
    unsigned int m_arnComItemType[4];	// 13856 = 0x3620
    unsigned int m_arnComItemCount[4];	// 13872 = 0x3630
    unsigned int m_nComNormalJudgeRyo;	// 13888 = 0x3640
    unsigned int m_nComNormalJudgeKa;	// 13892 = 0x3644
    unsigned int m_nComBarrageFrame;	// 13896 = 0x3648
    unsigned int m_nComGekiBarrageFrame;	// 13900 = 0x364c
    unsigned int m_nComOjamaJudgeRyo;	// 13904 = 0x3650
    unsigned int m_nComOjamaJudgeKa;	// 13908 = 0x3654
    unsigned int m_nComBarrageOjamaFrame;	// 13912 = 0x3658
    unsigned int m_nComGekiBarrageOjamaFrame;	// 13916 = 0x365c
    unsigned int m_arnComBarrageMaxCount[4];	// 13920 = 0x3660
    unsigned int m_nCompStartCount;	// 13936 = 0x3670
    float m_fOjamaWaitSpeed;	// 13940 = 0x3674
    float m_fOjamaFallSpeed;	// 13944 = 0x3678
    float m_fOjamaMotionSpeed;	// 13948 = 0x367c
    float m_fTakoyakiFlipStartDis;	// 13952 = 0x3680
    int m_ComboBefore;	// 13956 = 0x3684
    int m_nCounterMax;	// 13960 = 0x3688
    _Bool m_nGameFromReady;	// 13964 = 0x368c
    _Bool m_nGameTouchEnable;	// 13965 = 0x368d
    _Bool m_nCompGameStart;	// 13966 = 0x368e
    _Bool m_nGKTBUpdate;	// 13967 = 0x368f
    _Bool m_nVisibleMenberScore;	// 13968 = 0x3690
    _Bool m_nShowConnectError;	// 13969 = 0x3691
    _Bool m_nComAllIsBarrage;	// 13970 = 0x3692
    _Bool m_nCantOjamaSubmit;	// 13971 = 0x3693
    _Bool m_bServerEnd;	// 13972 = 0x3694
    ISongInfo *m_SongInfo;	// 13976 = 0x3698
    _Bool m_KanpekiFailed;	// 13984 = 0x36a0
    int m_FullComboState;	// 13988 = 0x36a4
    ISceneFullCombo *m_SceneFullCombo;	// 13992 = 0x36a8
    void *m_TaikoCore;	// 14000 = 0x36b0
    int m_LeadingBar;	// 14008 = 0x36b8
    int m_MaxGekiRendaNum;	// 14012 = 0x36bc
    int m_GekiRendaBonus;	// 14016 = 0x36c0
    int m_PreviousBranchPattern;	// 14020 = 0x36c4
    struct _AGTEXTUREFRAMEGROUP m_TFGBranchType;	// 14024 = 0x36c8
    ISceneBranchType *m_SceneBranchType;	// 14048 = 0x36e0
    int m_OiriPoint[4];	// 14056 = 0x36e8
    int m_RendaPercent;	// 14072 = 0x36f8
    int m_LastNoteIndex;	// 14076 = 0x36fc
    _Bool m_AllNotesFinished;	// 14080 = 0x3700
    _Bool m_FullCombo;	// 14081 = 0x3701
    int m_FullComboWaitFrame;	// 14084 = 0x3704
    CDStruct_6c704f80 *m_DrawArgsBar;	// 14088 = 0x3708
    int m_DrawArgIndexBar;	// 14096 = 0x3710
    CDStruct_6c704f80 *m_DrawArgsOthers;	// 14104 = 0x3718
    int m_DrawArgIndexOthers;	// 14112 = 0x3720
    float m_LaneLeftEdge;	// 14116 = 0x3724
    float m_LaneRightEdge;	// 14120 = 0x3728
    double m_LastDisplayTime;	// 14128 = 0x3730
    double m_LastBGMTime;	// 14136 = 0x3738
    int m_ItemBars[4][3];	// 14144 = 0x3740
    _Bool m_RouletteReady;	// 14192 = 0x3770
    _Bool m_RouletteFlag;	// 14193 = 0x3771
    double m_LastUpdatedTime;	// 14200 = 0x3778
    _Bool m_IsHonestClockDevice;	// 14208 = 0x3780
    float m_IdentifiableSquaredDistance;	// 14212 = 0x3784
    float m_DistinguishableSquaredDistance;	// 14216 = 0x3788
    float m_AppParamsDelay;	// 14220 = 0x378c
    struct CGPoint m_BombAnimationOffset;	// 14224 = 0x3790
    double m_TaikoCoreLastTime;	// 14240 = 0x37a0
    int *m_TaikoCore_LaneFlashType;	// 14248 = 0x37a8
    _Bool *m_TaikoCore_IsKanpeki;	// 14256 = 0x37b0
    int m_TaikoCore_NumberOfPlayers;	// 14264 = 0x37b8
    int m_TaikoCore_PastLastOnpuJustTimeCounter;	// 14268 = 0x37bc
}

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)disconnectAllPeer;
- (void)recieveData:(id)arg1 Scene:(unsigned int)arg2 Order:(unsigned int)arg3 Arr:(unsigned int)arg4;
- (void)applicationWillResignActive;
- (void)touchesUpdated;
- (int)stateReadyGotoNext;
- (int)stateFadeOutFromAlert;
- (int)stateFadeOutFromGame;
- (int)stateWaitServerEnd;
- (int)stateNotifyEnd;
- (int)stateGameReady;
- (int)stateTestDelayWait;
- (int)stateTestDelaySubmitForSV;
- (int)stateFadeIn;
- (int)stateIdle;
- (int)stateAlert;
- (int)stateRun;
- (void)updateFullCombo;
- (int)update;
- (void)processScoreEvents:(id)arg1 isKanpeki_p:(_Bool *)arg2 LaneFlashType_p:(int *)arg3 Time:(double)arg4;
- (void)startRoulette:(int)arg1;
- (void)checkCombo;
- (void)setMiss;
- (void)setMekaActionType:(int)arg1;
- (void)setFlashLane:(unsigned int)arg1;
- (void)addScoreObjectWithFrameIndex:(unsigned int)arg1 score:(int)arg2 meter:(int)arg3 goGoTime:(_Bool)arg4 rainbowVisible:(_Bool)arg5;
- (int)getScoreObjectWithScore:(int)arg1 goGoTime:(_Bool)arg2;
- (void)renderCommon;
- (int)changeExpression;
- (void)touchScreenAtPosition:(struct CGPoint)arg1 autoMode:(_Bool)arg2 TouchObj:(struct _TOUCH *)arg3;
- (void)sceneStart;
- (void)sceneDestroy;
- (void)sceneLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

