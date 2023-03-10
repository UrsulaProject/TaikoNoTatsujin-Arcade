//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OACallDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, OAConsumer, OAToken;
@protocol OATokenManagerDelegate;

@interface OATokenManager : NSObject <OACallDelegate>
{
    OAConsumer *consumer;	// 8 = 0x8
    OAToken *acToken;	// 16 = 0x10
    OAToken *reqToken;	// 24 = 0x18
    OAToken *initialToken;	// 32 = 0x20
    NSString *authorizedTokenKey;	// 40 = 0x28
    NSString *oauthBase;	// 48 = 0x30
    NSString *realm;	// 56 = 0x38
    NSString *callback;	// 64 = 0x40
    NSObject<OATokenManagerDelegate> *delegate;	// 72 = 0x48
    NSMutableArray *calls;	// 80 = 0x50
    NSMutableArray *selectors;	// 88 = 0x58
    NSMutableDictionary *delegates;	// 96 = 0x60
    _Bool isDispatching;	// 104 = 0x68
}

- (void)fetchData:(id)arg1 finished:(SEL)arg2;
- (void)fetchData:(id)arg1 parameters:(id)arg2 files:(id)arg3 finished:(SEL)arg4;
- (void)fetchData:(id)arg1 method:(id)arg2 parameters:(id)arg3 finished:(SEL)arg4;
- (void)fetchData:(id)arg1 method:(id)arg2 parameters:(id)arg3 files:(id)arg4 finished:(SEL)arg5;
- (void)fetchData:(id)arg1 method:(id)arg2 parameters:(id)arg3 files:(id)arg4 finished:(SEL)arg5 delegate:(id)arg6;
- (void)dispatch;
- (void)performCall:(id)arg1;
- (void)deleteSavedRequestToken;
- (void)setAccessToken:(id)arg1;
- (void)renewToken;
- (void)accessTokenReceived:(id)arg1 body:(id)arg2;
- (void)exchangeToken;
- (void)requestTokenReceived:(id)arg1 body:(id)arg2;
- (void)requestToken;
- (SEL)getSelector:(id)arg1;
- (void)dequeue:(id)arg1;
- (void)enqueue:(id)arg1 selector:(SEL)arg2;
- (id)queue;
- (void)callFinished:(id)arg1 body:(id)arg2;
- (void)call:(id)arg1 failedWithError:(id)arg2;
- (void)call:(id)arg1 failedWithProblem:(id)arg2;
- (void)authorizedToken:(id)arg1;
- (void)dealloc;
- (id)initWithConsumer:(id)arg1 token:(id)arg2 oauthBase:(id)arg3 realm:(id)arg4 callback:(id)arg5 delegate:(id)arg6;
- (id)init;

@end

