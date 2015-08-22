//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectSynchronized_SynchronizedSortedSet.h"

#import "JavaUtilNavigableSet.h"

@class NSString;

@interface ComGoogleCommonCollectSynchronized_SynchronizedNavigableSet : ComGoogleCommonCollectSynchronized_SynchronizedSortedSet <JavaUtilNavigableSet>
{
    id <JavaUtilNavigableSet> descendingSet_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithJavaUtilNavigableSet_withId__params;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)tailSetWithId:(id)arg1;
- (id)subSetWithId:(id)arg1 withId:(id)arg2;
- (id)headSetWithId:(id)arg1;
- (id)tailSetWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id)subSetWithId:(id)arg1 withBoolean:(BOOL)arg2 withId:(id)arg3 withBoolean:(BOOL)arg4;
- (id)pollLast;
- (id)pollFirst;
- (id)lowerWithId:(id)arg1;
- (id)higherWithId:(id)arg1;
- (id)headSetWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id)floorWithId:(id)arg1;
- (id)descendingSet;
- (id)descendingIterator;
- (id)ceilingWithId:(id)arg1;
- (id)delegate;
- (id)initWithJavaUtilNavigableSet:(id)arg1 withId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
