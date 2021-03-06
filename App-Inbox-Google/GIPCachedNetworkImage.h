//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GIPNetworkImage.h"

@interface GIPCachedNetworkImage : GIPNetworkImage
{
    id <GIPCache> backingCache_;
}

+ (void)setDefaultCacheProvider:(id)arg1;
+ (id)defaultCacheProvider;
+ (void)gbt_authenticateRequest:(id)arg1 forCachedNetworkImage:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (id)imageCache;
- (void)setBackingCache:(id)arg1;
- (void)dealloc;
- (BOOL)gbt_cacheContainsImageWithURL:(id)arg1 maxSize:(struct CGSize)arg2;

@end

