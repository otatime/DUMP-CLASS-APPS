//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCacheForwardingCache.h"

#import "JavaIoSerializable.h"

@class ComGoogleCommonBaseEquivalence, ComGoogleCommonBaseTicker, ComGoogleCommonCacheCacheLoader, ComGoogleCommonCacheLocalCache_StrengthEnum, NSString;

@interface ComGoogleCommonCacheLocalCache_ManualSerializationProxy : ComGoogleCommonCacheForwardingCache <JavaIoSerializable>
{
    ComGoogleCommonCacheLocalCache_StrengthEnum *keyStrength_;
    ComGoogleCommonCacheLocalCache_StrengthEnum *valueStrength_;
    ComGoogleCommonBaseEquivalence *keyEquivalence_;
    ComGoogleCommonBaseEquivalence *valueEquivalence_;
    long long expireAfterWriteNanos_;
    long long expireAfterAccessNanos_;
    long long maxWeight_;
    id <ComGoogleCommonCacheWeigher> weigher_;
    int concurrencyLevel_;
    id <ComGoogleCommonCacheRemovalListener> removalListener_;
    ComGoogleCommonBaseTicker *ticker_;
    ComGoogleCommonCacheCacheLoader *loader_;
    id <ComGoogleCommonCacheCache> delegate_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)delegate;
- (id)readResolve;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (id)recreateCacheBuilder;
- (id)initWithComGoogleCommonCacheLocalCache_StrengthEnum:(id)arg1 withComGoogleCommonCacheLocalCache_StrengthEnum:(id)arg2 withComGoogleCommonBaseEquivalence:(id)arg3 withComGoogleCommonBaseEquivalence:(id)arg4 withLong:(long long)arg5 withLong:(long long)arg6 withLong:(long long)arg7 withComGoogleCommonCacheWeigher:(id)arg8 withInt:(int)arg9 withComGoogleCommonCacheRemovalListener:(id)arg10 withComGoogleCommonBaseTicker:(id)arg11 withComGoogleCommonCacheCacheLoader:(id)arg12;
- (id)initWithComGoogleCommonCacheLocalCache:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

