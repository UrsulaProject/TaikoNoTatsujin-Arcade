//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ZXDecodedInformation;

@interface ZXBlockParsedResult : NSObject
{
    _Bool _finished;	// 8 = 0x8
    ZXDecodedInformation *_decodedInformation;	// 16 = 0x10
}

@property(readonly, nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic) ZXDecodedInformation *decodedInformation; // @synthesize decodedInformation=_decodedInformation;
- (void).cxx_destruct;
- (id)initWithInformation:(id)arg1 finished:(_Bool)arg2;
- (id)initWithFinished:(_Bool)arg1;

@end

