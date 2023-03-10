//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ZXBitSource : NSObject
{
    int _bitOffset;	// 8 = 0x8
    int _byteOffset;	// 12 = 0xc
    int _length;	// 16 = 0x10
    char *_bytes;	// 24 = 0x18
}

@property(nonatomic) int length; // @synthesize length=_length;
@property(nonatomic) char *bytes; // @synthesize bytes=_bytes;
@property(nonatomic) int byteOffset; // @synthesize byteOffset=_byteOffset;
@property(nonatomic) int bitOffset; // @synthesize bitOffset=_bitOffset;
- (int)available;
- (int)readBits:(int)arg1;
- (id)initWithBytes:(char *)arg1 length:(unsigned int)arg2;

@end

