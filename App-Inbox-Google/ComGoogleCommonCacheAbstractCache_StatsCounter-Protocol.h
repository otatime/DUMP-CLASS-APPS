//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleCommonCacheCacheStats;

@protocol ComGoogleCommonCacheAbstractCache_StatsCounter <NSObject, JavaObject>
- (ComGoogleCommonCacheCacheStats *)snapshot;
- (void)recordEviction;
- (void)recordLoadExceptionWithLong:(long long)arg1;
- (void)recordLoadSuccessWithLong:(long long)arg1;
- (void)recordMissesWithInt:(int)arg1;
- (void)recordHitsWithInt:(int)arg1;
@end

