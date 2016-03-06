//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class TOSBaseDlg, UIControl, UIScrollView, UIView;

@interface ModalViewController : UIViewController
{
    TOSBaseDlg *dlgctrl;
    UIView *transview;
    id callback_target;
    SEL callback;
    int callback_param;
    int callback_result;
    float transview_alpha;
    int dlg_orientation;
    UIControl *bottomControl;
    UIScrollView *_scrollView;
}

+ (int)getTranStatusBarWidth;
+ (int)getTranStatusBarHeight;
+ (struct CGRect)getLandScapeFrame:(CDStruct_9211591f)arg1;
+ (struct CGRect)getPortraitFrame:(CDStruct_9211591f)arg1;
+ (struct CGPoint)getAbsViewPos:(id)arg1;
+ (int)getDay:(int)arg1;
+ (int)getMonth:(int)arg1;
+ (int)getYear:(int)arg1;
+ (id)getBirthdayString:(id)arg1;
+ (id)getBirthdayString;
+ (int)calcCurrentAge;
+ (_Bool)saveBirthDay:(id)arg1;
+ (_Bool)checkBirthDayText:(id)arg1;
+ (id)loadBirthDay;
+ (_Bool)isOverAge;
+ (id)loadReadTOSVersion;
+ (id)loadTOSVersion;
+ (_Bool)isYYYYMMDDhhmm:(id)arg1;
+ (int)compareYYYYMMDDhhmm:(id)arg1 Check:(id)arg2;
+ (void)setReadCompleteTOS;
+ (_Bool)isUpdateReadTOSVersion;
+ (void)updateTOSVersion:(id)arg1 DialogReset:(_Bool)arg2;
+ (_Bool)isUpdatedTOSVersion:(id)arg1;
+ (_Bool)isAgreeOnce;
+ (void)setAgrreFlag:(_Bool)arg1;
+ (_Bool)isAgree;
+ (void)clearUserDefaults;
+ (void)initUserDefaults;
+ (void)removeViewItems:(id)arg1;
+ (void)clearViewItem;
+ (void)addViewItem:(id)arg1 FrameRect:(struct CGRect)arg2 Layout:(CDStruct_08b27754 *)arg3;
+ (id)setActivityIndicator:(id)arg1 FrameRect:(struct CGRect)arg2;
+ (void)setLabel:(id)arg1 FrameRect:(struct CGRect)arg2 LabelString:(id)arg3;
+ (id)setTextField:(id)arg1 FrameRect:(struct CGRect)arg2 TagID:(int)arg3 Delegate:(id)arg4 setString:(id)arg5 placeholder:(id)arg6 Layout:(CDStruct_08b27754 *)arg7;
+ (id)setWebView:(id)arg1 FrameRect:(struct CGRect)arg2 Delegate:(id)arg3 Layout:(CDStruct_08b27754 *)arg4;
+ (void)setNoborderTextView:(id)arg1 Text:(id)arg2 FrameRect:(struct CGRect)arg3 Layout:(CDStruct_08b27754 *)arg4;
+ (void)setSimpleTextView:(id)arg1 Text:(id)arg2 FrameRect:(struct CGRect)arg3 Layout:(CDStruct_08b27754 *)arg4;
+ (id)clipImge:(id)arg1 Rect:(struct CGRect)arg2;
+ (id)make9patchImage:(id)arg1 Rect:(struct CGSize)arg2 Rect:(struct CGRect)arg3;
+ (id)setDlgLinkButton:(id)arg1 SetView:(id)arg2 Title:(id)arg3 FrameRect:(struct CGRect)arg4 Action:(SEL)arg5 Layout:(CDStruct_08b27754 *)arg6;
+ (id)setDlgButton:(id)arg1 SetView:(id)arg2 Title:(id)arg3 FrameRect:(struct CGRect)arg4 Action:(SEL)arg5 Layout:(CDStruct_08b27754 *)arg6;
+ (void)setDlgTextView:(id)arg1 Text:(id)arg2 FrameRect:(struct CGRect)arg3 Layout:(CDStruct_08b27754 *)arg4;
+ (void)setDefaultFrame:(id)arg1 FrameRect:(struct CGRect)arg2 Layout:(CDStruct_08b27754 *)arg3;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)setBottomUI:(id)arg1;
- (void)keyboardWasHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)registForKeyboardNotifications;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)isOrientationPortrait;
- (void)resetViewItem;
- (void)requestURL:(id)arg1 URL:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientationModalController:(long long)arg1 duration:(double)arg2;
- (void)resetLayout;
- (void)setResultValue:(int)arg1;
- (void)changeDlg:(id)arg1 NextDlg:(id)arg2 ReleaseCurDlg:(_Bool)arg3;
- (void)endModalDlg;
- (void)setDialog:(id)arg1;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 Target:(id)arg2 Callback:(SEL)arg3 Param:(int)arg4 Alpha:(float)arg5 Orientation:(int)arg6;
- (void)viewDidLoad;

@end
