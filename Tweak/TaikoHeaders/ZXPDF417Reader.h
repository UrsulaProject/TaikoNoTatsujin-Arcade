//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ZXMultipleBarcodeReader-Protocol.h"
#import "ZXReader-Protocol.h"

@class NSString;

@interface ZXPDF417Reader : NSObject <ZXReader, ZXMultipleBarcodeReader>
{
}

- (void)reset;
- (int)minCodewordWidth:(id)arg1;
- (int)maxCodewordWidth:(id)arg1;
- (int)minWidth:(id)arg1 p2:(id)arg2;
- (int)maxWidth:(id)arg1 p2:(id)arg2;
- (id)decode:(id)arg1 hints:(id)arg2 multiple:(_Bool)arg3 error:(id *)arg4;
- (id)decodeMultiple:(id)arg1 hints:(id)arg2 error:(id *)arg3;
- (id)decodeMultiple:(id)arg1 error:(id *)arg2;
- (id)decode:(id)arg1 hints:(id)arg2 error:(id *)arg3;
- (id)decode:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

