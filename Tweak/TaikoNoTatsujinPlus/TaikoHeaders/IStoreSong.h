//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IStorePackage, NSString;

@interface IStoreSong : NSObject
{
    NSString *m_Title;
    NSString *m_FileName;
    unsigned long m_FileSize;
    unsigned long m_CheckSum;
    IStorePackage *m_Package;
    BOOL m_Downloaded;
    unsigned long m_nSongPackSortNum;
    NSString *m_Identifier;
}

@property(nonatomic) BOOL downloaded; // @synthesize downloaded=m_Downloaded;
@property(readonly, nonatomic) IStorePackage *package; // @synthesize package=m_Package;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=m_Identifier;
@property(readonly, nonatomic) unsigned long packSortNum; // @synthesize packSortNum=m_nSongPackSortNum;
@property(readonly, nonatomic) unsigned long checkSum; // @synthesize checkSum=m_CheckSum;
@property(readonly, nonatomic) unsigned long fileSize; // @synthesize fileSize=m_FileSize;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=m_FileName;
@property(readonly, nonatomic) NSString *title; // @synthesize title=m_Title;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 fileSize:(unsigned long)arg3 checkSum:(unsigned long)arg4 packsortnum:(unsigned long)arg5 package:(id)arg6;

@end
