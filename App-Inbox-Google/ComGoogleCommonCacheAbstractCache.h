//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonCacheCache.h"

@class NSString;

@interface ComGoogleCommonCacheAbstractCache : NSObject <ComGoogleCommonCacheCache>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)asMap;
- (id)stats;
- (void)invalidateAll;
- (void)invalidateAllWithJavaLangIterable:(id)arg1;
- (void)invalidateWithId:(id)arg1;
- (long long)size;
- (void)cleanUp;
- (void)putAllWithJavaUtilMap:(id)arg1;
- (void)putWithId:(id)arg1 withId:(id)arg2;
- (id)getAllPresentWithJavaLangIterable:(id)arg1;
- (id)getWithId:(id)arg1 withJavaUtilConcurrentCallable:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

