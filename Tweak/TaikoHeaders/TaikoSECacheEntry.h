//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TaikoSECacheEntry : NSObject
{
    struct _AASAMPLE donSample_;	// 8 = 0x8
    struct _AASAMPLE katsuSample_;	// 32 = 0x20
}

- (void)playKatsuSEWithTag:(unsigned int)arg1;
- (void)playDonSEWithTag:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithEquipmentTone:(id)arg1;

@end

