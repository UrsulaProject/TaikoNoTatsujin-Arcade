//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BGSceneBase.h"

@interface ISceneFullCombo : BGSceneBase
{
    float time_;
}

@property(nonatomic) float time; // @synthesize time=time_;
- (int)stateRun;
- (int)update;
- (void)sceneStart;
- (void)render;
- (void)sceneDestroy;
- (void)sceneLoad;

@end

