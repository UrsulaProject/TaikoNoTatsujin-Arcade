//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ZXBitMatrix : NSObject
{
    int _width;
    int _height;
    int _rowSize;
    int _bitsSize;
    int *_bits;
}

+ (id)bitMatrixWithWidth:(int)arg1 height:(int)arg2;
+ (id)bitMatrixWithDimension:(int)arg1;
@property(nonatomic) int bitsSize; // @synthesize bitsSize=_bitsSize;
@property(nonatomic) int rowSize; // @synthesize rowSize=_rowSize;
@property(readonly, nonatomic) int *bits; // @synthesize bits=_bits;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
@property(readonly, nonatomic) int width; // @synthesize width=_width;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)bottomRightOnBit;
- (id)topLeftOnBit;
- (id)enclosingRectangle;
- (void)setRowAtY:(int)arg1 row:(id)arg2;
- (id)rowAtY:(int)arg1 row:(id)arg2;
- (void)setRegionAtLeft:(int)arg1 top:(int)arg2 width:(int)arg3 height:(int)arg4;
- (void)clear;
- (void)flipX:(int)arg1 y:(int)arg2;
- (void)setX:(int)arg1 y:(int)arg2;
- (_Bool)getX:(int)arg1 y:(int)arg2;
- (void)dealloc;
- (id)initWithWidth:(int)arg1 height:(int)arg2;
- (id)initWithDimension:(int)arg1;

@end

