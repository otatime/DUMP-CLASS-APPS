//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaUtilHashMap, JavaUtilHashMap_HashMapEntry;

@interface JavaUtilHashMap_HashIterator : NSObject
{
    JavaUtilHashMap *this$0_;
    int nextIndex_;
    JavaUtilHashMap_HashMapEntry *nextEntry_;
    JavaUtilHashMap_HashMapEntry *lastEntryReturned_;
    int expectedModCount_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)remove;
- (id)nextEntry;
- (BOOL)hasNext;
- (id)initWithJavaUtilHashMap:(id)arg1;

@end

