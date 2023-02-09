//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BGNode, BGPath, NSArray;

@interface BGVariable : NSObject
{
    int state_;	// 8 = 0x8
    BGNode *node_;	// 16 = 0x10
    float t0_;	// 24 = 0x18
    unsigned long long index_;	// 32 = 0x20
    BGPath *path_;	// 40 = 0x28
    NSArray *edges_;	// 48 = 0x30
    float duration_;	// 56 = 0x38
    int loopCount_;	// 60 = 0x3c
    float loopTime_;	// 64 = 0x40
    float defaultValue_;	// 68 = 0x44
    float offsetValue_;	// 72 = 0x48
}

+ (id)variableWithPath:(id)arg1;
@property(nonatomic) float offsetValue; // @synthesize offsetValue=offsetValue_;
@property(nonatomic) float defaultValue; // @synthesize defaultValue=defaultValue_;
@property(readonly, nonatomic) int state; // @synthesize state=state_;
- (int)intValueAtTime:(float)arg1;
- (float)valueAtTime:(float)arg1;
- (void)setPath:(id)arg1;
- (void)reset;
- (void)dealloc;

@end
