//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IRoomInfoForVSSettings : NSObject
{
    NSString *m_peerID;	// 8 = 0x8
    NSString *m_strRoomMaster;	// 16 = 0x10
    unsigned long long m_intRoomMaster;	// 24 = 0x18
    int m_roomMasterLength;	// 32 = 0x20
    int m_memberCount;	// 36 = 0x24
}

@property(nonatomic) int memberCount; // @synthesize memberCount=m_memberCount;
@property(nonatomic) int roomMasterLength; // @synthesize roomMasterLength=m_roomMasterLength;
@property(nonatomic) unsigned long long intRoomMaster; // @synthesize intRoomMaster=m_intRoomMaster;
@property(retain, nonatomic) NSString *strRoomMaster; // @synthesize strRoomMaster=m_strRoomMaster;
@property(retain, nonatomic) NSString *peerID; // @synthesize peerID=m_peerID;
- (void)dealloc;
- (id)init;

@end
