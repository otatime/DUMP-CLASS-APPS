//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"
#import "JavaUtilList.h"
#import "JavaUtilRandomAccess.h"
#import "NSCopying.h"

@class NSString;

@interface JavaUtilConcurrentCopyOnWriteArrayList : NSObject <JavaUtilList, JavaUtilRandomAccess, NSCopying, JavaIoSerializable>
{
    // Error parsing type: A^v, name: elements_
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (int)indexOfWithId:(id)arg1 withNSObjectArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
+ (int)lastIndexOfWithId:(id)arg1 withNSObjectArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
+ (BOOL)containsAllWithJavaUtilCollection:(id)arg1 withNSObjectArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)__javaClone;
- (void)dealloc;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (id)getArray;
- (void)removeRangeWithInt:(int)arg1 withInt:(int)arg2;
- (id)setWithInt:(int)arg1 withId:(id)arg2;
- (int)removeOrRetainWithJavaUtilCollection:(id)arg1 withBoolean:(BOOL)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (BOOL)retainAllWithJavaUtilCollection:(id)arg1;
- (BOOL)removeAllWithJavaUtilCollection:(id)arg1;
- (BOOL)removeWithId:(id)arg1;
- (id)removeWithInt:(int)arg1;
- (void)clear;
- (BOOL)addIfAbsentWithId:(id)arg1;
- (int)addAllAbsentWithJavaUtilCollection:(id)arg1;
- (BOOL)addAllWithInt:(int)arg1 withJavaUtilCollection:(id)arg2;
- (BOOL)addAllWithJavaUtilCollection:(id)arg1;
- (void)addWithInt:(int)arg1 withId:(id)arg2;
- (BOOL)addWithId:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)toArrayWithNSObjectArray:(id)arg1;
- (id)toArray;
- (id)subListWithInt:(int)arg1 withInt:(int)arg2;
- (id)listIterator;
- (id)listIteratorWithInt:(int)arg1;
- (id)iterator;
- (BOOL)isEmpty;
- (int)lastIndexOfWithId:(id)arg1;
- (int)lastIndexOfWithId:(id)arg1 withInt:(int)arg2;
- (int)indexOfWithId:(id)arg1;
- (int)indexOfWithId:(id)arg1 withInt:(int)arg2;
- (BOOL)containsAllWithJavaUtilCollection:(id)arg1;
- (BOOL)containsWithId:(id)arg1;
- (id)getWithInt:(int)arg1;
- (int)size;
- (id)clone;
- (id)initWithNSObjectArray:(id)arg1;
- (id)initWithJavaUtilCollection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

