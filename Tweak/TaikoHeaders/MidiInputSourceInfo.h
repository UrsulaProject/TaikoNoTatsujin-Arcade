//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MidiInputSourceInfo : NSObject
{
    int _uniqueID;	// 8 = 0x8
    NSString *_manufacturer;	// 16 = 0x10
    NSString *_model;	// 24 = 0x18
}

@property(nonatomic) int uniqueID; // @synthesize uniqueID=_uniqueID;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
- (void)dealloc;
- (id)init;

@end
