//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaikoAction.h"

@class NSArray;

@interface TaikoSequenceAction : TaikoAction
{
    NSArray *actions_;
    unsigned long long index_;
}

- (void)rewind;
- (_Bool)updateAGObject:(struct _AGOBJECT *)arg1;
- (void)dealloc;
- (id)initWithActions:(id)arg1;

@end
