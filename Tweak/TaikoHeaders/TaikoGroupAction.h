//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TaikoAction.h"

@class NSArray;

@interface TaikoGroupAction : TaikoAction
{
    NSArray *actions_;	// 88 = 0x58
    _Bool *activeIndices_;	// 96 = 0x60
}

- (void)rewind;
- (_Bool)updateAGObject:(struct _AGOBJECT *)arg1;
- (void)dealloc;
- (id)initWithActions:(id)arg1;

@end

