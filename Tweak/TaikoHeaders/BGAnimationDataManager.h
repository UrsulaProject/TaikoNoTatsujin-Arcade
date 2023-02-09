//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface BGAnimationDataManager : NSObject
{
    NSString *path_;	// 8 = 0x8
    NSDictionary *fileOffsetMap_;	// 16 = 0x10
    NSMutableDictionary *fileTable_;	// 24 = 0x18
}

+ (id)sharedManager;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (id)offsetOfPath:(id)arg1;
- (void)unmountAll;
- (void)mount:(id)arg1;
- (id)dataWithContentsOfFile:(id)arg1;
- (_Bool)fileExistsAtPath:(id)arg1;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1;
- (id)init;

@end
