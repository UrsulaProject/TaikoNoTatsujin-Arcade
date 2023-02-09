//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMemberInfoForVSGame : NSObject
{
    int m_priority;	// 8 = 0x8
    int m_rank;	// 12 = 0xc
    unsigned long long m_name;	// 16 = 0x10
    int m_nameLength;	// 24 = 0x18
    int m_color;	// 28 = 0x1c
    int m_type;	// 32 = 0x20
    int m_score;	// 36 = 0x24
    int m_combo;	// 40 = 0x28
    unsigned int m_nGKTBArr;	// 44 = 0x2c
}

@property(nonatomic) unsigned int arrGKTB; // @synthesize arrGKTB=m_nGKTBArr;
@property(nonatomic) int combo; // @synthesize combo=m_combo;
@property(nonatomic) int score; // @synthesize score=m_score;
@property(nonatomic) int type; // @synthesize type=m_type;
@property(nonatomic) int userColor; // @synthesize userColor=m_color;
@property(nonatomic) int userNameLength; // @synthesize userNameLength=m_nameLength;
@property(nonatomic) unsigned long long userName; // @synthesize userName=m_name;
@property(nonatomic) int rank; // @synthesize rank=m_rank;
@property(nonatomic) int priority; // @synthesize priority=m_priority;
- (long long)compareDescScore:(id)arg1;
- (long long)compareAscScore:(id)arg1;
- (long long)compareDescPriority:(id)arg1;
- (long long)compareAscPriority:(id)arg1;
- (void)dealloc;
- (id)init;

@end
