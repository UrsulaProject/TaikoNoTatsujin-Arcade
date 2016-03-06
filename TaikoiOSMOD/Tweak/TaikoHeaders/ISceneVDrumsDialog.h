//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISceneBase.h"

#import "SceneDialogDelegate.h"

@class ISceneDialog, NSString;

@interface ISceneVDrumsDialog : ISceneBase <SceneDialogDelegate>
{
    struct _AGTEXTURE texture_;
    struct _AGTEXTUREFRAMEGROUP notePlateFrameGroup_;
    struct _AGOBJECT notePlateObject_;
    struct _AGTEXTURE guideTexture_;
    struct _AGTEXTUREFRAMEGROUP guideTextureFrameGroup_;
    struct _AGTEXTUREFRAMEGROUP iconTextureFrameGroup_;
    struct _AGOBJECT guideObject_;
    struct _AGOBJECT iconObject_;
    unsigned int state_;
    int substate_;
    float phi_;
    struct _AGTEXTURE dialogTexture_;
    struct _AGTEXTUREFRAMEGROUP windowFrameGroup_;
    struct _AGTEXTUREFRAMEGROUP dialogMessageFrameGroups_[2];
    struct _AGTEXTUREFRAMEGROUP dialogButtonFrameGroup_;
    struct _AGTEXTUREFRAMEGROUP dialogChoiceFrameGroup_;
    ISceneDialog *dialogs_[2];
    _Bool dialogBusy_;
    _Bool visibleNotePlate_;
    int pauseState_;
    int pauseCounter_;
    unsigned int pauseBackColor_;
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

