//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TOSBaseDlg.h"

#import "UITextFieldDelegate.h"

@class NSString, UIControl, UITextField;

@interface CheckAgeDlg : TOSBaseDlg <UITextFieldDelegate>
{
    NSString *tosurl;
    UITextField *texbirth[3];
    UIControl *btmctrl;
    struct CGRect btmrect;
}

+ (CDStruct_08b27754 *)getDefaultLayoutErrorLoop;
+ (CDStruct_08b27754 *)getDefaultLayout;
- (id).cxx_construct;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setViewController:(id)arg1 ReturnDlg:(id)arg2;
- (void)BtnKeybordHidden:(id)arg1;
- (void)BtnActionReturn:(id)arg1;
- (void)BtnActionAgree:(id)arg1;
- (void)BtnActionPolicy:(id)arg1;
- (id)initWithURLString:(id)arg1 Manager:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
