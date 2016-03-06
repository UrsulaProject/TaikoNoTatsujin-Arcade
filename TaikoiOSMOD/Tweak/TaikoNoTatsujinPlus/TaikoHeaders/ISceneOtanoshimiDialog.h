//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BGSceneBase.h"

#import "TaikoUpdateCheckerDelegate.h"

@class TaikoButton, TaikoWindow, UIButton;

@interface ISceneOtanoshimiDialog : BGSceneBase <TaikoUpdateCheckerDelegate>
{
    int m_PauseState;
    int m_PauseCounter;
    unsigned long m_OtanoshimiBackColor;
    BOOL m_RequestPageChange;
    UIButton *m_RequestPageChangeSender;
    UIButton *m_PushingSender;
    int m_SelectedIndex;
    struct _AGOBJECT m_OtanoshimiCloseObject;
    struct _AGOBJECT m_OtanoshimiDialogObject[3];
    struct _AGOBJECT m_HeadObject;
    struct _AGOBJECT m_NewIconObject;
    TaikoWindow *m_OtanoshimiWindow;
    TaikoButton *m_OtanoshimiDialogButton[3];
    BOOL _isShowNewIcon;
}

@property(nonatomic) BOOL isShowNewIcon; // @synthesize isShowNewIcon=_isShowNewIcon;
- (void)updateChecker:(id)arg1 didFinishWithType:(unsigned int)arg2;
- (int)stateIdle;
- (int)stateCheckUpdate;
- (BOOL)isUserInteractionEnabled;
- (void)onTouchDownButton:(id)arg1;
- (void)onTouchUpOutsideButton:(id)arg1;
- (void)onTouchUpInsideButton:(id)arg1;
- (int)stateRoot;
- (void)resume;
- (void)render;
- (void)sceneStart;
- (void)sceneDestroy;
- (void)sceneLoad;
- (void)dealloc;
- (id)initWithManager:(id)arg1 tfgBackButton:(struct _AGTEXTUREFRAMEGROUP *)arg2 frameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg3 dialogFrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg4 dialogItemFrameGroup:(struct _AGTEXTUREFRAMEGROUP *)arg5 tfgNewIcon:(struct _AGTEXTUREFRAMEGROUP *)arg6;

@end

