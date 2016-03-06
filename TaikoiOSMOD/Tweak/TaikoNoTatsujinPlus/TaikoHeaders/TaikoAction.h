//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TaikoAction : NSObject
{
    int type_;
    NSArray *frameIndices_;
    NSArray *keyFrames_;
    struct CGPoint destination_;
    unsigned int targetValue_;
    float targetValueF_;
    unsigned int duration_;
    unsigned int count_;
    BOOL completed_;
}

+ (id)group:(id)arg1;
+ (id)repeatActionForever:(id)arg1;
+ (id)repeatAction:(id)arg1 count:(unsigned int)arg2;
+ (id)sequence:(id)arg1;
+ (id)scaleYTo:(float)arg1 duration:(unsigned int)arg2;
+ (id)scaleXTo:(float)arg1 duration:(unsigned int)arg2;
+ (id)fadeAlphaTo:(unsigned int)arg1 duration:(unsigned int)arg2;
+ (id)moveTo:(struct CGPoint)arg1 duration:(unsigned int)arg2;
+ (id)animateWithFrameIndices:(id)arg1 durations:(id)arg2;
+ (id)animateWithFrameIndices:(id)arg1 durationPerFrame:(unsigned int)arg2;
+ (id)fadeOutWithDuration:(unsigned int)arg1;
+ (id)fadeInWithDuration:(unsigned int)arg1;
+ (id)waitForDuration:(unsigned int)arg1;
@property(readonly, nonatomic) BOOL completed; // @synthesize completed=completed_;
@property(readonly, nonatomic) unsigned int duration; // @synthesize duration=duration_;
- (void)rewind;
- (BOOL)updateAGObject:(struct _AGOBJECT *)arg1;
- (void)dealloc;

@end

