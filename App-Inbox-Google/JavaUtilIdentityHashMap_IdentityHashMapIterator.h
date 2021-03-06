//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilIterator.h"

@class JavaUtilIdentityHashMap, NSString;

@interface JavaUtilIdentityHashMap_IdentityHashMapIterator : NSObject <JavaUtilIterator>
{
    JavaUtilIdentityHashMap *associatedMap_;
    int expectedModCount_;
    id <JavaUtilMapEntry_Type> type_;
    BOOL canRemove_;
    int position_;
    int lastPosition_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)remove;
- (id)next;
- (void)checkConcurrentMod;
- (BOOL)hasNext;
- (id)initWithJavaUtilMapEntry_Type:(id)arg1 withJavaUtilIdentityHashMap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

