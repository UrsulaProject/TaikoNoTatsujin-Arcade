//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZXLuminanceSource.h"

@interface ZXCGImageLuminanceSource : ZXLuminanceSource
{
    struct CGImage *_image;	// 8 = 0x8
    char *_data;	// 16 = 0x10
    unsigned long long _left;	// 24 = 0x18
    unsigned long long _top;	// 32 = 0x20
}

+ (struct CGImage *)createImageFromBuffer:(struct __CVBuffer *)arg1 left:(unsigned long long)arg2 top:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5;
+ (struct CGImage *)createImageFromBuffer:(struct __CVBuffer *)arg1;
- (id)rotateCounterClockwise;
- (_Bool)rotateSupported;
- (void)initializeWithImage:(struct CGImage *)arg1 left:(unsigned long long)arg2 top:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5;
- (char *)matrix;
- (char *)row:(int)arg1;
- (void)dealloc;
- (struct CGImage *)image;
- (id)initWithBuffer:(struct __CVBuffer *)arg1;
- (id)initWithBuffer:(struct __CVBuffer *)arg1 left:(unsigned long long)arg2 top:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 left:(unsigned long long)arg2 top:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5;
- (id)initWithZXImage:(id)arg1;
- (id)initWithZXImage:(id)arg1 left:(unsigned long long)arg2 top:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5;

@end

