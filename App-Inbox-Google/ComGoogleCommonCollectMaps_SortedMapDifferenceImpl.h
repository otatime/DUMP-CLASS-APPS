//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectMaps_MapDifferenceImpl.h"

#import "ComGoogleCommonCollectSortedMapDifference.h"

@class NSString;

@interface ComGoogleCommonCollectMaps_SortedMapDifferenceImpl : ComGoogleCommonCollectMaps_MapDifferenceImpl <ComGoogleCommonCollectSortedMapDifference>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)entriesOnlyOnRight;
- (id)entriesOnlyOnLeft;
- (id)entriesInCommon;
- (id)entriesDiffering;
- (id)initWithJavaUtilSortedMap:(id)arg1 withJavaUtilSortedMap:(id)arg2 withJavaUtilSortedMap:(id)arg3 withJavaUtilSortedMap:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
