//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ZXReedSolomonDecoder;

@interface ZXDataMatrixDecoder : NSObject
{
    ZXReedSolomonDecoder *_rsDecoder;
}

@property(retain, nonatomic) ZXReedSolomonDecoder *rsDecoder; // @synthesize rsDecoder=_rsDecoder;
- (void).cxx_destruct;
- (_Bool)correctErrors:(id)arg1 numDataCodewords:(int)arg2 error:(id *)arg3;
- (id)decodeMatrix:(id)arg1 error:(id *)arg2;
- (id)decode:(_Bool **)arg1 length:(unsigned int)arg2 error:(id *)arg3;
- (id)init;

@end
