//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISceneBase.h"

#import "BGDownloadDelegate.h"
#import "BGSNSInterfaceDelegate.h"
#import "LicenseViewControllerDelegate.h"
#import "SKProductsRequestDelegate.h"
#import "SceneDialogDelegate.h"

@class BGDownload, ISceneDialog, ISceneNamePlate, ISceneOptionButton, ISceneOptionSelectDialog, ISceneScoreDialog, ISceneSortSelectDialog, ISceneSubscriptionMenu, NSArray, NSData, NSDateFormatter, NSMutableArray, NSMutableDictionary, NSString, SongCoursePlate, TaikoAction, TaikoButton, TaikoNumberLabel, TaikoProgressIndicator, TaikoRestore, TaikoSceneNode, TaikoTextureCache, UIActivityIndicatorView;

@interface ISceneSongSelect : ISceneBase <BGSNSInterfaceDelegate, SKProductsRequestDelegate, SceneDialogDelegate, BGDownloadDelegate, LicenseViewControllerDelegate>
{
    struct _AASAMPLE m_StartSample;
    struct _AASAMPLE m_SongSelectedSample;
    struct _AGTEXTURE m_MainTexture;
    struct _AGTEXTURE m_BarTexture;
    struct _AGTEXTUREFRAMEGROUP m_BackFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_TitleFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_BarFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_ExpandingBarFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_OptionLabelTitleGroup;
    struct _AGTEXTUREFRAMEGROUP m_OptionLabelCharGroup;
    struct _AGTEXTUREFRAMEGROUP m_OptionLabelSongAddTitleGroup;
    struct _AGTEXTUREFRAMEGROUP m_CrownFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_BackButtonFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_OkButtonFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_CloseButtonFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_SortFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_PopupWindow1FrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_PopupWindow2FrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_DownloadFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_UpdateTitleFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_UpdateImageFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_NewIconFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_NewMessageFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_ToneBackFrameGroup;
    struct _AGOBJECT m_BackObject;
    struct _AGOBJECT m_TitleObject;
    struct _AGOBJECT m_BarObject;
    struct _AGOBJECT m_ExpandingBarObject[3];
    struct _AGOBJECT m_CrownObject;
    struct _AGOBJECT m_OptionLabelCharObject;
    struct _AGOBJECT m_ExerciseCharObject;
    struct _AGOBJECT m_BackButtonObject;
    struct _AGOBJECT m_SortButtonObject;
    struct _AGOBJECT m_SongTitleObject;
    struct _AGOBJECT m_UpdateImageObject;
    struct _AGTEXTUREFRAMEGROUP m_OptionButtonFrameGroup;
    ISceneOptionButton *m_SceneOptionButton;
    int m_OptionState;
    ISceneOptionSelectDialog *m_SceneOptionSelectDialog;
    struct _AGTEXTUREFRAMEGROUP m_OptionSelectDialogFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_DogFrameGroup[2];
    struct _AGTEXTUREFRAMEGROUP m_ScoreButtonFrameGroup;
    struct _AGOBJECT m_ScoreButtonObject;
    struct _AGTEXTUREFRAMEGROUP m_OnlineRankingButtonFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_ScoreDialogFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_NumberFixFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_NumberWfixFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_OptionIconFrameGroup;
    ISceneScoreDialog *m_SceneScoreDialog;
    struct _AGTEXTUREFRAMEGROUP m_ResetScoreDialogWindowFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_ResetScoreDialogMessageFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_ResetScoreDialogButtonFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_ResetScoreDialogChoiceFrameGroup;
    ISceneDialog *m_ResetScoreDialog;
    ISceneSortSelectDialog *m_SceneSortSelectDialog;
    struct _AGTEXTUREFRAMEGROUP m_SortSelectDialogFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_DownloadSongDialogWindowFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_DownloadSongDialogMessageFrameGroup;
    ISceneDialog *m_DownloadSongDialog;
    struct _AGTEXTUREFRAMEGROUP m_UpdateSongsDialogWindowFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_UpdateSongsDialogMessageFrameGroup;
    ISceneDialog *m_UpdateSongsDialog;
    struct _AGTEXTUREFRAMEGROUP m_RestoreSongsDialogWindowFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_RestoreSongsDialogMessageFrameGroup;
    ISceneDialog *m_RestoreSongsDialog;
    NSMutableDictionary *m_Record;
    int m_SelectedCourse;
    int m_LastSelectedCourse;
    int m_ScrollSong;
    int m_SortState;
    _Bool m_HideDisabledBar;
    float m_BackStartPosition;
    struct CGPoint m_BarCenter;
    float m_BarSpace;
    struct CGPoint m_SongTitlePosition;
    struct CGPoint m_CrownPosition;
    struct CGPoint m_OptionLabelCharPosition;
    struct CGPoint m_OptionLabelCharOfs;
    float m_ScrollMinSpeed;
    float m_ExpandingBarWidth;
    float m_ExpandingBarSize;
    int m_ExpandingBarWaitDuration;
    struct CGPoint m_ScrollPosition;
    float m_ScrollSpeed;
    float m_BarSplitPosition;
    struct CGPoint m_StartTouchPoint;
    int m_SongSelectedCounter;
    int m_FadeCounter;
    int m_ExpandWaitCounter;
    int m_ExpandingBarExpandingDuration;
    int m_NextScene;
    int m_PauseState;
    int m_PauseCounter;
    int m_PauseSelect;
    struct CGRect m_PauseCollisions[6];
    _Bool m_TouchActive;
    _Bool m_TouchScroll;
    _Bool m_LoadBGM;
    _Bool m_PlayedBGM;
    NSArray *m_SortGroupRangeList;
    const int *m_SortGroupFrameIndices;
    float m_MaxScrollSpeed;
    unsigned long long m_PreservedGameOptions;
    _Bool m_DontamaPressed;
    NSString *purchasingProductIdentifier_;
    NSString *resumingProductIdentifier_;
    int m_ReturnToMenuOnError;
    _Bool m_Destroyed;
    struct CGPoint m_CollaboLabelCharOfs;
    unsigned long long m_TotalFileSize;
    unsigned long long m_DownloadedSize;
    _Bool m_DownloadError;
    int m_BarLoopMinNum;
    struct _AGTEXTURE m_DialogTexture;
    _Bool m_ShowRestoreDialog;
    _Bool m_ShowRestoreSystemDialog;
    TaikoRestore *m_TaikoRestore;
    struct _AGTEXTURE m_PrimordialCollaboTexture;
    struct _AGTEXTUREFRAMEGROUP m_PrimordialCollaboFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_CourseButtonFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_CourseIconFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_CourseTitleFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_CourseCrownFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_CourseDifficultyFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_CourseStarFrameGroup;
    SongCoursePlate *m_CoursePlates[5];
    SongCoursePlate *m_PressedCoursePlate;
    _Bool m_CourseDecided;
    ISceneNamePlate *m_SceneNamePlate;
    struct _AGTEXTUREFRAMEGROUP m_BarTopLeftFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_BarTopMiddleFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_BarTopRightFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_BarTopTitleFrameGroups[6];
    struct _AGOBJECT m_BarTopLeftObject;
    struct _AGOBJECT m_BarTopMiddleObject;
    struct _AGOBJECT m_BarTopRightObject;
    struct _AGOBJECT m_BarTopTitleObject;
    NSMutableArray *m_BarInfoArray;
    _Bool m_BarTopRendering;
    struct _AGTEXTUREFRAMEGROUP m_GroupButtonLeftFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_GroupButtonRightFrameGroup;
    TaikoButton *m_GroupButtonLeft;
    TaikoButton *m_GroupButtonRight;
    int m_NextTitleObjectFrameIndex;
    int m_CurrentTitleObjectFrameIndex;
    _Bool m_ScoreDialogPrepared;
    _Bool m_OptionSelectDialogPrepared;
    TaikoTextureCache *m_TextureCache;
    struct _AGTEXTUREFRAMEGROUP m_CourseOverlayFrameGroup;
    TaikoSceneNode *m_CourseOverlays[4];
    struct _AGOBJECT m_Cursor;
    TaikoAction *m_CursorAnimation;
    _Bool m_SongSelected;
    int m_BGMWaitCounter;
    int m_BGMWaitCounterMax;
    struct dispatch_queue_s *m_BGMDispatchQueue;
    float m_ScrollSpeedTouchBegan;
    float m_InitialDX;
    float m_EvaluatedScrollX;
    unsigned int m_KatsuInputs;
    int m_SongSelectionWait;
    BGDownload *m_SongDownload;
    _Bool m_NeedsReenter;
    struct _AGTEXTUREFRAMEGROUP m_EndDateDigitFrameGroup;
    struct _AGOBJECT m_EndDateDigitObject;
    TaikoProgressIndicator *m_ProgressIndicator;
    struct _AGTEXTURE m_SubscriptionMenuTexture;
    struct _AGTEXTUREFRAMEGROUP m_TFGSubscriptionMenuMain;
    struct _AGTEXTUREFRAMEGROUP m_TFGSubscriptionMenuWindow[4];
    struct _AGTEXTUREFRAMEGROUP m_TFGCloseButton;
    struct _AGTEXTUREFRAMEGROUP m_TFGRestoreButton;
    struct _AGTEXTUREFRAMEGROUP m_TFGDialogButton;
    struct _AGTEXTUREFRAMEGROUP m_TFGDialogChoice;
    struct _AGTEXTUREFRAMEGROUP m_TFGDeleteCheckBox;
    struct _AGOBJECT m_CheckBoxObject;
    ISceneSubscriptionMenu *m_SceneSubscriptionMenu;
    _Bool m_SceneSubscriptionMenuStarted;
    _Bool m_SubscribedWhenSceneStart;
    _Bool m_SubscriptionSelectSong;
    int m_CheckingSongNum;
    ISceneDialog *m_SubscriptionDeleteFinishDialog;
    struct _AGTEXTUREFRAMEGROUP m_TFGDeleteFinishDialog;
    struct _AGTEXTUREFRAMEGROUP m_TFGDeleteFinishDialogMessage;
    TaikoSceneNode *m_DeleteMessageNode[2];
    TaikoNumberLabel *m_DeleteMessageNumLabel;
    struct _AGTEXTUREFRAMEGROUP m_TFGSubscriptionStock;
    struct _AGOBJECT m_StockLabelObject;
    struct _AGOBJECT m_StockNumberObject[3];
    NSData *m_TrialListenDownloadedData;
    BGDownload *m_TrialListenBgDownload;
    struct _AGTEXTUREFRAMEGROUP m_TFGSubscription;
    struct _AGOBJECT m_SubscriptionButtonObject;
    struct _AGOBJECT m_SubscriptionButtonTextObject;
    struct _AGTEXTUREFRAMEGROUP m_TFGSongAdd;
    struct _AGOBJECT m_SongAddSumiObject;
    struct _AGOBJECT m_SongAddNewObject;
    struct _AGOBJECT m_SongAddTrialListenObject;
    struct _AGOBJECT m_SongAddTrialListenTextObject;
    struct _AGOBJECT m_SongAddTrialListenAnime;
    struct _AGOBJECT m_SongAddUpdateObject;
    struct _AGTEXTUREFRAMEGROUP m_TFGSongAddDialog;
    struct _AGTEXTUREFRAMEGROUP m_TFGSongAddDialog2;
    struct _AGTEXTUREFRAMEGROUP m_TFGSongAddDialogMessage;
    ISceneDialog *m_SongAddCheckOverDialog;
    ISceneDialog *m_SongAddUpdateConfirmDialog;
    ISceneDialog *m_SongAddUpdateFinishDialog;
    ISceneDialog *m_SongAddCheckSongNumDialog;
    _Bool m_TrialListenOnlyMode;
    int m_TrialListenTextCounter;
    NSString *m_TrialListenDownloadingSongID;
    NSString *m_TrialListenPlayingSongID;
    int m_CheckBoxNum;
    int m_SubscriptionDownloadedSongsNum;
    _Bool m_WaitingSubscriptionDistributeInfo;
    UIActivityIndicatorView *m_TrialListenIndicator;
    int m_TrialListenCounter;
    _Bool m_ShowSubsciptionValidationFailedAlert;
    _Bool m_SongAddUpdateDownloadFinished;
    int m_SubscriptionButtonTextCounter;
    _Bool m_SubscriptionButtonEnabled;
    _Bool m_TrialListenStartAfterScroll;
    _Bool m_RecommendOpenSubscriptionMenu;
    _Bool m_ShowNewSongs;
    struct _AGTEXTUREFRAMEGROUP m_NewSongsDialogMessageFrameGroup;
    ISceneDialog *m_NewSongsDialog;
    _Bool m_ShowExerciseUpdated;
    _Bool m_ShowExerciseImageError;
    _Bool m_ShowExerciseRetry;
    _Bool m_ExerciseRetryWaiting;
    struct _AGTEXTUREFRAMEGROUP m_ExerciseDialogFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_ExerciseDialogMessageFrameGroup;
    ISceneDialog *m_ExerciseUpdatedDialog;
    NSDateFormatter *dateFormatter_;
    NSMutableArray *boxList_;
    NSMutableArray *collaboBoxList_;
    int currentBoxIndex_;
    unsigned int _subscriptionMode;
}

@property(nonatomic) unsigned int subscriptionMode; // @synthesize subscriptionMode=_subscriptionMode;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)startDownloadingTrialListen:(id)arg1;
- (void)restoreTransactionsFailedWithError:(id)arg1;
- (void)restoreTransactionsCompleted;
- (void)transactionFailedWithTransaction:(id)arg1;
- (_Bool)transactionCompletedWithTransaction:(id)arg1;
- (void)restoreTransactionsFailedWithError_Local:(id)arg1;
- (void)restoreTransactionsCompleted_Local;
- (_Bool)transactionCompletedWithTransaction_Local:(id)arg1;
- (void)moveNextGroup:(id)arg1;
- (void)movePreviousGroup:(id)arg1;
- (int)sortGroupIndexWithBoxIndex:(int)arg1;
- (int)sortGroupIndexWithSongInfo:(id)arg1 type:(int)arg2;
- (void)groupBoxListWithType:(int)arg1;
- (void)sortBox_Generation;
- (void)sortBox_LatestPlay;
- (int)playDateWithSongInfo:(id)arg1 playTime:(int *)arg2;
- (void)sortBox_PlayCount;
- (unsigned int)totalPlayCountWithSongInfo:(id)arg1;
- (void)sortBox_Genre;
- (void)sortBox_Pronunciation;
- (void)sortBox_Pack;
- (void)sortBoxListWithType:(int)arg1;
- (void)renderBoxSubscription:(id)arg1 position:(struct CGPoint *)arg2 boxIndex:(int)arg3;
- (void)renderBoxNormalSong:(id)arg1 position:(struct CGPoint *)arg2 boxIndex:(int)arg3;
- (void)renderBoxCollaboDownload:(id)arg1 position:(struct CGPoint *)arg2 boxIndex:(int)arg3;
- (void)renderBoxGotoSongAdd:(id)arg1 position:(struct CGPoint *)arg2 boxIndex:(int)arg3;
- (void)renderBoxGotoStore:(id)arg1 position:(struct CGPoint *)arg2 boxIndex:(int)arg3;
- (_Bool)decreaseBoxIndex:(int *)arg1;
- (_Bool)increaseBoxIndex:(int *)arg1;
- (void)loadCurrentBoxIndex:(_Bool)arg1;
- (void)saveCurrentBoxIndex;
- (_Bool)isOptionLabelWithBoxIndex:(int)arg1;
- (_Bool)isOptionLabelSelected;
- (id)getCollaboInfoWithSongID:(id)arg1;
- (int)getBoxIndexWithSongInfo:(id)arg1;
- (int)getBoxIndexWithObject:(id)arg1;
- (int)getBoxIndexWithSongID:(id)arg1 type:(unsigned int)arg2;
- (int)getBoxIndexWithType:(unsigned int)arg1;
- (int)getBoxNum:(unsigned int)arg1;
- (void)addBoxInfo:(unsigned int)arg1 info:(id)arg2;
- (id)currentBoxInfo;
- (void)makeCollaboBox;
- (void)sceneDialog:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)resetGameResultScoreWithSongInfo:(id)arg1 course:(unsigned long long)arg2;
- (_Bool)enableScoreButton;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)setupFrameIndicesWithType:(int)arg1;
- (id)dateLatestPlayWithSongInfo:(id)arg1;
- (const CDStruct_6cc9a17f *)getSongRecordWithSongID:(id)arg1;
- (int)stateFadeOut;
- (void)changeState;
- (int)stateFadeIn;
- (void)SNSInterfaceNumber:(unsigned long long)arg1 didFailWithError:(id)arg2 object:(id)arg3;
- (void)resumeFromError:(int)arg1 buttonIndex:(long long)arg2;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)musicDataDownloadDidFailWithObject:(id)arg1;
- (void)downloadDidFinish:(id)arg1;
- (void)SNSInterfaceNumber:(unsigned long long)arg1 didFinishWithCode:(id)arg2 entry:(id)arg3 object:(id)arg4;
- (void)checkDownloadedCollaboMusicData:(id)arg1;
- (_Bool)checkDownloadedMusicData:(id)arg1 song:(id)arg2;
- (int)stateWaitingSubscriptionDistributeInfo;
- (int)stateSongAddUpdateFinishDialog;
- (int)stateWaitingSubscriptionUpdateSongDownload;
- (int)stateWaitingSubscriptionUpdateIF64;
- (int)stateSongAddUpdateConfirmDialog;
- (int)stateSongAddCheckSongNumDialog;
- (int)stateSongAddCheckOverDialog;
- (int)stateSubscriptionDeleteFinish;
- (int)stateSubscriptionDeleting;
- (int)stateExerciseRetryDialog;
- (int)stateExerciseImageErrorDialog;
- (int)stateExerciseUpdatedDialog;
- (int)stateCollaboInfoDownloading;
- (int)stateIdle;
- (int)stateWait;
- (int)stateDownload;
- (int)stateDialogDownload;
- (int)stateDialogRestore;
- (void)startRestoration;
- (int)stateCollaboDownloadCompleted;
- (int)stateCollaboDownloading;
- (void)returnToStateRunWithDownloadError;
- (int)stateCollaboDialog;
- (void)startDownloadingCollaboSong:(id)arg1;
- (int)stateSongSelected;
- (void)prepareSubscriptionMenu;
- (int)stateSubscriptionMenu;
- (int)stateScoreDialog;
- (void)prepareScoreDialogFromRanking:(_Bool)arg1;
- (int)stateSortSelectDialog;
- (int)stateOptionSelectDialog;
- (int)stateNewSongsDialog;
- (void)startScene;
- (void)resumeScene;
- (int)stateRun;
- (void)startBGMAfterCountdown;
- (void)stopBGM:(_Bool)arg1;
- (void)stateRun_processTouch;
- (_Bool)isMoving;
- (void)evaluateScrollX;
- (void)adjustLeftEdge;
- (void)adjustRightEdge;
- (void)stopScrolling;
- (_Bool)isScrolledOverLeftEdge;
- (_Bool)isScrolledOverRightEdge;
- (_Bool)selectsLeftEdgeSong;
- (_Bool)selectsRightEdgeSong;
- (_Bool)isLoopable;
- (void)renderSongSelectCursor;
- (void)stateRun_processTaikoControllerInput;
- (_Bool)decideExpandinbBar;
- (void)decideOnSubscriptionPlateWithMusicID;
- (void)decideOnPurchasePlateWithMusicID;
- (void)decideOnCollaboPlateWithMusicID;
- (void)decideDeleteSubscriptionSongs;
- (void)licenseViewControllerClosed;
- (void)decideDeleteButton:(_Bool)arg1;
- (_Bool)startDownloadSubscriptionSongs:(id)arg1;
- (void)decideSongAddButton:(_Bool)arg1;
- (void)decideAllSelectButton;
- (_Bool)decideBarSongAdd:(int)arg1 center:(_Bool)arg2;
- (void)configureCoursePlates;
- (void)configureCoursePlatePositionWithNumberOfCourses:(int)arg1;
- (void)arrangeExpandingBarWidth;
- (void)loadBGM;
- (void)goToVDrumsSettings;
- (void)reenter;
- (void)goToSongSelect;
- (void)goToGame;
- (void)prepareStateToFadeOut:(_Bool)arg1;
- (void)goToMenu;
- (void)goToOut;
- (void)render;
- (void)updateAnimation;
- (void)updateTitleObject;
- (int)titleObjectFrameIndex;
- (_Bool)isScrolling;
- (void)renderBarsAtPosition:(struct CGPoint)arg1;
- (void)renderBarTopsAtPosition:(struct CGPoint)arg1;
- (void)renderBarTops;
- (void)renderBarTopWithBarInfo:(id)arg1;
- (void)addBarInfoWithFrameIndex:(int)arg1 left:(float)arg2 right:(float)arg3;
- (void)renderCrownWithSongInfo:(id)arg1 x:(double)arg2 y:(double)arg3 alpha:(unsigned long long)arg4;
- (void)renderSongTitleWithFrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg1 x:(float)arg2 y:(float)arg3 unified:(_Bool)arg4 shouldUpdate:(_Bool)arg5 center:(_Bool)arg6 boxIndex:(int)arg7;
- (void)renderCollaboSongTitleWitInfo:(id)arg1 x:(float)arg2 y:(float)arg3;
- (void)renderSongEndDateWithBoxInfo:(id)arg1 x:(float)arg2 y:(float)arg3;
- (void)renderSongEndDateDigitString:(id)arg1 begin:(int)arg2 end:(int)arg3 y:(float)arg4 x:(float)arg5 ax:(float)arg6 dx:(float)arg7;
- (void)renderEndDateDigitWithFrameIndex:(int)arg1 x:(float)arg2 y:(float)arg3;
- (void)touchCheckBox:(int)arg1;
- (void)renderCheckBox:(id)arg1 x:(float)arg2 y:(float)arg3 center:(_Bool)arg4;
- (void)sceneStart;
- (void)sceneDestroy;
- (int)update;
- (void)updateInput;
- (void)deselectCourse;
- (void)selectCourse:(id)arg1;
- (void)disableToSelectCourse:(id)arg1;
- (void)enableToSelectCourse:(id)arg1;
- (void)enableCoursePlates;
- (id)plateComposedOfButton:(id)arg1;
- (void)changeBGM;
- (void)enableGroupButton:(id)arg1;
- (id)setupGroupButtonWithTextureFrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg1 originX:(double)arg2 bounds:(struct CGRect)arg3 touchDownSelector:(SEL)arg4 moveLeft:(_Bool)arg5;
- (void)sceneLoad;
- (_Bool)skipCollabo:(id)arg1;
- (id)recordDataWithSongInfo:(id)arg1;
- (int)collaboIDStringToIndex:(id)arg1;
- (void)alertFailureWithTitle:(id)arg1 message:(id)arg2 tag:(int)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

