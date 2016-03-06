//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZXParsedResult.h"

@class NSString;

@interface ZXURIParsedResult : ZXParsedResult
{
    NSString *_uri;
    NSString *_title;
}

+ (id)uriParsedResultWithUri:(id)arg1 title:(id)arg2;
+ (void)initialize;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;
- (_Bool)isColonFollowedByPortNumber:(id)arg1 protocolEnd:(int)arg2;
- (id)massageURI:(id)arg1;
- (id)displayResult;
- (_Bool)possiblyMaliciousURI;
- (id)initWithUri:(id)arg1 title:(id)arg2;

@end

