//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache;

@interface TaikoSECache : NSObject
{
    NSCache *cache_;
}

- (void)purge;
- (void)playKatsuSEWithEquipmentTone:(id)arg1 tag:(unsigned int)arg2;
- (void)playDonSEWithEquipmentTone:(id)arg1 tag:(unsigned int)arg2;
- (id)entryWithEquipmentTone:(id)arg1;
- (id)loadWithEquipmentTone:(id)arg1;
- (void)dealloc;
- (id)initWithMaxEntry:(unsigned long long)arg1;

@end

