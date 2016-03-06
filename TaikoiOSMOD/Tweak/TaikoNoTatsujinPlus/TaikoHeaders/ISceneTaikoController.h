//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISceneBase.h"

#import "SceneDialogDelegate.h"

@class ISceneDialog;

@interface ISceneTaikoController : ISceneBase <SceneDialogDelegate>
{
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
    BOOL _busy;
}

@property(readonly, nonatomic) BOOL busy; // @synthesize busy=_busy;
- (void)sceneDialog:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)renderDialog;
- (void)updateDialog;
- (void)destroyDialogs;
- (void)openDialog;
- (void)renderGuide;
- (void)updateGuide;
- (void)updateGuideObjectWithRatio:(float)arg1;
- (BOOL)updatePhiWithMax:(float)arg1 epsilon:(float)arg2;
- (void)destroyGuide;
- (void)closeGuide;
- (void)openGuide;
- (void)render;
- (int)stateRun;
- (void)dealloc;
- (void)sceneDestroy;
- (void)sceneLoad;

@end

