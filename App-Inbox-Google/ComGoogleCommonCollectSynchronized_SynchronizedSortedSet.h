//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectSynchronized_SynchronizedSet.h"

#import "JavaUtilSortedSet.h"

@class NSString;

@interface ComGoogleCommonCollectSynchronized_SynchronizedSortedSet : ComGoogleCommonCollectSynchronized_SynchronizedSet <JavaUtilSortedSet>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithJavaUtilSortedSet_withId__params;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)last;
- (id)first;
- (id)tailSetWithId:(id)arg1;
- (id)headSetWithId:(id)arg1;
- (id)subSetWithId:(id)arg1 withId:(id)arg2;
- (id)comparator;
- (id)delegate;
- (id)initWithJavaUtilSortedSet:(id)arg1 withId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
