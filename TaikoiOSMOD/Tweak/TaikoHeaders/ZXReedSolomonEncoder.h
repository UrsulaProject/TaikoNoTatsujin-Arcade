//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, ZXGenericGF;

@interface ZXReedSolomonEncoder : NSObject
{
    NSMutableArray *_cachedGenerators;
    ZXGenericGF *_field;
}

@property(retain, nonatomic) ZXGenericGF *field; // @synthesize field=_field;
@property(retain, nonatomic) NSMutableArray *cachedGenerators; // @synthesize cachedGenerators=_cachedGenerators;
- (void).cxx_destruct;
- (void)encode:(int *)arg1 toEncodeLen:(int)arg2 ecBytes:(int)arg3;
- (id)buildGenerator:(int)arg1;
- (id)initWithField:(id)arg1;

@end

