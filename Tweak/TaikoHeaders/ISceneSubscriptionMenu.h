//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BGSceneBase.h"

#import "BGSNSInterfaceDelegate-Protocol.h"
#import "SKProductsRequestDelegate-Protocol.h"
#import "SceneDialogDelegate-Protocol.h"

@class ISceneDialog, ISceneHowTo, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString, TaikoAction, TaikoButton, TaikoRestore, TaikoWindow, UIButton;

@interface ISceneSubscriptionMenu : BGSceneBase <SKProductsRequestDelegate, BGSNSInterfaceDelegate, SceneDialogDelegate>
{
    int pauseState_;	// 108 = 0x6c
    int pauseCounter_;	// 112 = 0x70
    unsigned int pauseBackColor_;	// 116 = 0x74
    unsigned int pauseBackColor2_;	// 120 = 0x78
    int kanyuCounter_;	// 124 = 0x7c
    int kanyuDateNum_[3];	// 128 = 0x80
    int pageNum_;	// 140 = 0x8c
    int page_;	// 144 = 0x90
    int selectedButton_;	// 148 = 0x94
    struct _AGTEXTUREFRAMEGROUP *mainFrameGroup_;	// 152 = 0x98
    TaikoButton *buttons_[7];	// 160 = 0xa0
    struct _AGOBJECT buttonLabelObjects_[7];	// 216 = 0xd8
    struct _AGOBJECT closeButtonObject_;	// 608 = 0x260
    struct _AGOBJECT restoreButtonObject_;	// 664 = 0x298
    struct _AGOBJECT tokusyouButtonObject_;	// 720 = 0x2d0
    struct _AGOBJECT ticketLabelObject_;	// 776 = 0x308
    struct _AGOBJECT kanyuObject_[2];	// 832 = 0x340
    struct _AGOBJECT kanyuNumObject_[2];	// 944 = 0x3b0
    struct _AGOBJECT kanyuSlashObject_;	// 1056 = 0x420
    struct _AGOBJECT *contentObject_;	// 1112 = 0x458
    struct _AGOBJECT songListObject_[10];	// 1120 = 0x460
    struct _AGOBJECT urimonkuDon_;	// 1680 = 0x690
    struct _AGOBJECT urimonkuText_;	// 1736 = 0x6c8
    TaikoWindow *windows_[2];	// 1792 = 0x700
    struct CGRect arrowCollisions_[2];	// 1808 = 0x710
    TaikoAction *arrowActions_[2];	// 1872 = 0x750
    ISceneDialog *purchaseFinishDialog_;	// 1888 = 0x760
    ISceneDialog *restoreConfirmDialog_;	// 1896 = 0x768
    ISceneDialog *restoreFinishDialog_;	// 1904 = 0x770
    ISceneHowTo *sceneHowTo_;	// 1912 = 0x778
    _Bool triggered_;	// 1920 = 0x780
    UIButton *triggeredSender_;	// 1928 = 0x788
    UIButton *pressedSender_;	// 1936 = 0x790
    int currentButton_;	// 1944 = 0x798
    int *currentTitleObjectFrameIndex_;	// 1952 = 0x7a0
    int *nextTitleObjectFrameIndex_;	// 1960 = 0x7a8
    int savedTitleObjectFrameIndex_;	// 1968 = 0x7b0
    int titleObjectFrameIndex_;	// 1972 = 0x7b4
    TaikoRestore *restorer_;	// 1976 = 0x7b8
    NSMutableArray *receiptValidationRequests_;	// 1984 = 0x7c0
    NSMutableArray *receiptRegistrationRequests_;	// 1992 = 0x7c8
    NSMutableArray *restoredTransaction_;	// 2000 = 0x7d0
    _Bool waitingProductsRequest_;	// 2008 = 0x7d8
    _Bool shouldClose_;	// 2009 = 0x7d9
    _Bool errorOccured_;	// 2010 = 0x7da
    _Bool waitingSongListImageDownload_;	// 2011 = 0x7db
    int songListImageCount_;	// 2012 = 0x7dc
    int songListImageDownloadTimeoutCount_;	// 2016 = 0x7e0
    struct _AGTEXTURE songListImageTextures_[10];	// 2024 = 0x7e8
    struct _AGTEXTUREFRAMEGROUP tfgSongListImages_[10];	// 2584 = 0xa18
    struct _AGOBJECT songListImageObjects_[10];	// 2824 = 0xb08
    NSArray *musicPackages_;	// 3384 = 0xd38
    NSMutableDictionary *skProducts_;	// 3392 = 0xd40
    NSDate *priceExpiresDate_;	// 3400 = 0xd48
    _Bool rendering_;	// 3408 = 0xd50
    _Bool purchaseMode_;	// 3409 = 0xd51
    _Bool restoring_;	// 3410 = 0xd52
    _Bool isOpenSongList_;	// 3411 = 0xd53
    NSString *purchasingProductIdentifier_;	// 3416 = 0xd58
}

- (void)sceneDialog:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)sceneDialog:(id)arg1 selectedButtonAtIndex:(int)arg2;
- (void)restoreTransactionsFailedWithError:(id)arg1;
- (void)restoreTransactionsCompleted;
- (void)transactionFailedWithTransaction:(id)arg1;
- (_Bool)transactionCompletedWithTransaction:(id)arg1;
- (void)registerTransaction:(id)arg1;
- (void)SNSInterfaceNumber:(unsigned long long)arg1 didFailWithError:(id)arg2 object:(id)arg3;
- (void)SNSInterfaceNumber:(unsigned long long)arg1 didFinishWithCode:(id)arg2 entry:(id)arg3 object:(id)arg4;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)removeRegistrationRequestWithTransaction:(id)arg1;
- (void)removeValidationRequestWithSubscriptionID:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertFailureWithTitle:(id)arg1 message:(id)arg2 tag:(int)arg3;
- (void)onTouchDownButtonOption:(id)arg1;
- (void)onTouchUpOutsideButtonOption:(id)arg1;
- (void)onTouchUpInsideButtonOption:(id)arg1;
- (int)stateRestoreFinishDialog;
- (int)stateRestoreConfirmDialog;
- (int)statePurchaseFinishDialog;
- (void)changePage:(int)arg1;
- (void)touchTokusyouButton;
- (void)touchRestoreButton;
- (void)touchReturnButton;
- (void)ExitDlg:(int)arg1 Result:(int)arg2;
- (int)stateSongList;
- (void)ExitCheckAgeDlg:(int)arg1 Result:(int)arg2;
- (void)gotoStateSongList;
- (int)stateRoot;
- (int)stateIdle;
- (int)stateWait;
- (int)stateWaitSubscriptionVersionDownload;
- (void)render;
- (void)renderKanyu;
- (void)renderPrice;
- (void)enableButtons;
- (void)switchPurchaseMode;
- (void)returnToRoot;
- (void)resume;
- (void)close;
- (void)start;
- (void)waitingSongListImageDownload;
- (void)sceneStart;
- (void)sceneDestroy;
- (void)sceneLoad;
- (void)dealloc;
- (void)createAction:(int)arg1 posX:(float)arg2 posY:(float)arg3 moveLeft:(_Bool)arg4;
- (id)initWithManager:(id)arg1 currentTitleObjectFrameIndex:(int *)arg2 nextTitleObjectFrameIndex:(int *)arg3 titleObjectFrameIndex:(int)arg4 mainFrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg5 closeButtonFrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg6 restoreButtonFrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg7 popupWindowFrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg8 popupWindow2FrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg9 popupWindow3FrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg10 popupWindow4FrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg11 tfgDialogButton:(struct _AGTEXTUREFRAMEGROUP *)arg12 tfgDialogChoice:(struct _AGTEXTUREFRAMEGROUP *)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

