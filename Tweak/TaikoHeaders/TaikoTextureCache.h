//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TaikoCache.h"

@interface TaikoTextureCache : TaikoCache
{
}

+ (id)textureCacheWithType:(unsigned int)arg1 maxEntry:(unsigned long long)arg2;
- (struct _AGTEXTUREFRAMEGROUP *)tryToGetTextureWithObject:(id)arg1;
- (void)dealloc;
- (id)initWithMaxEntry:(unsigned long long)arg1 textureWidth:(unsigned int)arg2 textureHeight:(unsigned int)arg3 groupName:(const char *)arg4 groupNameForiPhone2x:(const char *)arg5;

@end
