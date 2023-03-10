//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "BGSNSConnection-Protocol.h"

@class NSString;

@interface BGSNSHTTPOperation : NSOperation <BGSNSConnection>
{
    unsigned long long interfaceNumber_;	// 24 = 0x18
    id object_;	// 32 = 0x20
    id delegate_;	// 40 = 0x28
    long long expectedContentLength_;	// 48 = 0x30
    long long downloadedSize_;	// 56 = 0x38
    unsigned long long bgTask_;	// 64 = 0x40
}

@property unsigned long long bgTask; // @synthesize bgTask=bgTask_;
@property long long downloadedSize; // @synthesize downloadedSize=downloadedSize_;
@property long long expectedContentLength; // @synthesize expectedContentLength=expectedContentLength_;
@property(nonatomic) id delegate; // @synthesize delegate=delegate_;
@property(retain, nonatomic) id object; // @synthesize object=object_;
@property(nonatomic) unsigned long long interfaceNumber; // @synthesize interfaceNumber=interfaceNumber_;
- (void)main;
- (void)SNSInterfaceNumber:(unsigned long long)arg1 didFailWithError:(id)arg2 object:(id)arg3;
- (void)failWithDictionary:(id)arg1;
- (void)SNSInterfaceNumber:(unsigned long long)arg1 didFinishWithCode:(id)arg2 entry:(id)arg3 object:(id)arg4;
- (void)finishWithDictionary:(id)arg1;
- (void)dealloc;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

