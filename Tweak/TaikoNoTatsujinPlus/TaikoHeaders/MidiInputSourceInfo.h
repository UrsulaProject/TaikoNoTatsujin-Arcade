//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MidiInputSourceInfo : NSObject
{
    NSString *_manufacturer;
    NSString *_model;
    long _uniqueID;
}

@property(nonatomic) long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
- (void)dealloc;
- (id)init;

@end
