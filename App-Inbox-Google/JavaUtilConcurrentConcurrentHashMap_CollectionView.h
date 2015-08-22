//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"
#import "JavaUtilCollection.h"

@class JavaUtilConcurrentConcurrentHashMap, NSString;

@interface JavaUtilConcurrentConcurrentHashMap_CollectionView : NSObject <JavaUtilCollection, JavaIoSerializable>
{
    JavaUtilConcurrentConcurrentHashMap *map_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)__javaClone;
- (BOOL)retainAllWithJavaUtilCollection:(id)arg1;
- (BOOL)removeAllWithJavaUtilCollection:(id)arg1;
- (BOOL)containsAllWithJavaUtilCollection:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)toArrayWithNSObjectArray:(id)arg1;
- (id)toArray;
- (BOOL)removeWithId:(id)arg1;
- (BOOL)containsWithId:(id)arg1;
- (id)iterator;
- (BOOL)isEmpty;
- (int)size;
- (void)clear;
- (id)getMap;
- (id)initWithJavaUtilConcurrentConcurrentHashMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
