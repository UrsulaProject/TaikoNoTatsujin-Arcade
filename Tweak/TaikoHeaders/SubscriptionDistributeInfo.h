//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SubscriptionDistributeInfo : NSObject <NSCoding>
{
    NSMutableDictionary *_infos;	// 8 = 0x8
    NSString *_lastUpdated;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(readonly, nonatomic) NSMutableDictionary *infos; // @synthesize infos=_infos;
- (_Bool)isImageComplete:(id)arg1 subscriptionID:(id)arg2;
- (void)removeSongInfo:(id)arg1 productID:(id)arg2 subscriptionID:(id)arg3 subscriptionDirectoryPath:(id)arg4;
- (id)addDistributeSongInfo:(id)arg1 subscriptionID:(id)arg2 downloadedSongs:(id)arg3 songInfo:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

@end

