//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BGDownloadDelegate-Protocol.h"
#import "BGSNSInterfaceDelegate-Protocol.h"
#import "NSFileManagerDelegate-Protocol.h"
#import "SKPaymentTransactionObserver-Protocol.h"

@class AgreementManager, BGDownload, BGSNSInterfaceError, CADisplayLink, EAGLContext, ISceneBase, LumenManager, NSArray, NSDictionary, NSMutableArray, NSString, TaikoEquipmentManager, TaikoRenderer, TaikoUpdateChecker, TaikoViewController;

@interface ISceneManager : UIView <SKPaymentTransactionObserver, BGSNSInterfaceDelegate, BGDownloadDelegate, NSFileManagerDelegate>
{
    EAGLContext *m_EAGLContext;	// 96 = 0x60
    unsigned int m_GLDefaultFramebuffer;	// 104 = 0x68
    unsigned int m_GLColorRenderbuffer;	// 108 = 0x6c
    float m_Width;	// 112 = 0x70
    float m_Height;	// 116 = 0x74
    CADisplayLink *m_DisplayLink;	// 120 = 0x78
    unsigned int m_TouchState;	// 128 = 0x80
    unsigned int m_TouchCancelled;	// 132 = 0x84
    struct _TOUCH m_Touch[10];	// 136 = 0x88
    NSString *m_SongDirectoryPath;	// 776 = 0x308
    NSString *m_CollaboDirectoryPath;	// 784 = 0x310
    float m_loadProgressSongInfo;	// 792 = 0x318
    _Bool m_loadedSongInfo;	// 796 = 0x31c
    NSMutableArray *m_SongInfoArray;	// 800 = 0x320
    int m_CurrentCourse;	// 808 = 0x328
    NSString *m_CurrentSongID;	// 816 = 0x330
    int m_NextSceneIndex;	// 824 = 0x338
    int m_CurrentSceneIndex;	// 828 = 0x33c
    int m_PrevSceneIndex;	// 832 = 0x340
    ISceneBase *m_CurrentScene;	// 840 = 0x348
    ISceneBase *m_nextScene;	// 848 = 0x350
    int m_SceneArgument;	// 856 = 0x358
    _Bool m_autoMode;	// 860 = 0x35c
    int m_PlayerLevel;	// 864 = 0x360
    int m_PlayerNextClass;	// 868 = 0x364
    int m_GameResultDonPoints;	// 872 = 0x368
    int m_GameResultScore;	// 876 = 0x36c
    int m_GameResultMaxCombo;	// 880 = 0x370
    int m_GameResultHitRate;	// 884 = 0x374
    int m_GameResultMeter;	// 888 = 0x378
    int m_GameResultMeterLimit;	// 892 = 0x37c
    int m_GameResultMeterMax;	// 896 = 0x380
    int m_GameResultNumJudge[3];	// 900 = 0x384
    int m_GameResultKanpekiFailed;	// 912 = 0x390
    int m_GameResultPlayCount;	// 916 = 0x394
    int m_GameResultRendaCount;	// 920 = 0x398
    _Bool m_GameResultFullCombo;	// 924 = 0x39c
    _Bool m_GameResultNewRecord;	// 925 = 0x39d
    _Bool m_GameResultDailyRecord;	// 926 = 0x39e
    NSDictionary *m_MusicDictionary;	// 928 = 0x3a0
    unsigned int m_GameOptions;	// 936 = 0x3a8
    CDStruct_ce61fa4b m_OptimizationOptions;	// 940 = 0x3ac
    double m_LastTimestamp;	// 976 = 0x3d0
    unsigned long long m_DownLoadDataTotal;	// 984 = 0x3d8
    unsigned long long m_DownLoadDataCount;	// 992 = 0x3e0
    NSDictionary *m_SNSDictionary;	// 1000 = 0x3e8
    NSMutableArray *m_PendingTransactions;	// 1008 = 0x3f0
    NSDictionary *m_SodemakuDictionary;	// 1016 = 0x3f8
    NSArray *m_MovableCollaboIdentifiers;	// 1024 = 0x400
    TaikoViewController *m_TaikoViewController;	// 1032 = 0x408
    _Bool m_NeedsResumeSound;	// 1040 = 0x410
    BGDownload *m_TitleImageDownload;	// 1048 = 0x418
    BGDownload *m_SpeechBubbleImageDownload;	// 1056 = 0x420
    BGDownload *m_AdImageDownloads[10];	// 1064 = 0x428
    BGDownload *m_SubscriptionImageDownloads[10];	// 1144 = 0x478
    _Bool m_IdleTimerDisabled;	// 1224 = 0x4c8
    _Bool m_GaveUpToLogin;	// 1225 = 0x4c9
    int m_PreservedDontamaPoint;	// 1228 = 0x4cc
    int m_PreservedBonusPoint;	// 1232 = 0x4d0
    int m_CollaboImageDownloadingCount;	// 1236 = 0x4d4
    int m_SubscriptionImageDownloadingCount;	// 1240 = 0x4d8
    _Bool m_CurrentSongIsValid;	// 1244 = 0x4dc
    _Bool m_IsChecking;	// 1245 = 0x4dd
    _Bool _recommendOpenSubscriptionMenu;	// 1246 = 0x4de
    _Bool _gameResultSoundUnlocked;	// 1247 = 0x4df
    _Bool _subscriptionVersionDownloadState;	// 1248 = 0x4e0
    _Bool _exerciseGaveUp;	// 1249 = 0x4e1
    int m_RemoteNotificationStartType;	// 1252 = 0x4e4
    int _currentSongType;	// 1256 = 0x4e8
    int _sceneReturnID;	// 1260 = 0x4ec
    int _currentSubscriptionSongListPage;	// 1264 = 0x4f0
    float _UIKitScaleFactor;	// 1268 = 0x4f4
    int _courseForRanking;	// 1272 = 0x4f8
    int _lastLayer;	// 1276 = 0x4fc
    int _workingLayer;	// 1280 = 0x500
    int _sceneIndexRecommendedMove;	// 1284 = 0x504
    unsigned int _subscriptionCommunicationState;	// 1288 = 0x508
    unsigned int _collaboCommunicationState;	// 1292 = 0x50c
    TaikoRenderer *taikoRenderer_;	// 1296 = 0x510
    LumenManager *lumenManager_;	// 1304 = 0x518
    id _sceneMessage;	// 1312 = 0x520
    TaikoEquipmentManager *_equipmentManager;	// 1320 = 0x528
    TaikoUpdateChecker *_updateChecker;	// 1328 = 0x530
    AgreementManager *_agreementManager;	// 1336 = 0x538
    NSString *_tosDirectoryPath;	// 1344 = 0x540
    BGSNSInterfaceError *_subscriptionCommunicationError;	// 1352 = 0x548
    NSString *_subscriptionDirectoryPath;	// 1360 = 0x550
    BGSNSInterfaceError *_collaboCommunicationError;	// 1368 = 0x558
    NSString *_titleBannerImageCacheKey;	// 1376 = 0x560
}

+ (id)musicFileNameWithIdentifier:(id)arg1;
+ (id)createDateFormatter:(id)arg1;
+ (id)convertStringToDate:(id)arg1 format:(id)arg2;
+ (_Bool)checkTimeLimit:(id)arg1;
+ (id)convertNameNumbers:(unsigned int *)arg1 length:(unsigned long long)arg2;
+ (int)nameLengthWithNameString:(id)arg1;
+ (unsigned long long)convertNameString:(id)arg1;
+ (id)createDirectoryInDocuments:(id)arg1 backupSkip:(_Bool)arg2;
+ (_Bool)addSkipBackupAttributeToItemAtPath:(id)arg1;
+ (Class)layerClass;
@property(copy, nonatomic) NSString *titleBannerImageCacheKey; // @synthesize titleBannerImageCacheKey=_titleBannerImageCacheKey;
@property(nonatomic) _Bool exerciseGaveUp; // @synthesize exerciseGaveUp=_exerciseGaveUp;
@property(retain, nonatomic) BGSNSInterfaceError *collaboCommunicationError; // @synthesize collaboCommunicationError=_collaboCommunicationError;
@property(nonatomic) unsigned int collaboCommunicationState; // @synthesize collaboCommunicationState=_collaboCommunicationState;
@property(readonly, nonatomic) NSString *subscriptionDirectoryPath; // @synthesize subscriptionDirectoryPath=_subscriptionDirectoryPath;
@property(retain, nonatomic) BGSNSInterfaceError *subscriptionCommunicationError; // @synthesize subscriptionCommunicationError=_subscriptionCommunicationError;
@property(nonatomic) _Bool subscriptionVersionDownloadState; // @synthesize subscriptionVersionDownloadState=_subscriptionVersionDownloadState;
@property(nonatomic) unsigned int subscriptionCommunicationState; // @synthesize subscriptionCommunicationState=_subscriptionCommunicationState;
@property(readonly, nonatomic) NSString *tosDirectoryPath; // @synthesize tosDirectoryPath=_tosDirectoryPath;
@property(nonatomic) AgreementManager *agreementManager; // @synthesize agreementManager=_agreementManager;
@property(readonly, nonatomic) TaikoUpdateChecker *updateChecker; // @synthesize updateChecker=_updateChecker;
@property(readonly, nonatomic) TaikoEquipmentManager *equipmentManager; // @synthesize equipmentManager=_equipmentManager;
@property(nonatomic) int sceneIndexRecommendedMove; // @synthesize sceneIndexRecommendedMove=_sceneIndexRecommendedMove;
@property(nonatomic) int workingLayer; // @synthesize workingLayer=_workingLayer;
@property(nonatomic) int lastLayer; // @synthesize lastLayer=_lastLayer;
@property(nonatomic) int courseForRanking; // @synthesize courseForRanking=_courseForRanking;
@property(nonatomic) float UIKitScaleFactor; // @synthesize UIKitScaleFactor=_UIKitScaleFactor;
@property(readonly, nonatomic) _Bool gameResultSoundUnlocked; // @synthesize gameResultSoundUnlocked=_gameResultSoundUnlocked;
@property(nonatomic) int currentSubscriptionSongListPage; // @synthesize currentSubscriptionSongListPage=_currentSubscriptionSongListPage;
@property(nonatomic) _Bool recommendOpenSubscriptionMenu; // @synthesize recommendOpenSubscriptionMenu=_recommendOpenSubscriptionMenu;
@property(nonatomic) int sceneReturnID; // @synthesize sceneReturnID=_sceneReturnID;
@property(retain, nonatomic) id sceneMessage; // @synthesize sceneMessage=_sceneMessage;
@property(readonly, nonatomic) int currentSongType; // @synthesize currentSongType=_currentSongType;
@property(readonly, nonatomic) int prevSceneIndex; // @synthesize prevSceneIndex=m_PrevSceneIndex;
@property(readonly, nonatomic) int currentSceneIndex; // @synthesize currentSceneIndex=m_CurrentSceneIndex;
@property(nonatomic) ISceneBase *currentScene; // @synthesize currentScene=m_CurrentScene;
@property(nonatomic) LumenManager *lumenManager; // @synthesize lumenManager=lumenManager_;
@property(nonatomic) TaikoRenderer *taikoRenderer; // @synthesize taikoRenderer=taikoRenderer_;
@property(nonatomic) TaikoViewController *taikoViewController; // @synthesize taikoViewController=m_TaikoViewController;
@property(readonly, nonatomic) int remoteNotificationStartType; // @synthesize remoteNotificationStartType=m_RemoteNotificationStartType;
@property(readonly) _Bool isChecking; // @synthesize isChecking=m_IsChecking;
@property(readonly) _Bool currentSongIsValid; // @synthesize currentSongIsValid=m_CurrentSongIsValid;
@property(nonatomic) CDStruct_ce61fa4b optimizationOptions; // @synthesize optimizationOptions=m_OptimizationOptions;
@property(nonatomic) unsigned int gameOptions; // @synthesize gameOptions=m_GameOptions;
@property(readonly, nonatomic) NSDictionary *sodemakuDictionary; // @synthesize sodemakuDictionary=m_SodemakuDictionary;
@property(readonly, nonatomic) NSDictionary *musicDictionary; // @synthesize musicDictionary=m_MusicDictionary;
@property(readonly, nonatomic) int gameResultRendaCount; // @synthesize gameResultRendaCount=m_GameResultRendaCount;
@property(readonly, nonatomic) _Bool gameResultDailyRecord; // @synthesize gameResultDailyRecord=m_GameResultDailyRecord;
@property(readonly, nonatomic) _Bool gameResultNewRecord; // @synthesize gameResultNewRecord=m_GameResultNewRecord;
@property(readonly, nonatomic) _Bool gameResultFullCombo; // @synthesize gameResultFullCombo=m_GameResultFullCombo;
@property(readonly, nonatomic) int gameResultKanpekiFailed; // @synthesize gameResultKanpekiFailed=m_GameResultKanpekiFailed;
@property(readonly, nonatomic) int gameResultMeterMax; // @synthesize gameResultMeterMax=m_GameResultMeterMax;
@property(readonly, nonatomic) int gameResultMeterLimit; // @synthesize gameResultMeterLimit=m_GameResultMeterLimit;
@property(readonly, nonatomic) int gameResultMeter; // @synthesize gameResultMeter=m_GameResultMeter;
@property(readonly, nonatomic) int gameResultHitRate; // @synthesize gameResultHitRate=m_GameResultHitRate;
@property(readonly, nonatomic) int gameResultMaxCombo; // @synthesize gameResultMaxCombo=m_GameResultMaxCombo;
@property(readonly, nonatomic) int gameResultScore; // @synthesize gameResultScore=m_GameResultScore;
@property(readonly, nonatomic) int gameResultDonPoints; // @synthesize gameResultDonPoints=m_GameResultDonPoints;
@property(readonly, nonatomic) int playerNextClass; // @synthesize playerNextClass=m_PlayerNextClass;
@property(readonly, nonatomic) int playerLevel; // @synthesize playerLevel=m_PlayerLevel;
@property(nonatomic) _Bool autoMode; // @synthesize autoMode=m_autoMode;
@property(readonly) float loadProgressSongInfo; // @synthesize loadProgressSongInfo=m_loadProgressSongInfo;
@property(readonly) _Bool loadedSongInfo; // @synthesize loadedSongInfo=m_loadedSongInfo;
@property(nonatomic) int sceneArgument; // @synthesize sceneArgument=m_SceneArgument;
@property(readonly, nonatomic) int currentCourse; // @synthesize currentCourse=m_CurrentCourse;
@property(readonly, nonatomic) NSArray *songInfoArray; // @synthesize songInfoArray=m_SongInfoArray;
@property(readonly, nonatomic) NSString *collaboDirectoryPath; // @synthesize collaboDirectoryPath=m_CollaboDirectoryPath;
@property(readonly, nonatomic) NSString *songDirectoryPath; // @synthesize songDirectoryPath=m_SongDirectoryPath;
- (id)encryptByBlowfish:(id)arg1 secretKey:(id)arg2 ivOut:(id *)arg3;
- (id)encryptByBlowfish:(id)arg1 secretKey:(id)arg2 ivOut:(id *)arg3 isEncrypt:(_Bool)arg4;
- (_Bool)hasName;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)takeIdleTimerConsistency;
- (void)setIdleTimerDisabled:(_Bool)arg1;
- (_Bool)openTitleBannerURL:(int *)arg1;
@property(readonly, nonatomic) NSDictionary *titleBannerInfo;
- (void)downloadTitleBannerImage;
- (void)requestGettingTitleBannerInfo;
- (void)removeCacheOfSubscriptionImage;
- (_Bool)isDownloadingSubscriptionImageAtIndex:(int)arg1;
- (void)loadSubscriptionImages;
- (id)loadSubscriptionImageWithIndex:(int)arg1;
- (id)subscriptionImageURL:(int)arg1;
- (id)loadSubscriptionImageWithIndex:(int)arg1 sequent:(_Bool)arg2;
- (_Bool)isDownloadingAdImageAtIndex:(int)arg1;
- (void)loadAdImages;
- (id)loadAdImageWithIndex:(int)arg1;
- (id)loadAdImageWithIndex:(int)arg1 sequent:(_Bool)arg2;
- (id)loadSpeechBubbleImage;
- (id)loadTitleImage;
- (id)getURLScheme;
- (id)getURLSchemeAtIndex:(unsigned long long)arg1;
- (id)deviceSpecificResourcePath;
- (void)setupRenderer:(_Bool)arg1;
- (void)loadMovableCollaboJSON;
- (void)loadSongAdditionalInfoJSON;
- (void)loadSodemakuXML;
- (void)registerLocalNotification;
- (void)scheduleLocalNotification:(id)arg1 alertBody:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)processSubscriptionImageDownload:(id)arg1;
- (void)processCollaboImageDownload:(id)arg1;
- (_Bool)processImageDownload:(id)arg1;
- (void)SNSInterfaceNumber:(unsigned long long)arg1 didFinishWithCode:(id)arg2 entry:(id)arg3 object:(id)arg4;
- (void)SNSInterfaceNumber:(unsigned long long)arg1 didFailWithError:(id)arg2 object:(id)arg3;
- (void)updateCollaboInfo:(id)arg1;
- (id)convertCollaboInfo:(id)arg1;
- (void)saveCollaboInfo:(id)arg1;
- (id)loadCollaboInfo;
- (int)getPackSortNumberWithCollaboPriority:(int)arg1;
- (void)addCollaboSongs;
- (void)removeAndCheckCollabos:(_Bool)arg1 dontRemove:(_Bool)arg2;
- (_Bool)convertCollaboInfoToPurchasedPackageInfo:(id)arg1;
- (id)songDataInfoArrayFromCollaboPackageDictionary:(id)arg1;
- (_Bool)skipRemovingCollabo:(id)arg1;
- (id)collaboWithID:(id)arg1;
- (id)collaboWithSongID:(id)arg1;
- (void)setRemoveCollaboFlag:(id)arg1;
- (_Bool)checkUpdatedCollaboExercise:(_Bool)arg1 isImageCompleteExercise:(_Bool)arg2;
- (_Bool)checkImageCompleteAllExercise:(id)arg1;
- (_Bool)checkImageCompleteAllCollaboExercise;
- (void)startDownloadingImage:(id)arg1 object:(id)arg2 filePath:(id)arg3 type:(unsigned int)arg4;
- (id)replaceCollaboParamString:(id)arg1;
- (void)startCheckingNeoCollaboInfo:(_Bool)arg1;
- (void)startCheckingSubscriptionDistributeInfo:(_Bool)arg1 isPartial:(_Bool)arg2;
- (void)startCheckingSubscriptionSongUpdated:(_Bool)arg1 checkInterval:(int)arg2;
- (id)getInfoPageURL;
- (void)setInfoPageAutoOpen:(_Bool)arg1;
- (_Bool)isInfoPageAutoOpened;
- (_Bool)canOpenInfoPage;
- (void)startCheckingInfoPageURL;
- (void)startCheckingServerRenewalInfo;
- (void)startCheckingCurrentSong;
- (void)threadCheckCurrentSong;
@property(readonly, nonatomic) NSString *lastRunVersion;
- (void)saveCurrentVersion;
- (void)alignView:(id)arg1 x:(float)arg2 y:(float)arg3;
- (void)alignViewCenter:(id)arg1;
- (void)setSongSelectBoxIndex:(id)arg1 boxType:(unsigned int)arg2;
- (id)songSelectBoxIndex;
@property(nonatomic) int lastBannerIdentifier;
@property(nonatomic) int dontamaChallengeCourse;
@property(nonatomic) NSString *dontamaChallengeSong;
@property(nonatomic) NSString *dontamaChallengeKey;
@property(nonatomic) int dontamaChallengePoint;
@property(nonatomic) int dontamaChallengeTicket;
@property(nonatomic) int dontamaChallengeState;
@property(nonatomic) int preservedDontamaPoint;
@property(nonatomic) int portalConnectionState;
- (unsigned long long)nameNumber;
@property(nonatomic) int downloadDataState;
- (int)gameResultNumJudge:(int)arg1;
- (void)didFirstBootWithTaikoCore;
- (_Bool)isFirstBootWithTaikoCore;
@property(readonly, nonatomic) double timestamp;
- (_Bool)isDownloadedPackage:(id)arg1;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)applicationWillTerminate;
- (void)applicationWillEnterForeground;
- (void)checkPendingTransactions;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
@property(nonatomic) int preservedBonuspoint;
- (void)giveUpToLogin;
- (void)saveLoginDate:(id)arg1;
- (id)loginDateWithDelegate:(id)arg1;
- (void)setSubscriptionUpdated:(_Bool)arg1;
- (void)setHideDisabledBar:(_Bool)arg1;
- (void)setRerestoreState:(int)arg1;
- (void)setTwitterEnabled:(_Bool)arg1;
- (void)setTwitterTokenSecuret:(id)arg1;
- (void)setTwitterToken:(id)arg1;
- (void)setTwitterPassword:(id)arg1;
- (void)setTwitterUserName:(id)arg1;
- (void)setSoundBalance:(unsigned int)arg1;
- (void)setTaikoAlpha:(unsigned int)arg1;
- (void)setTaikoSize:(unsigned int)arg1;
- (void)resetGameResultScoreWithSongID:(id)arg1 course:(unsigned long long)arg2;
- (void)resetGameResultScoreWithRecord:(CDStruct_6cc9a17f *)arg1 SongID:(id)arg2;
- (void)registerGameResultScore:(int)arg1 maxCombo:(int)arg2 hitCount:(int)arg3 maxHitCount:(int)arg4 meter:(int)arg5 meterLimit:(int)arg6 meterMax:(int)arg7 kanpekiFailed:(_Bool)arg8 numRyo:(int)arg9 numKa:(int)arg10 numFuka:(int)arg11 rendaCount:(int)arg12;
- (void)calcDontamaWithRate:(int)arg1 fullCombo:(_Bool)arg2 maxCombo:(int)arg3 purchased:(_Bool)arg4 course:(int)arg5 difficulty:(int)arg6;
- (void)registerNameString:(id)arg1;
- (void)registerName:(unsigned long long)arg1 length:(int)arg2;
- (int)sortState;
- (void)setSortState:(int)arg1;
- (id)getSongInfoWithID:(id)arg1;
- (id)currentSongID;
- (id)currentSongInfo;
- (void)setCurrentSong:(id)arg1 course:(int)arg2;
- (void)setCurrentSong:(id)arg1 course:(int)arg2 type:(int)arg3;
- (void)userDidTakeScreenshot;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)teminateTouches:(id)arg1 state:(unsigned int)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)convertTouchCoordinate:(struct CGPoint *)arg1;
- (void)cancelAllTouches;
- (void)clearAllTouches;
- (struct _TOUCH *)allTouches;
- (void)willRemoveSubview:(id)arg1;
- (void)removeFromSuperview;
- (void)startScene;
- (void)nextSceneDidLoad;
- (void)update;
- (void)layoutSubviews;
- (void)render;
- (void)renderLast;
- (void)stop;
- (void)start;
- (void)dealloc;
- (void)checkSubscriptionDaily;
- (void)checkSubscription;
- (id)initWithFrame:(struct CGRect)arg1 options:(id)arg2;
- (void)registerRemoteNotification;
- (id)platform;
- (void)threadLoadSongInfo;
- (void)removeCancelledSubscription;
- (void)removeSubscriptionPlan:(id)arg1;
- (void)convertPackageInfo;
- (void)moveDownloadData;
- (_Bool)fileManager:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3;
- (_Bool)fileManager:(id)arg1 shouldRemoveItemAtPath:(id)arg2;
@property(readonly, nonatomic, getter=getPlayerInfo) NSDictionary *playerInfo;
- (void)clearSubscriptionDistributeInfo:(id)arg1;
- (void)saveSubscriptionDistributeInfo:(id)arg1;
- (id)loadSubscriptionDistributeInfo;
- (void)updateSubscriptionDistributeInfo:(id)arg1 isPartial:(_Bool)arg2 isCache:(_Bool)arg3;
- (_Bool)isSubscriptionSong:(id)arg1 plan:(id)arg2;
- (id)getSubscriptionSongIDListWithPlan:(id)arg1;
- (void)finishDownloadSongsWithPlan:(id)arg1 songDataInfoArray:(id)arg2;
- (void)updateSubscriptionSongInfo;
- (void)validateSubscriptionPlan:(id)arg1;
- (void)removeSubscriptionSongInfo:(id)arg1 ofPlan:(id)arg2 onlyDisable:(_Bool)arg3;
- (id)productIdentifiersForSubscriptionID:(id)arg1;
- (id)subscriptionIDForProductIdentifier:(id)arg1;
- (id)subscriptionID;
- (id)pakageIDForSubscriptionPlan:(id)arg1;
- (void)finishDownloadPackageWithID:(id)arg1 songDataInfoArray:(id)arg2;
- (id)updateSongDataInfoWithSongDataInfoArray:(id)arg1;
- (void)loadSongWithSongDataInfo:(id)arg1 packageID:(id)arg2;
- (void)beginDownloadPackageWithID:(id)arg1;
- (void)removeSongsShouldUpdate;
- (void)removeSongWithID:(id)arg1;
- (id)addSongAtPath:(id)arg1 packageID:(id)arg2 length:(unsigned int)arg3 checkSum:(unsigned int)arg4 packsortnum:(unsigned int)arg5 purchased:(_Bool)arg6;
- (void)setIntUserDefaultsProperty:(int)arg1 forKey:(id)arg2;
- (int)intUserDefaultsPropertyWithKey:(id)arg1;
- (void)removeUserDefaultsProperty:(id)arg1;
- (void)setUserDefaultsProperty:(id)arg1 forKey:(id)arg2;
- (id)userDefaultsPropertyWithKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

