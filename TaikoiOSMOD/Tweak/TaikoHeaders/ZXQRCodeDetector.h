//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ZXBitMatrix;

@interface ZXQRCodeDetector : NSObject
{
    ZXBitMatrix *_image;
    id <ZXResultPointCallback> _resultPointCallback;
}

+ (int)computeDimension:(id)arg1 topRight:(id)arg2 bottomLeft:(id)arg3 moduleSize:(float)arg4 error:(id *)arg5;
+ (id)createTransform:(id)arg1 topRight:(id)arg2 bottomLeft:(id)arg3 alignmentPattern:(id)arg4 dimension:(int)arg5;
@property(nonatomic) __weak id <ZXResultPointCallback> resultPointCallback; // @synthesize resultPointCallback=_resultPointCallback;
@property(readonly, nonatomic) ZXBitMatrix *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)findAlignmentInRegion:(float)arg1 estAlignmentX:(int)arg2 estAlignmentY:(int)arg3 allowanceFactor:(float)arg4 error:(id *)arg5;
- (float)sizeOfBlackWhiteBlackRun:(int)arg1 fromY:(int)arg2 toX:(int)arg3 toY:(int)arg4;
- (float)sizeOfBlackWhiteBlackRunBothWays:(int)arg1 fromY:(int)arg2 toX:(int)arg3 toY:(int)arg4;
- (float)calculateModuleSizeOneWay:(id)arg1 otherPattern:(id)arg2;
- (float)calculateModuleSize:(id)arg1 topRight:(id)arg2 bottomLeft:(id)arg3;
- (id)sampleGrid:(id)arg1 transform:(id)arg2 dimension:(int)arg3 error:(id *)arg4;
- (id)processFinderPatternInfo:(id)arg1 error:(id *)arg2;
- (id)detect:(id)arg1 error:(id *)arg2;
- (id)detectWithError:(id *)arg1;
- (id)initWithImage:(id)arg1;

@end

