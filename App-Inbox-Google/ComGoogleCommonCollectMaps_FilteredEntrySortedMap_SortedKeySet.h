//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectMaps_FilteredEntryMap_KeySet.h"

#import "JavaUtilSortedSet.h"

@class ComGoogleCommonCollectMaps_FilteredEntrySortedMap, NSString;

@interface ComGoogleCommonCollectMaps_FilteredEntrySortedMap_SortedKeySet : ComGoogleCommonCollectMaps_FilteredEntryMap_KeySet <JavaUtilSortedSet>
{
    ComGoogleCommonCollectMaps_FilteredEntrySortedMap *this$1_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)__javaClone;
- (id)initWithComGoogleCommonCollectMaps_FilteredEntrySortedMap:(id)arg1;
- (id)last;
- (id)first;
- (id)tailSetWithId:(id)arg1;
- (id)headSetWithId:(id)arg1;
- (id)subSetWithId:(id)arg1 withId:(id)arg2;
- (id)comparator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

