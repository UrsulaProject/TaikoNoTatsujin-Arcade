//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TOSBaseDlg.h"

@class NSString, UITextField;

@interface CheckAgeConfirmDlg : TOSBaseDlg
{
    UITextField *tfbirthday;	// 352 = 0x160
    NSString *birthdaystr;	// 360 = 0x168
    NSString *tosurl;	// 368 = 0x170
}

+ (CDStruct_08b27754 *)getDefaultLayout;
- (void)setBirthDayText:(id)arg1;
- (void)BtnActionNega:(id)arg1;
- (void)BtnActionPosi:(id)arg1;
- (void)dealloc;
- (id)initWithURLString:(id)arg1 Manager:(id)arg2;
- (void)viewDidLoad;

@end
