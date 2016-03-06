//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISceneBase.h"

#import "BGDownloadDelegate.h"
#import "BGSNSInterfaceDelegate.h"
#import "SceneDialogDelegate.h"
#import "UIAlertViewDelegate.h"

@class BGDownload, ISceneBonuspoint, ISceneDialog, ISceneNamePlate, NSMutableSet, NSString, TaikoPrize, TaikoPrizeManager, TaikoProgressIndicator, TaikoTextureCache;

@interface ISceneGottenPrize : ISceneBase <BGSNSInterfaceDelegate, UIAlertViewDelegate, BGDownloadDelegate, SceneDialogDelegate>
{
    int m_NextScene;
    int m_FadeCounter;
    float m_BackScrollSpeed;
    float m_BackPosition;
    int talkCounter_;
    unsigned int talkType_;
    unsigned int wallpaperTalkType_;
    BOOL isTalkChanged_;
    int donChanCounter_;
    BOOL isListGotten_;
    char downloadedFlagList_[5];
    NSMutableSet *newPrizeSet_;
    BGDownload *bgDownload_;
    BOOL isDownloadFinished_;
    int pauseCounter_;
    int pauseState_;
    int downloadFileSize_;
    NSString *wallpaperSize_;
    TaikoPrize *currentPrize_;
    int currentButtonIndex_;
    int pageNum_;
    int page_;
    ISceneBonuspoint *sceneBonuspoint_;
    ISceneNamePlate *sceneNamePlate_;
    TaikoProgressIndicator *progressIndicator_;
    ISceneDialog *jumpDialog_;
    ISceneDialog *resolutionDialog_;
    TaikoPrizeManager *gottenPrizeManager_;
    TaikoTextureCache *textureCache_;
    struct _AGTEXTURE mainTexture_;
    struct _AGTEXTUREFRAMEGROUP tfgBackButton_;
    struct _AGTEXTUREFRAMEGROUP tfgBonuspointPlate_;
    struct _AGTEXTUREFRAMEGROUP tfgBonuspointDigit_;
    struct _AGTEXTUREFRAMEGROUP tfgBack_;
    struct _AGTEXTUREFRAMEGROUP tfgTitle_;
    struct _AGTEXTUREFRAMEGROUP tfgDon_;
    struct _AGTEXTUREFRAMEGROUP tfgTalk_;
    struct _AGTEXTUREFRAMEGROUP tfgDonChan_;
    struct _AGTEXTUREFRAMEGROUP tfgPlate_;
    struct _AGTEXTUREFRAMEGROUP tfgBar_;
    struct _AGTEXTUREFRAMEGROUP tfgArrow_;
    struct _AGTEXTUREFRAMEGROUP tfgNumber_;
    struct _AGTEXTUREFRAMEGROUP tfgNewIcon_;
    struct _AGTEXTUREFRAMEGROUP tfgDownload_;
    struct _AGTEXTUREFRAMEGROUP tfgWallpaperMessage_;
    struct _AGTEXTUREFRAMEGROUP tfgJumpDialogWindow_;
    struct _AGTEXTUREFRAMEGROUP tfgJumpDialogMessage_;
    struct _AGTEXTUREFRAMEGROUP tfgJumpDialogButton_;
    struct _AGTEXTUREFRAMEGROUP tfgJumpDialogChoice_;
    struct _AGTEXTUREFRAMEGROUP tfgResolutionDialogMessage_;
    struct _AGTEXTUREFRAMEGROUP tfgResolutionDialogButton_;
    struct _AGTEXTUREFRAMEGROUP tfgResolutionDialogChoice_;
    struct _AGOBJECT backButtonObject_;
    struct _AGOBJECT closeButtonObject_;
    struct _AGOBJECT backObject_;
    struct _AGOBJECT titleObject_;
    struct _AGOBJECT fukidashiObject_;
    struct _AGOBJECT taikoObject_;
    struct _AGOBJECT talkObject_;
    struct _AGOBJECT donChanObject_;
    struct _AGOBJECT plateObject_;
    struct _AGOBJECT barEmptyObject_;
    struct _AGOBJECT barDownloadObject_;
    struct _AGOBJECT barCompleteObject_;
    struct _AGOBJECT downloadObject_;
    struct _AGOBJECT nameObject_;
    struct _AGOBJECT arrowLeftObject;
    struct _AGOBJECT arrowRightObject;
    struct _AGOBJECT numberLeftObject_[2];
    struct _AGOBJECT numberRightObject_[2];
    struct _AGOBJECT slashObject_;
    struct _AGOBJECT newIconObject_;
    struct _AGOBJECT wallpaperMessageObject_;
}

- (void)onCompleteCapture:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)selectTalkType:(id)arg1;
- (BOOL)changePage:(int)arg1;
- (void)disableNewOfPrizeSet;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)sceneDialog:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)sceneDialog:(id)arg1 selectedButtonAtIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)SNSInterfaceNumber:(unsigned int)arg1 didFailWithError:(id)arg2 object:(id)arg3;
- (void)SNSInterfaceNumber:(unsigned int)arg1 didFinishWithCode:(id)arg2 entry:(id)arg3 object:(id)arg4;
- (int)stateFadeOut;
- (int)stateFadeIn;
- (int)stateResolutionSelectDialog;
- (int)stateJumpDialog;
- (int)stateWallpaperMessage;
- (int)stateDownloading;
- (int)stateWait;
- (int)stateWaitForList;
- (int)stateRun;
- (void)preloadPage:(int)arg1;
- (void)renderTalk;
- (void)renderPanel;
- (void)render;
- (void)updateAnimation;
- (int)update;
- (void)sceneStart;
- (void)sceneDestroy;
- (void)sceneLoad;

@end

