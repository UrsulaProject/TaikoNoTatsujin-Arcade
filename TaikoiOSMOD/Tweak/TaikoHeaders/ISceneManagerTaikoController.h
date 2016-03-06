//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISceneManager.h"

#import "UIKeyInput.h"
#import "UITextInputTraits.h"

@class ISceneTaikoController, ISceneVDrumsDialog, NSString, NSTimer, TaikoAction, TaikoCoverView, TaikoSceneNode;

@interface ISceneManagerTaikoController : ISceneManager <UIKeyInput, UITextInputTraits>
{
    CDStruct_42c778cc workingTaikoControllerInput_;
    CDStruct_42c778cc fixedTaikoControllerInput_;
    unsigned int previousTaikoControllerInput_;
    unsigned long long taikoControllerInputPreserveCounts_[4];
    _Bool taikoControllerInputted_;
    _Bool batteryAlertShown_;
    struct _AGTEXTURE texture_;
    struct _AGTEXTUREFRAMEGROUP batteryTextureFrameGroup_;
    TaikoSceneNode *batteryNode_;
    TaikoAction *lowBatteryAnimation_;
    struct _AGTEXTUREFRAMEGROUP cautionTextureFrameGroup_;
    TaikoSceneNode *cautionNode_;
    TaikoAction *cautionAnimation_;
    TaikoCoverView *coverView_;
    _Bool covered_;
    _Bool coverTouched_;
    struct _TOUCH alternativeTouches_[10];
    ISceneTaikoController *sceneTaikoController_;
    ISceneVDrumsDialog *sceneVDrumsDialog_;
    unsigned int numberOfcharacters_;
    _Bool mayBecomeFirstResponder_;
    _Bool canBecomeFirstResponder_;
    _Bool taikoControllerReady_;
    _Bool shouldShowDisconnectionAlert_;
    _Bool firstResponder_;
    NSTimer *timer_;
    _Bool _taikoControllerConnected;
    _Bool needsTryToEnableTaikoController_;
    _Bool taikoControllerPollingStarted_;
    _Bool taikoControllerPollingEnabled_;
    _Bool keyWindow_;
    _Bool taikoControllerInputKeeping_;
    _Bool taikoControllerInputCleared_;
    _Bool _taikoControllerPollingStopped;
    _Bool _canOpenTaikoControllerConnectionDialog;
    _Bool _canConnectTaikoController;
    _Bool _taikoControllerInputEnabled;
    _Bool _taikoControllerCautionShowing;
    double _taikoControllerScoreDelayTime;
}

@property(readonly, nonatomic) _Bool taikoControllerCautionShowing; // @synthesize taikoControllerCautionShowing=_taikoControllerCautionShowing;
@property(readonly, nonatomic) _Bool taikoControllerInputEnabled; // @synthesize taikoControllerInputEnabled=_taikoControllerInputEnabled;
@property(readonly, nonatomic) _Bool taikoControllerConnected; // @synthesize taikoControllerConnected=_taikoControllerConnected;
@property(nonatomic) _Bool canConnectTaikoController; // @synthesize canConnectTaikoController=_canConnectTaikoController;
@property(nonatomic) _Bool canOpenTaikoControllerConnectionDialog; // @synthesize canOpenTaikoControllerConnectionDialog=_canOpenTaikoControllerConnectionDialog;
@property(nonatomic) _Bool taikoControllerPollingStopped; // @synthesize taikoControllerPollingStopped=_taikoControllerPollingStopped;
@property(nonatomic) double taikoControllerScoreDelayTime; // @synthesize taikoControllerScoreDelayTime=_taikoControllerScoreDelayTime;
- (_Bool)canUseTaikoController;
- (void)loadTaikoControllerDelayJSON;
- (id)mostAppropriateVersion:(id)arg1 inVersions:(id)arg2;
- (void)stopTaikoControllerPolling;
- (void)startTaikoControllerPolling;
- (void)pollTaikoController;
- (void)setNeedsTryToEnableTaikoController;
- (void)tryToEnableTaikoController;
- (void)hideKeyboard;
@property(nonatomic) _Bool taikoControllerPollingEnabled;
@property(readonly, nonatomic) _Bool mandatoryCodeInputted;
- (unsigned int)fixedTaikoControllerInput_released;
- (unsigned int)fixedTaikoControllerInput_pressed;
- (unsigned int)fixedTaikoControllerInput_raw;
@property(readonly, nonatomic) unsigned int taikoControllerInputReleased;
@property(readonly, nonatomic) unsigned int taikoControllerInputPressed;
@property(readonly, nonatomic) unsigned int taikoControllerInputRaw;
- (void)flipControllerInputs;
@property(nonatomic) long long spellCheckingType;
@property(nonatomic) long long autocorrectionType;
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (_Bool)hasText;
- (_Bool)canBecomeFirstResponder;
- (void)applicationWillResignActive;
- (void)evaluateInput:(unsigned short)arg1;
- (void)resetTaikoController;
- (void)keepTaikoControllerInput;
- (void)verifyTaikoController;
- (void)disableTaikoController;
- (_Bool)enableTaikoController;
- (void)showNonSupportedNoteNumberAlert;
- (void)hideTaikoControllerCaution;
- (void)showTaikoControllerCaution;
- (void)render;
- (void)renderLast;
- (void)openTaikoControllerGuide;
- (void)update;
- (void)updateWithoutTaikoController;
- (void)nextSceneDidLoadWithTaikoController;
- (void)clearTaikoControllerInput;
- (void)waitUntilInputIdle;
- (struct _TOUCH *)allTouches;
- (void)disconnectTaikoController;
- (void)windowDidResignKey;
- (void)windowDidBecomeKey;
- (_Bool)attemptToBecomeFirstResponder;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(nonatomic) long long returnKeyType;
@property(readonly) Class superclass;

@end

