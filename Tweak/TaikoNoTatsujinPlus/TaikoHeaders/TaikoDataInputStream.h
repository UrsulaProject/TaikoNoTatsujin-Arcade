//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaikoInputStream.h"

@class NSData;

@interface TaikoDataInputStream : TaikoInputStream
{
    NSData *data_;
    long pointer_;
}

- (unsigned long)size;
- (unsigned long)read:(void *)arg1 size:(unsigned long)arg2 count:(unsigned long)arg3;
- (int)seek:(long)arg1 whence:(int)arg2;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

