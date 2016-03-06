//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZXLuminanceSource.h"

@interface ZXInvertedLuminanceSource : ZXLuminanceSource
{
    ZXLuminanceSource *_delegate;
}

@property(nonatomic) __weak ZXLuminanceSource *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)rotateCounterClockwise45;
- (id)rotateCounterClockwise;
- (id)invert;
- (_Bool)rotateSupported;
- (id)crop:(int)arg1 top:(int)arg2 width:(int)arg3 height:(int)arg4;
- (_Bool)cropSupported;
- (char *)matrix;
- (char *)row:(int)arg1;
- (id)initWithDelegate:(id)arg1;

@end
