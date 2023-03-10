//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ZXReader-Protocol.h"

@class NSString;

@interface ZXOneDReader : NSObject <ZXReader>
{
}

+ (int)patternMatchVariance:(int *)arg1 countersSize:(int)arg2 pattern:(int *)arg3 maxIndividualVariance:(int)arg4;
+ (_Bool)recordPatternInReverse:(id)arg1 start:(int)arg2 counters:(int *)arg3 countersSize:(int)arg4;
+ (_Bool)recordPattern:(id)arg1 start:(int)arg2 counters:(int *)arg3 countersSize:(int)arg4;
- (id)decodeRow:(int)arg1 row:(id)arg2 hints:(id)arg3 error:(id *)arg4;
- (id)doDecode:(id)arg1 hints:(id)arg2 error:(id *)arg3;
- (void)reset;
- (id)decode:(id)arg1 hints:(id)arg2 error:(id *)arg3;
- (id)decode:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

