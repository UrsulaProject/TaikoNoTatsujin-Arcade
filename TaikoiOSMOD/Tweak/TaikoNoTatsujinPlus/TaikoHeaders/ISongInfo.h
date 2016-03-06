//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@class NSString;

@interface ISongInfo : NSObject
{
    unsigned long m_Version;
    NSString *m_PackageID;
    NSString *m_Path;
    NSString *m_ImagePackPath;
    NSString *m_Identifier;
    NSString *m_Title;
    unsigned long m_Genre;
    double m_PreviewStartTime;
    int m_CourseDifficulties[5];
    unsigned long m_MusicDataOffset;
    unsigned long m_MusicDataLength;
    unsigned long m_ScoreDataOffset[5];
    unsigned long m_ScoreDataLength[5];
    unsigned long m_ImagePackDataOffset;
    unsigned long m_nSongPackSortNum;
    int m_AnimationType;
    int m_DancerCount[5];
    int m_ChibiCount[5];
    int m_BgCount[2];
    unsigned long m_AnimationDataOffset;
    unsigned long m_AnimationDataLength;
    double m_ScoreDelayTime;
    char m_HasBranch[5];
    unsigned long m_Length;
    unsigned long m_CheckSum;
    BOOL m_IsValid;
    NSString *m_Pronunciation;
    unsigned long m_Generation;
    double m_HookStart;
    double m_HookEnd;
    int m_NumberOfCourses;
    BOOL m_Purchased;
    BOOL _corrupt;
}


//init Then SetupWithTaikoMusicData
//Mar  3 21:10:42 Naville-iPhone TaikoUniversal[1123] <Warning>: -[<ISongInfo: 0x14ed5710> initWithFileAtPath:/private/var/mobile/Containers/Bundle/Application/A160C9B3-0A7D-4818-B64E-A0DAA06F2E27/TaikoUniversal.app/clsca.dat packageID:default length:2109186 checkSum:1869428712 packsortnum:1 purchased:0]
//Mar  3 21:10:42 Naville-iPhone TaikoUniversal[1123] <Warning>: -[<ISongInfo: 0x14ed5710> setupWithTaikoMusicData:/private/var/mobile/Containers/Bundle/Application/A160C9B3-0A7D-4818-B64E-A0DAA06F2E27/TaikoUniversal.app/clsca.dat]

+ (unsigned long)hashCode:(id)arg1 length:(unsigned long)arg2;
+ (void)setAdditionalInfoDictionary:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) BOOL corrupt; // @synthesize corrupt=_corrupt;
@property(readonly, nonatomic) int numberOfCourses; // @synthesize numberOfCourses=m_NumberOfCourses;
@property(readonly, nonatomic) double hookStart; // @synthesize hookStart=m_HookStart;
@property(readonly, nonatomic) BOOL purchased; // @synthesize purchased=m_Purchased;
@property(readonly, nonatomic) double scoreDelayTime; // @synthesize scoreDelayTime=m_ScoreDelayTime;
@property(readonly, nonatomic) int animationType; // @synthesize animationType=m_AnimationType;
@property(readonly, nonatomic) unsigned long imagePackDataOffset; // @synthesize imagePackDataOffset=m_ImagePackDataOffset;
@property(readonly, nonatomic) double previewStartTime; // @synthesize previewStartTime=m_PreviewStartTime;
@property(readonly, nonatomic) unsigned long generation; // @synthesize generation=m_Generation;
@property(readonly, nonatomic) unsigned long genre; // @synthesize genre=m_Genre;
@property(readonly, nonatomic) NSString *pronunciation; // @synthesize pronunciation=m_Pronunciation;
@property(readonly, nonatomic) NSString *title; // @synthesize title=m_Title;
@property(readonly, nonatomic) NSString *imagePackPath; // @synthesize imagePackPath=m_ImagePackPath;
@property(readonly, nonatomic) NSString *path; // @synthesize path=m_Path;
@property(readonly, nonatomic) NSString *packageID; // @synthesize packageID=m_PackageID;
@property(readonly, nonatomic) unsigned long genuineVersion; // @synthesize genuineVersion=m_Version;
- (BOOL)isSameMetadataWithFileAtPath:(id)arg1 packageID:(id)arg2 length:(unsigned long)arg3 checkSum:(unsigned long)arg4 packsortnum:(unsigned long)arg5 purchased:(BOOL)arg6;
- (int)generationSortValue;
- (int)genreSortValue;
- (id)animationData;
- (id)identifier;
- (int)getBgCount:(int)arg1;
- (int)getChibiCount:(int)arg1;
- (int)getDancerCount:(int)arg1;
- (struct __sFILE *)scoreFilePointerOfCourse:(unsigned long)arg1;
- (id)binDataOfCourse:(unsigned long)arg1;
- (int)difficultyOfCourse:(unsigned long)arg1;
- (id)musicData;
- (void)dealloc;
- (id)initWithFileAtPath:(id)arg1 packageID:(id)arg2 length:(unsigned long)arg3 checkSum:(unsigned long)arg4 packsortnum:(unsigned long)arg5 purchased:(BOOL)arg6;//arg1=/var/mobile/Containers/Data/Application/BA50A1E6-57C9-464A-8DF3-BF930CA12CFE/Documents/Songs/aisowr.dat  arg2=taikoDL057_otp
- (BOOL)isValid;
- (BOOL)hasBranch:(int)arg1;
- (void)setupWithTaikoMusicData:(id)arg1;//Arg1=Path to .dat Loaded SongData Using [NSData dataWithContentsOfMappedFile:arg2];
- (void)updateInfo;
- (void)checkIPKBundled;
@property(readonly, nonatomic) BOOL titleImagesUnified;
- (BOOL)IPKBundled;
@property(readonly, nonatomic) BOOL shouldUpdate;
- (BOOL)hasUnifiedIPK;
@property(readonly, nonatomic) unsigned long version;
- (BOOL)hasAnimation;
@property(readonly, nonatomic) unsigned long songPackSortNum;

@end

