//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ZXDimensions : NSObject
{
    int _minCols;	// 8 = 0x8
    int _maxCols;	// 12 = 0xc
    int _minRows;	// 16 = 0x10
    int _maxRows;	// 20 = 0x14
}

@property(nonatomic) int maxRows; // @synthesize maxRows=_maxRows;
@property(nonatomic) int minRows; // @synthesize minRows=_minRows;
@property(nonatomic) int maxCols; // @synthesize maxCols=_maxCols;
@property(nonatomic) int minCols; // @synthesize minCols=_minCols;
- (id)initWithMinCols:(int)arg1 maxCols:(int)arg2 minRows:(int)arg3 maxRows:(int)arg4;

@end

