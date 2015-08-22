//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilAbstractSet.h"

#import "JavaIoSerializable.h"

@class NSString;

@interface JavaUtilCollections_SetFromMap : JavaUtilAbstractSet <JavaIoSerializable>
{
    id <JavaUtilMap> m_;
    id <JavaUtilSet> backingSet_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (int)size;
- (id)iterator;
- (id)toArrayWithNSObjectArray:(id)arg1;
- (id)toArray;
- (BOOL)retainAllWithJavaUtilCollection:(id)arg1;
- (BOOL)removeWithId:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)containsAllWithJavaUtilCollection:(id)arg1;
- (BOOL)containsWithId:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)clear;
- (BOOL)addWithId:(id)arg1;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithJavaUtilMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
