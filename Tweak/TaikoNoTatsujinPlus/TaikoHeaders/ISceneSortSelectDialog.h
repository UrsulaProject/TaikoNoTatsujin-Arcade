//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BGSceneBase.h"

@class TaikoWindow;

@interface ISceneSortSelectDialog : BGSceneBase
{
    int pauseState_;
    int pauseCounter_;
    int beginningSortState_;
    BOOL beginningAkaSyutoku;
    unsigned long pauseBackColor_;
    int *currentTitleObjectFrameIndex_;
    int *nextTitleObjectFrameIndex_;
    int savedTitleObjectFrameIndex_;
    struct _AGOBJECT headObject_[2];
    struct _AGOBJECT textObject_[7];
    struct _AGOBJECT yesNoObject_[2];
    struct _AGOBJECT textBackObject_[2];
    struct _AGOBJECT yesNoBackObject_[2];
    struct _AGOBJECT okButtonObject_;
    TaikoWindow *window_;
    BOOL _akaSyutoku;
    int _sortState;
}

@property(nonatomic) BOOL akaSyutoku; // @synthesize akaSyutoku=_akaSyutoku;
@property(nonatomic) int sortState; // @synthesize sortState=_sortState;
- (BOOL)isUserInteractionEnabled;
- (int)stateRun;
- (void)render;
- (void)sceneStart;
- (void)sceneDestroy;
- (void)sceneLoad;
- (void)dealloc;
- (id)initWithManager:(id)arg1 currentTitleObjectFrameIndex:(int *)arg2 nextTitleObjectFrameIndex:(int *)arg3 frameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg4 okButtonFrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg5 popupWindowFrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg6;

@end

