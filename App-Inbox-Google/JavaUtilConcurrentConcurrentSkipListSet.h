//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilAbstractSet.h"

#import "JavaIoSerializable.h"
#import "JavaUtilNavigableSet.h"
#import "NSCopying.h"

@class NSString;

@interface JavaUtilConcurrentConcurrentSkipListSet : JavaUtilAbstractSet <JavaUtilNavigableSet, NSCopying, JavaIoSerializable>
{
    id <JavaUtilConcurrentConcurrentNavigableMap> m_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (void)setMapWithJavaUtilConcurrentConcurrentNavigableMap:(id)arg1;
- (id)descendingSet;
- (id)tailSetWithId:(id)arg1;
- (id)headSetWithId:(id)arg1;
- (id)subSetWithId:(id)arg1 withId:(id)arg2;
- (id)tailSetWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id)headSetWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id)subSetWithId:(id)arg1 withBoolean:(BOOL)arg2 withId:(id)arg3 withBoolean:(BOOL)arg4;
- (id)last;
- (id)first;
- (id)comparator;
- (id)pollLast;
- (id)pollFirst;
- (id)higherWithId:(id)arg1;
- (id)ceilingWithId:(id)arg1;
- (id)floorWithId:(id)arg1;
- (id)lowerWithId:(id)arg1;
- (BOOL)removeAllWithJavaUtilCollection:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)descendingIterator;
- (id)iterator;
- (void)clear;
- (BOOL)removeWithId:(id)arg1;
- (BOOL)addWithId:(id)arg1;
- (BOOL)containsWithId:(id)arg1;
- (BOOL)isEmpty;
- (int)size;
- (id)clone;
- (id)initWithJavaUtilConcurrentConcurrentNavigableMap:(id)arg1;
- (id)initWithJavaUtilSortedSet:(id)arg1;
- (id)initWithJavaUtilCollection:(id)arg1;
- (id)initWithJavaUtilComparator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
