//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ZXDataCharacter, ZXRSSFinderPattern;

@interface ZXExpandedPair : NSObject
{
    _Bool _mayBeLast;	// 8 = 0x8
    ZXDataCharacter *_leftChar;	// 16 = 0x10
    ZXDataCharacter *_rightChar;	// 24 = 0x18
    ZXRSSFinderPattern *_finderPattern;	// 32 = 0x20
}

+ (_Bool)isEqualOrNil:(id)arg1 toObject:(id)arg2;
@property(readonly, nonatomic) _Bool mayBeLast; // @synthesize mayBeLast=_mayBeLast;
@property(readonly, nonatomic) ZXRSSFinderPattern *finderPattern; // @synthesize finderPattern=_finderPattern;
@property(readonly, nonatomic) ZXDataCharacter *rightChar; // @synthesize rightChar=_rightChar;
@property(readonly, nonatomic) ZXDataCharacter *leftChar; // @synthesize leftChar=_leftChar;
- (void).cxx_destruct;
- (unsigned long long)hashNotNil:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) _Bool mustBeLast;
- (id)initWithLeftChar:(id)arg1 rightChar:(id)arg2 finderPattern:(id)arg3 mayBeLast:(_Bool)arg4;

@end

