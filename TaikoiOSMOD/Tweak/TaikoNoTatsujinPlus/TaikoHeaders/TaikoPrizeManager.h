//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableSet;

@interface TaikoPrizeManager : NSObject
{
    NSMutableSet *newPrizes_;
    NSArray *_prizes;
}

@property(readonly, nonatomic) NSArray *prizes; // @synthesize prizes=_prizes;
- (unsigned int)numberOfNewPrizes;
- (void)setNew:(BOOL)arg1 forIdentifier:(id)arg2;
- (BOOL)newForIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithArray:(id)arg1;

@end

