//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilAbstractCollection.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection : JavaUtilAbstractCollection
{
    id key_;
    id <JavaUtilCollection> delegate_;
    ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *ancestor_;
    id <JavaUtilCollection> ancestorDelegate_;
    ComGoogleCommonCollectAbstractMapBasedMultimap *this$0_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_equalsWithId__params;
+ (id)__annotations_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withId_withJavaUtilCollection_withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection__params;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)__javaClone;
- (void)dealloc;
- (BOOL)retainAllWithJavaUtilCollection:(id)arg1;
- (BOOL)removeAllWithJavaUtilCollection:(id)arg1;
- (BOOL)removeWithId:(id)arg1;
- (void)clear;
- (BOOL)containsAllWithJavaUtilCollection:(id)arg1;
- (BOOL)containsWithId:(id)arg1;
- (BOOL)addAllWithJavaUtilCollection:(id)arg1;
- (id)getAncestor;
- (BOOL)addWithId:(id)arg1;
- (id)iterator;
- (id)getDelegate;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)size;
- (void)addToMap;
- (id)getKey;
- (void)removeIfEmpty;
- (void)refreshIfEmpty;
- (id)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(id)arg1 withId:(id)arg2 withJavaUtilCollection:(id)arg3 withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection:(id)arg4;

@end

