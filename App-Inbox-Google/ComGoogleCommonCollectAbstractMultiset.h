//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilAbstractCollection.h"

#import "ComGoogleCommonCollectMultiset.h"

@class NSString;

@interface ComGoogleCommonCollectAbstractMultiset : JavaUtilAbstractCollection <ComGoogleCommonCollectMultiset>
{
    id <JavaUtilSet> elementSet_;
    id <JavaUtilSet> entrySet_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_equalsWithId__params;
+ (id)__annotations_setCountWithId_withInt_withInt__params;
+ (id)__annotations_setCountWithId_withInt__params;
+ (id)__annotations_removeWithId_withInt__params;
+ (id)__annotations_removeWithId__params;
+ (id)__annotations_addWithId_withInt__params;
+ (id)__annotations_addWithId__params;
+ (id)__annotations_countWithId__params;
+ (id)__annotations_containsWithId__params;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)init;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)createEntrySet;
- (id)entrySet;
- (int)distinctElements;
- (id)entryIterator;
- (id)createElementSet;
- (id)elementSet;
- (void)clear;
- (BOOL)retainAllWithJavaUtilCollection:(id)arg1;
- (BOOL)removeAllWithJavaUtilCollection:(id)arg1;
- (BOOL)addAllWithJavaUtilCollection:(id)arg1;
- (BOOL)setCountWithId:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)setCountWithId:(id)arg1 withInt:(int)arg2;
- (int)removeWithId:(id)arg1 withInt:(int)arg2;
- (BOOL)removeWithId:(id)arg1;
- (int)addWithId:(id)arg1 withInt:(int)arg2;
- (BOOL)addWithId:(id)arg1;
- (int)countWithId:(id)arg1;
- (id)iterator;
- (BOOL)containsWithId:(id)arg1;
- (BOOL)isEmpty;
- (int)size;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
