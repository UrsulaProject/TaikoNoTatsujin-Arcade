//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ZXDimensions : NSObject
{
    int _minCols;
    int _maxCols;
    int _minRows;
    int _maxRows;
}

@property(nonatomic) int maxRows; // @synthesize maxRows=_maxRows;
@property(nonatomic) int minRows; // @synthesize minRows=_minRows;
@property(nonatomic) int maxCols; // @synthesize maxCols=_maxCols;
@property(nonatomic) int minCols; // @synthesize minCols=_minCols;
- (id)initWithMinCols:(int)arg1 maxCols:(int)arg2 minRows:(int)arg3 maxRows:(int)arg4;

@end
