//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class BGAnimation, BGFunction, BGPath, NSDictionary, NSMutableArray, NSString;

@interface BGAnimationFactory : NSObject <NSXMLParserDelegate>
{
    BGAnimation *animation_;
    _Bool inAnimation_;
    _Bool inVariable_;
    _Bool inPath_;
    _Bool inEdge_;
    _Bool inFunction_;
    NSDictionary *animationAttributes_;
    NSDictionary *variableAttributes_;
    NSDictionary *pathAttributes_;
    NSDictionary *edgeAttributes_;
    NSDictionary *functionAttributes_;
    NSDictionary *indicatorAttributes_;
    BGPath *path_;
    NSMutableArray *edges_;
    BGFunction *function_;
    NSMutableArray *indicators_;
}

+ (id)animationForFile:(id)arg1;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
