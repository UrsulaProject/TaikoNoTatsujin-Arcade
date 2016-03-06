//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ZXReader.h"

@class NSString, ZXMaxiCodeDecoder;

@interface ZXMaxiCodeReader : NSObject <ZXReader>
{
    ZXMaxiCodeDecoder *_decoder;
}

@property(retain, nonatomic) ZXMaxiCodeDecoder *decoder; // @synthesize decoder=_decoder;
- (void).cxx_destruct;
- (id)extractPureBits:(id)arg1;
- (void)reset;
- (id)decode:(id)arg1 hints:(id)arg2 error:(id *)arg3;
- (id)decode:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

