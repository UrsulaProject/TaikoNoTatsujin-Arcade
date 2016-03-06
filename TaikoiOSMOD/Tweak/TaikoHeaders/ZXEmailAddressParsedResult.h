//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZXParsedResult.h"

@class NSString;

@interface ZXEmailAddressParsedResult : ZXParsedResult
{
    NSString *_body;
    NSString *_emailAddress;
    NSString *_mailtoURI;
    NSString *_subject;
}

+ (id)emailAddressParsedResultWithEmailAddress:(id)arg1 subject:(id)arg2 body:(id)arg3 mailtoURI:(id)arg4;
@property(readonly, copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(readonly, copy, nonatomic) NSString *mailtoURI; // @synthesize mailtoURI=_mailtoURI;
@property(readonly, copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
- (void).cxx_destruct;
- (id)displayResult;
- (id)initWithEmailAddress:(id)arg1 subject:(id)arg2 body:(id)arg3 mailtoURI:(id)arg4;

@end

