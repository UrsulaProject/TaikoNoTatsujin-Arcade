//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ZXDataMatrixEncoder.h"

@class NSString;

@interface ZXASCIIEncoder : NSObject <ZXDataMatrixEncoder>
{
}

- (unsigned short)encodeASCIIDigits:(unsigned short)arg1 digit2:(unsigned short)arg2;
- (void)encode:(id)arg1;
- (int)encodingMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
