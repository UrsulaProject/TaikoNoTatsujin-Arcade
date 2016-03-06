//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISceneManagerTaikoController.h"

#import "MidiInputDelegate.h"

@class MidiInput, NSString;

@interface ISceneManagerVDrums : ISceneManagerTaikoController <MidiInputDelegate>
{
    MidiInput *midiInput_;
    int currentMIDIUniqueID_;
    unsigned char vDrumsHitInputTypes_[128];
    unsigned char defaultHitInputTypes_[128];
    _Bool isAlreadyOpened_;
    int pressedNoteNumber_;
    _Bool shouldShowDisconnectionAlert_;
    _Bool needsIdleTimerResetting_;
    _Bool _vDrumsInputEnabled;
    _Bool _vDrumsNonSupportedNoteNumberAlertEnabled;
    double _vDrumsScoreDelayTime;
}

@property(nonatomic) double vDrumsScoreDelayTime; // @synthesize vDrumsScoreDelayTime=_vDrumsScoreDelayTime;
@property(nonatomic) _Bool vDrumsNonSupportedNoteNumberAlertEnabled; // @synthesize vDrumsNonSupportedNoteNumberAlertEnabled=_vDrumsNonSupportedNoteNumberAlertEnabled;
@property(readonly, nonatomic) _Bool vDrumsInputEnabled; // @synthesize vDrumsInputEnabled=_vDrumsInputEnabled;
@property(readonly, nonatomic) int pressedNoteNumber; // @synthesize pressedNoteNumber=pressedNoteNumber_;
- (unsigned char)defaultHitInputTypeAtIndex:(unsigned long long)arg1;
- (unsigned char)vDrumsHitInputTypeAtIndex:(unsigned long long)arg1;
- (void)midiInputSendMessage:(id)arg1;
- (void)noteOff:(int)arg1 offVelocity:(int)arg2;
- (void)noteOn:(int)arg1 onVelocity:(int)arg2;
- (void)midiInputError:(int)arg1;
- (void)removeSourceWithSourceInfo:(id)arg1;
- (_Bool)addSourceWithSourceInfo:(id)arg1;
- (int)selectSourceWithSourceInfoArray:(id)arg1;
- (unsigned int)taikoControllerInputReleased;
- (unsigned int)taikoControllerInputPressed;
- (unsigned int)taikoControllerInputRaw;
- (_Bool)checkNoteNumberSupport:(int)arg1;
- (void)verifyVDrums;
@property(readonly, nonatomic) int vDrumsMandatoryCodeInputted;
@property(readonly, nonatomic) _Bool vDrumsReady;
@property(readonly, nonatomic) _Bool vDrumsConnected;
- (_Bool)taikoControllerInputEnabled;
- (void)loadVDrumsDelayJSON;
- (void)update;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 options:(id)arg2;
- (void)loadVDrumsConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

