//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilCollections_CheckedCollection.h"

#import "JavaUtilList.h"

@class NSString;

@interface JavaUtilCollections_CheckedList : JavaUtilCollections_CheckedCollection <JavaUtilList>
{
    id <JavaUtilList> l_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)dealloc;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)subListWithInt:(int)arg1 withInt:(int)arg2;
- (id)listIteratorWithInt:(int)arg1;
- (id)listIterator;
- (int)lastIndexOfWithId:(id)arg1;
- (int)indexOfWithId:(id)arg1;
- (id)removeWithInt:(int)arg1;
- (void)addWithInt:(int)arg1 withId:(id)arg2;
- (id)setWithInt:(int)arg1 withId:(id)arg2;
- (id)getWithInt:(int)arg1;
- (BOOL)addAllWithInt:(int)arg1 withJavaUtilCollection:(id)arg2;
- (id)initWithJavaUtilList:(id)arg1 withIOSClass:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
