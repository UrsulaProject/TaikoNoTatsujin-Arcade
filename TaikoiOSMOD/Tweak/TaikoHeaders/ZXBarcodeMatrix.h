//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface ZXBarcodeMatrix : NSObject
{
    int _height;
    int _width;
    int _currentRowIndex;
    NSArray *_rowMatrix;
}

@property(retain, nonatomic) NSArray *rowMatrix; // @synthesize rowMatrix=_rowMatrix;
@property(nonatomic) int currentRowIndex; // @synthesize currentRowIndex=_currentRowIndex;
@property(readonly, nonatomic) int width; // @synthesize width=_width;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
- (void).cxx_destruct;
- (char **)scaledMatrixWithHeight:(int *)arg1 width:(int *)arg2 xScale:(int)arg3 yScale:(int)arg4;
- (char **)scaledMatrixWithHeight:(int *)arg1 width:(int *)arg2 scale:(int)arg3;
- (char **)matrixWithHeight:(int *)arg1 width:(int *)arg2;
- (id)currentRow;
- (void)startRow;
- (void)setMatrixX:(int)arg1 y:(int)arg2 black:(_Bool)arg3;
- (void)setX:(int)arg1 y:(int)arg2 value:(BOOL)arg3;
- (id)initWithHeight:(int)arg1 width:(int)arg2;

@end
