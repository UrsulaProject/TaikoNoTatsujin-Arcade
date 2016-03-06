//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface ZXExpandedRow : NSObject
{
    _Bool _wasReversed;
    int _rowNumber;
    NSArray *_pairs;
}

@property(readonly, nonatomic) _Bool wasReversed; // @synthesize wasReversed=_wasReversed;
@property(readonly, nonatomic) int rowNumber; // @synthesize rowNumber=_rowNumber;
@property(readonly, nonatomic) NSArray *pairs; // @synthesize pairs=_pairs;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isEquivalent:(id)arg1;
- (_Bool)isReversed;
- (id)initWithPairs:(id)arg1 rowNumber:(int)arg2 wasReversed:(_Bool)arg3;

@end

