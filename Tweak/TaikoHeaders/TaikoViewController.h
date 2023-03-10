//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class ISceneManager;

@interface TaikoViewController : UIViewController
{
    _Bool _isRotating;	// 320 = 0x140
    long long currentInterfaceOrientation_;	// 328 = 0x148
    ISceneManager *_sceneManager;	// 336 = 0x150
}

@property(nonatomic) _Bool isRotating; // @synthesize isRotating=_isRotating;
@property(nonatomic) ISceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=currentInterfaceOrientation_;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)dealloc;
- (id)init;
- (void)orientationChanged:(id)arg1;

@end

