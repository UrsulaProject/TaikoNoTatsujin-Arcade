//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIAlertView;

@interface TaikoAlertView : NSObject
{
    UIAlertView *alertView_;	// 8 = 0x8
    id delegate_;	// 16 = 0x10
    CDUnknownBlockType onClickHandler_;	// 24 = 0x18
    CDUnknownBlockType onDismisHandler_;	// 32 = 0x20
    _Bool _isWaitingToShow;	// 40 = 0x28
}

+ (_Bool)isShowing;
+ (void)clearDelegate:(id)arg1;
+ (void)showAllWaitingAlertView;
@property(nonatomic) _Bool isWaitingToShow; // @synthesize isWaitingToShow=_isWaitingToShow;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) id delegate;
- (void)setTitle:(id)arg1;
@property(nonatomic) int tag;
- (void)showWithOnClickHandler:(CDUnknownBlockType)arg1 onDismissHandler:(CDUnknownBlockType)arg2;
- (void)show;
- (void)dealloc;
- (id)initWithSubtitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

@end

