//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISceneManager, ModalViewController, NSDictionary, NSString;

@interface AgreementManager : NSObject
{
    ModalViewController *modal;
    float backalpha;
    int dlg_orientation;
    NSDictionary *strdic;
    NSString *weveErrorHtmlPath;
    _Bool dialog_reset;
    _Bool checkingVersion_;
    _Bool checkingHTML_;
    NSString *checkedVersion_;
    NSString *checkingHtmlURL_;
    ISceneManager *_sceneManager;
}

+ (float)getBackgroundAlpha;
+ (void)setBackgroundAlpha:(float)arg1;
+ (CDStruct_08b27754 *)getNullDialogLayout;
+ (id)make9PatchImage:(id)arg1 Frame:(struct CGRect *)arg2;
+ (void)releaseLayout:(CDStruct_08b27754 *)arg1;
+ (void)releaseDialogOne:(int)arg1 CheckIndex:(int)arg2;
+ (CDStruct_08b27754 *)getDialogLayout:(int)arg1;
+ (void)copyDefaultLayout:(CDStruct_08b27754 *)arg1;
+ (void)releaseDialogs:(int)arg1;
+ (void)setDialogs:(int)arg1;
+ (void)setReadCompleteTOS;
+ (_Bool)isUpdateReadTOSVersion;
+ (struct CGRect)getDialogFrameRectPercent:(struct CGRect)arg1 Scale:(struct CGSize)arg2;
+ (struct CGRect)getDialogFrameScreenPercent:(struct CGRect)arg1 Scale:(struct CGSize)arg2;
+ (struct CGRect)getDialogFrameScreenPercent:(struct CGRect)arg1;
+ (void)initialize;
@property(nonatomic) ISceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
- (id)getErrorHtmlPath;
- (void)setErrorHtmlPath:(id)arg1;
- (void)completeHttp:(id)arg1 isFinish:(_Bool)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestHttp:(id)arg1 delegate:(id)arg2;
- (void)checkTOSUpdate:(id)arg1 htmlURL:(id)arg2 ForceWrite:(_Bool)arg3 DialogReset:(_Bool)arg4;
- (void)setStringDictionary:(id)arg1 Keys:(id)arg2;
- (void)setLoadStringType:(int)arg1 Path:(id)arg2;
- (id)loadString:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)checkTOSUpdateNOResetDlg:(id)arg1 htmlURL:(id)arg2;
- (void)checkTOSUpdate:(id)arg1 htmlURL:(id)arg2;
- (void)displaySelectDialog:(id)arg1 Target:(id)arg2 Callback:(SEL)arg3 Parameter:(int)arg4 URL:(id)arg5;
- (void)displayWebViewDialog:(id)arg1 Target:(id)arg2 Callback:(SEL)arg3 Parameter:(int)arg4 URL:(id)arg5;
- (void)displayAgeDataDialog:(id)arg1 Target:(id)arg2 Callback:(SEL)arg3 Parameter:(int)arg4;
- (void)startCheckAgeDialog:(id)arg1 Target:(id)arg2 Callback:(SEL)arg3 Parameter:(int)arg4 URL:(id)arg5;
- (void)startAgreementDialog:(id)arg1 Target:(id)arg2 Callback:(SEL)arg3 Parameter:(int)arg4 URL:(id)arg5;
- (void)setOrientation:(int)arg1;
- (void)dealloc;
- (id)initWithOrientation:(int)arg1 Manager:(id)arg2;
- (id)initWithManager:(id)arg1;

@end
