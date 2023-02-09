//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ZXBitMatrix, ZXResultPoint;

@interface ZXPDF417BoundingBox : NSObject
{
    int _minX;	// 8 = 0x8
    int _maxX;	// 12 = 0xc
    int _minY;	// 16 = 0x10
    int _maxY;	// 20 = 0x14
    ZXResultPoint *_topLeft;	// 24 = 0x18
    ZXResultPoint *_topRight;	// 32 = 0x20
    ZXResultPoint *_bottomLeft;	// 40 = 0x28
    ZXResultPoint *_bottomRight;	// 48 = 0x30
    ZXBitMatrix *_image;	// 56 = 0x38
}

+ (id)mergeLeftBox:(id)arg1 rightBox:(id)arg2;
@property(retain, nonatomic) ZXBitMatrix *image; // @synthesize image=_image;
@property(retain, nonatomic) ZXResultPoint *bottomRight; // @synthesize bottomRight=_bottomRight;
@property(readonly, nonatomic) ZXResultPoint *bottomLeft; // @synthesize bottomLeft=_bottomLeft;
@property(retain, nonatomic) ZXResultPoint *topRight; // @synthesize topRight=_topRight;
@property(readonly, nonatomic) ZXResultPoint *topLeft; // @synthesize topLeft=_topLeft;
@property(nonatomic) int maxY; // @synthesize maxY=_maxY;
@property(nonatomic) int minY; // @synthesize minY=_minY;
@property(nonatomic) int maxX; // @synthesize maxX=_maxX;
@property(nonatomic) int minX; // @synthesize minX=_minX;
- (void).cxx_destruct;
- (void)calculateMinMaxValues;
- (id)addMissingRows:(int)arg1 missingEndRows:(int)arg2 isLeft:(_Bool)arg3;
- (id)initWithBoundingBox:(id)arg1;
- (id)initWithImage:(id)arg1 topLeft:(id)arg2 bottomLeft:(id)arg3 topRight:(id)arg4 bottomRight:(id)arg5;

@end
