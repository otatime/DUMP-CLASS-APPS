//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractNavigableMap.h"

@interface ComGoogleCommonCollectMaps_FilteredEntryNavigableMap : ComGoogleCommonCollectAbstractNavigableMap
{
    id <JavaUtilNavigableMap> unfiltered_;
    id <ComGoogleCommonBasePredicate> entryPredicate_;
    id <JavaUtilMap> filteredDelegate_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_removeWithId__params;
+ (id)__annotations_containsKeyWithId__params;
+ (id)__annotations_getWithId__params;
+ (id)__annotations_getWithId_;
- (void)dealloc;
- (id)tailMapWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id)headMapWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id)subMapWithId:(id)arg1 withBoolean:(BOOL)arg2 withId:(id)arg3 withBoolean:(BOOL)arg4;
- (id)descendingMap;
- (id)pollLastEntry;
- (id)pollFirstEntry;
- (id)entrySet;
- (void)clear;
- (void)putAllWithJavaUtilMap:(id)arg1;
- (id)removeWithId:(id)arg1;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (BOOL)containsKeyWithId:(id)arg1;
- (id)getWithId:(id)arg1;
- (BOOL)isEmpty;
- (int)size;
- (id)descendingEntryIterator;
- (id)entryIterator;
- (id)values;
- (id)navigableKeySet;
- (id)comparator;
- (id)initWithJavaUtilNavigableMap:(id)arg1 withComGoogleCommonBasePredicate:(id)arg2;

@end

