//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface ZXQRCodeDataBlock : NSObject
{
    int _numDataCodewords;
    NSMutableArray *_codewords;
}

+ (id)dataBlocks:(id)arg1 version:(id)arg2 ecLevel:(id)arg3;
@property(readonly, nonatomic) int numDataCodewords; // @synthesize numDataCodewords=_numDataCodewords;
@property(readonly, nonatomic) NSMutableArray *codewords; // @synthesize codewords=_codewords;
- (void).cxx_destruct;
- (id)initWithNumDataCodewords:(int)arg1 codewords:(id)arg2;

@end
