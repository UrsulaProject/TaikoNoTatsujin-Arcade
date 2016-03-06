//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIAlertView;

@interface TaikoAlertView : NSObject
{
    UIAlertView *alertView_;
    id delegate_;
    CDUnknownBlockType onClickHandler_;
    CDUnknownBlockType onDismisHandler_;
}

+ (BOOL)isShowing;
+ (void)clearDelegate:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
@property(nonatomic) id delegate;
@property(nonatomic) int tag;
- (void)showWithOnClickHandler:(CDUnknownBlockType)arg1 onDismissHandler:(CDUnknownBlockType)arg2;
- (void)show;
- (void)dealloc;
- (id)initWithSubtitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

@end

