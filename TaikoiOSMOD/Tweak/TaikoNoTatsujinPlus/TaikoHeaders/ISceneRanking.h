//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISceneBase.h"

#import "BGSNSInterfaceDelegate.h"

@class NSMutableData, NSURL, NSURLConnection, TaikoTextureCache, UIActivityIndicatorView;

@interface ISceneRanking : ISceneBase <BGSNSInterfaceDelegate>
{
    UIActivityIndicatorView *m_ActivityIndicatorView;
    struct _AGTEXTURE m_MainTexture;
    struct _AGTEXTUREFRAMEGROUP m_BackFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_BackLFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_BackRFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_TitleFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_CourseNameFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_CourseIconFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_NumFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_FirstFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_BigCharFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_ArrowFrameGroup;
    struct _AGTEXTUREFRAMEGROUP m_BackButtonFrameGroup;
    struct _AGOBJECT m_BackObject;
    struct _AGOBJECT m_UpperBackObject[2];
    struct _AGOBJECT m_LowerBackObject[2];
    struct _AGOBJECT m_BackLObject;
    struct _AGOBJECT m_UpperBackLObject[2];
    struct _AGOBJECT m_LowerBackLObject[2];
    struct _AGOBJECT m_BackRObject;
    struct _AGOBJECT m_UpperBackRObject[2];
    struct _AGOBJECT m_LowerBackRObject[2];
    struct _AGOBJECT m_TitleObject;
    struct _AGOBJECT m_CourseNameObject;
    struct _AGOBJECT m_CourseIconObject;
    struct _AGOBJECT m_BackButtonObject;
    struct _AGOBJECT m_SongTitleObject;
    struct _AGOBJECT m_RankPlaceDigitObject[3];
    struct _AGOBJECT m_RankNameObject[5];
    struct _AGOBJECT m_RankScoreDigitObject[7];
    struct _AGOBJECT m_RankFirstDigitObject[4];
    struct _AGOBJECT m_RankFirstObject;
    struct _AGOBJECT m_ArrowObject[4];
    struct CGPoint m_StartTouchPoint;
    struct CGPoint m_ScrollTouchPoint;
    float m_RankSpace;
    int m_SelectedSong;
    int m_LastSelectedSong;
    int m_SelectedCourse;
    int m_LastSelectedCourse;
    int m_SongCount;
    float m_SongScrollPosition;
    int m_SongScrollCounter;
    float m_CourseScrollPosition;
    int m_CourseScrollCounter;
    float m_ScrollPosition;
    float m_MaxScrollPosition;
    float m_VerticalSpaceStart;
    float m_VerticalSpaceHeight;
    float m_PlayerInfoPosition;
    float m_ScrollSpeed;
    float m_ScrollStartPosition;
    float m_ArrowPosition;
    float m_ArrowDeltaPosition;
    int m_FadeCounter;
    int m_ArrowAnimationCounter;
    int m_PlayerNameAlphaCounter;
    unsigned long m_PlayerNameAlpha;
    unsigned long long m_PlayerName;
    NSURLConnection *m_URLConnection;
    NSMutableData *m_URLData;
    NSURL *m_URL;
    unsigned long m_URLRequestType;
    char *m_InfoDownloaded;
    struct {
        unsigned int _field1;
        int _field2;
        int _field3;
        int _field4;
        struct _RANKING_RANK _field5[100];
    } *m_InfoList;
    int m_DownloadedSongIndex;
    int m_DownloadedCourse;
    BOOL m_Scrolling;
    BOOL m_SongChangeEnabled;
    TaikoTextureCache *m_TextureCache;
}

- (int)stateRun;
- (void)moveNextSong;
- (void)movePreviousSong;
- (void)moveNextCourse;
- (void)movePreviousCourse;
- (void)checkSongChangeEnabled;
- (int)stateFadeOut;
- (int)stateFadeIn;
- (void)updateAnimation;
- (int)update;
- (void)render;
- (void)drawCourseObjectsWithDX:(float)arg1 course:(int)arg2;
- (void)drawTitleWithDX:(float)arg1 course:(int)arg2;
- (void)drawLowerBackgroundWithColor:(unsigned int)arg1 course:(int)arg2;
- (void)drawUpperBackgroundWithColor:(unsigned int)arg1 course:(int)arg2;
- (void)drawBackgroundWithColor:(unsigned int)arg1 course:(int)arg2;
- (void)renderInfoAtPosition:(struct CGPoint)arg1 songIndex:(int)arg2 course:(int)arg3;
- (void)renderListAtPosition:(struct CGPoint)arg1 songIndex:(int)arg2 course:(int)arg3;
- (void)sceneStart;
- (void)sceneDestroy;
- (void)sceneLoad;
- (void)SNSInterfaceNumber:(unsigned int)arg1 didFinishWithCode:(id)arg2 entry:(id)arg3 object:(id)arg4;
- (void)SNSInterfaceNumber:(unsigned int)arg1 didFailWithError:(id)arg2 object:(id)arg3;
- (void)requestSongIndex:(unsigned long)arg1 course:(int)arg2;

@end

