//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectSets_FilteredSet.h"

#import "JavaUtilSortedSet.h"

@class NSString;

@interface ComGoogleCommonCollectSets_FilteredSortedSet : ComGoogleCommonCollectSets_FilteredSet <JavaUtilSortedSet>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)last;
- (id)first;
- (id)tailSetWithId:(id)arg1;
- (id)headSetWithId:(id)arg1;
- (id)subSetWithId:(id)arg1 withId:(id)arg2;
- (id)comparator;
- (id)initWithJavaUtilSortedSet:(id)arg1 withComGoogleCommonBasePredicate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
