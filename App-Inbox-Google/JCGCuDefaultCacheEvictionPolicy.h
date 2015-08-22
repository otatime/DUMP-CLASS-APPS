//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusSyncClientCacheEvictionPolicy.h"

@class NSString;

@interface JCGCuDefaultCacheEvictionPolicy : NSObject <ComGoogleCumulusSyncClientCacheEvictionPolicy>
{
    id <ComGoogleCumulusSyncClientCachedObjectOracle> foregroundCachedObjectOracle_;
    id <ComGoogleCumulusSyncClientCachedObjectOracle> backgroundCachedObjectOracle_;
    id <ComGoogleCumulusSyncClientMemoryObjectCache> memoryCache_;
    BOOL storeEnabled_;
}

+ (void)initialize;
- (void)dealloc;
- (void)considerSlicingObjectWithComGoogleCumulusSyncClientDefaultObjectManager_CachedObject:(id)arg1;
- (void)updateEvictionStatusWithNSString:(id)arg1;
- (BOOL)shouldTombstoneWithComGoogleCumulusApiTypeObjectReader:(id)arg1;
- (void)releasedObjectWithComGoogleCumulusApiTypeObjectReader:(id)arg1;
- (void)storedObjectWithComGoogleCumulusApiTypeObjectReader:(id)arg1;
- (id)initWithComGoogleCumulusSyncClientMemoryObjectCache:(id)arg1 withComGoogleCumulusSyncClientCachedObjectOracle:(id)arg2 withComGoogleCumulusSyncClientCachedObjectOracle:(id)arg3 withComGoogleCumulusCommonUtilEventBus:(id)arg4 withComGoogleCumulusCommonUtilEventBus:(id)arg5 withComGoogleCumulusCommonUtilEventBus:(id)arg6 withComGoogleCumulusCommonUtilEventBus:(id)arg7 withBoolean:(BOOL)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
