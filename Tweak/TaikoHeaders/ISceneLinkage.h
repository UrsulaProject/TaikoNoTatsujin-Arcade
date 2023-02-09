//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ISceneBase.h"

#import "SceneDialogDelegate-Protocol.h"

@class ISceneDialog, NSString, TaikoSceneNode;

@interface ISceneLinkage : ISceneBase <SceneDialogDelegate>
{
    unsigned int state_;	// 72 = 0x48
    struct _AGTEXTURE dialogTexture_;	// 80 = 0x50
    struct _AGTEXTUREFRAMEGROUP windowFrameGroup_;	// 136 = 0x88
    struct _AGTEXTUREFRAMEGROUP dialogMessageFrameGroup_;	// 160 = 0xa0
    struct _AGTEXTUREFRAMEGROUP dialogButtonFrameGroup_;	// 184 = 0xb8
    struct _AGTEXTUREFRAMEGROUP dialogChoiceFrameGroup_;	// 208 = 0xd0
    struct _AGTEXTUREFRAMEGROUP digitFrameGroup_;	// 232 = 0xe8
    ISceneDialog *dialog_;	// 256 = 0x100
    TaikoSceneNode *digitNodes_[11];	// 264 = 0x108
    struct _AGTEXTURE titleTexture_;	// 352 = 0x160
    struct _AGTEXTUREFRAMEGROUP titleFrameGroup_;	// 408 = 0x198
    TaikoSceneNode *titleNode_;	// 432 = 0x1b0
    _Bool _busy;	// 440 = 0x1b8
}

@property(readonly, nonatomic) _Bool busy; // @synthesize busy=_busy;
- (void)sceneDialog:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)setFileNameImage:(id)arg1;
- (void)setEndDateString:(id)arg1;
- (int)setDigitToNodeAtIndex:(int)arg1 string:(id)arg2 begin:(int)arg3 end:(int)arg4;
- (void)renderDialog;
- (void)updateDialog;
- (void)destroyDialog;
- (void)openDialog;
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
