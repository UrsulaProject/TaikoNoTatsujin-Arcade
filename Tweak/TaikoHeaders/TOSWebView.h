//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TOSBaseDlg.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIWebView;

@interface TOSWebView : TOSBaseDlg <UIWebViewDelegate>
{
    UIWebView *webview;	// 352 = 0x160
    UIActivityIndicatorView *indicator;	// 360 = 0x168
}

+ (CDStruct_08b27754 *)getDefaultLayout;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)BtnActionReturn:(id)arg1;
- (void)dealloc;
- (void)requestURL:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

