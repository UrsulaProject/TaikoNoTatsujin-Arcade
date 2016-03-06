//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class BGAnimationInfo, BGObjectInfo, NSDictionary, NSMutableDictionary, NSString;

@interface BGAnimationInfoFactory : NSObject <NSXMLParserDelegate>
{
    BGAnimationInfo *info_;
    NSString *name_;
    BGObjectInfo *object_;
    NSMutableDictionary *dict_;
    NSDictionary *animationAttributes_;
    NSDictionary *factorAttributes_;
    _Bool inScene_;
    _Bool inArray_;
    _Bool inObject_;
    _Bool inAnimation_;
    _Bool inAlign_;
    _Bool inFlag_;
    _Bool inFactor_;
}

+ (id)infoForFile:(id)arg1;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
