//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, ZXPDF417BoundingBox;

@interface ZXPDF417DetectionResultColumn : NSObject
{
    ZXPDF417BoundingBox *_boundingBox;	// 8 = 0x8
    NSMutableArray *_codewords;	// 16 = 0x10
}

@property(retain, nonatomic) NSMutableArray *codewords; // @synthesize codewords=_codewords;
@property(retain, nonatomic) ZXPDF417BoundingBox *boundingBox; // @synthesize boundingBox=_boundingBox;
- (void).cxx_destruct;
- (id)description;
- (id)codeword:(int)arg1;
- (void)setCodeword:(int)arg1 codeword:(id)arg2;
- (int)codewordIndexToImageRow:(int)arg1;
- (int)imageRowToCodewordIndex:(int)arg1;
- (id)codewordNearby:(int)arg1;
- (id)initWithBoundingBox:(id)arg1;

@end
