//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ZXPDF417ResultMetadata : NSObject
{
    _Bool _lastSegment;	// 8 = 0x8
    int _segmentIndex;	// 12 = 0xc
    NSString *_fileId;	// 16 = 0x10
    NSArray *_optionalData;	// 24 = 0x18
}

@property(nonatomic) _Bool lastSegment; // @synthesize lastSegment=_lastSegment;
@property(retain, nonatomic) NSArray *optionalData; // @synthesize optionalData=_optionalData;
@property(copy, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(nonatomic) int segmentIndex; // @synthesize segmentIndex=_segmentIndex;
- (void).cxx_destruct;

@end
