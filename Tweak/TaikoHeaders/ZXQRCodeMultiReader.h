//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZXQRCodeReader.h"

#import "ZXMultipleBarcodeReader-Protocol.h"

@class NSString;

@interface ZXQRCodeMultiReader : ZXQRCodeReader <ZXMultipleBarcodeReader>
{
}

- (id)decodeMultiple:(id)arg1 hints:(id)arg2 error:(id *)arg3;
- (id)decodeMultiple:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

