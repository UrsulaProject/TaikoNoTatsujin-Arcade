//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface ZXResult : NSObject
{
    int _length;	// 8 = 0x8
    int _barcodeFormat;	// 12 = 0xc
    NSString *_text;	// 16 = 0x10
    char *_rawBytes;	// 24 = 0x18
    NSMutableArray *_resultPoints;	// 32 = 0x20
    NSMutableDictionary *_resultMetadata;	// 40 = 0x28
    long long _timestamp;	// 48 = 0x30
}

+ (id)resultWithText:(id)arg1 rawBytes:(char *)arg2 length:(unsigned int)arg3 resultPoints:(id)arg4 format:(int)arg5 timestamp:(long long)arg6;
+ (id)resultWithText:(id)arg1 rawBytes:(char *)arg2 length:(unsigned int)arg3 resultPoints:(id)arg4 format:(int)arg5;
@property(readonly, nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSMutableDictionary *resultMetadata; // @synthesize resultMetadata=_resultMetadata;
@property(readonly, nonatomic) int barcodeFormat; // @synthesize barcodeFormat=_barcodeFormat;
@property(retain, nonatomic) NSMutableArray *resultPoints; // @synthesize resultPoints=_resultPoints;
@property(readonly, nonatomic) int length; // @synthesize length=_length;
@property(readonly, nonatomic) char *rawBytes; // @synthesize rawBytes=_rawBytes;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)description;
- (void)addResultPoints:(id)arg1;
- (void)putAllMetadata:(id)arg1;
- (void)putMetadata:(int)arg1 value:(id)arg2;
- (void)dealloc;
- (id)initWithText:(id)arg1 rawBytes:(char *)arg2 length:(unsigned int)arg3 resultPoints:(id)arg4 format:(int)arg5 timestamp:(long long)arg6;
- (id)initWithText:(id)arg1 rawBytes:(char *)arg2 length:(unsigned int)arg3 resultPoints:(id)arg4 format:(int)arg5;

@end
