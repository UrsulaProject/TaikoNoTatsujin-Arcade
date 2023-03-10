//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ISceneBase.h"

#import "SceneDialogDelegate-Protocol.h"

@class ISceneDialog, NSString;

@interface ISceneVDrumsDialog : ISceneBase <SceneDialogDelegate>
{
    struct _AGTEXTURE texture_;	// 72 = 0x48
    struct _AGTEXTUREFRAMEGROUP notePlateFrameGroup_;	// 128 = 0x80
    struct _AGOBJECT notePlateObject_;	// 152 = 0x98
    struct _AGTEXTURE guideTexture_;	// 208 = 0xd0
    struct _AGTEXTUREFRAMEGROUP guideTextureFrameGroup_;	// 264 = 0x108
    struct _AGTEXTUREFRAMEGROUP iconTextureFrameGroup_;	// 288 = 0x120
    struct _AGOBJECT guideObject_;	// 312 = 0x138
    struct _AGOBJECT iconObject_;	// 368 = 0x170
    unsigned int state_;	// 424 = 0x1a8
    int substate_;	// 428 = 0x1ac
    float phi_;	// 432 = 0x1b0
    struct _AGTEXTURE dialogTexture_;	// 440 = 0x1b8
    struct _AGTEXTUREFRAMEGROUP windowFrameGroup_;	// 496 = 0x1f0
    struct _AGTEXTUREFRAMEGROUP dialogMessageFrameGroups_[2];	// 520 = 0x208
    struct _AGTEXTUREFRAMEGROUP dialogButtonFrameGroup_;	// 568 = 0x238
    struct _AGTEXTUREFRAMEGROUP dialogChoiceFrameGroup_;	// 592 = 0x250
    ISceneDialog *dialogs_[2];	// 616 = 0x268
    _Bool dialogBusy_;	// 632 = 0x278
    _Bool visibleNotePlate_;	// 633 = 0x279
    int pauseState_;	// 636 = 0x27c
    int pauseCounter_;	// 640 = 0x280
    unsigned int pauseBackColor_;	// 644 = 0x284
}

- (void)sceneDialog:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)renderDialog;
- (void)updateDialog;
- (void)destroyDialogs;
- (void)openDialog;
- (void)renderGuide;
- (void)updateGuide;
- (void)updateGuideObjectWithRatio:(float)arg1;
- (_Bool)updatePhiWithMax:(float)arg1 epsilon:(float)arg2;
- (void)destroyGuide;
- (void)closeGuide;
- (void)openGuide;
- (void)renderNonSupportedNoteNumberAlert;
- (void)updateNonSupportedNoteNumberAlert;
- (void)showNonSupportedNoteNumberAlert;
@property(readonly, nonatomic) _Bool busy;
- (void)render;
- (int)stateRun;
- (void)dealloc;
- (void)sceneDestroy;
- (void)sceneLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

