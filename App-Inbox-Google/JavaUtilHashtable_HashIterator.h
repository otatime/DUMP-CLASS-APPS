//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaUtilHashtable, JavaUtilHashtable_HashtableEntry;

@interface JavaUtilHashtable_HashIterator : NSObject
{
    JavaUtilHashtable *this$0_;
    int nextIndex_;
    JavaUtilHashtable_HashtableEntry *nextEntry_;
    JavaUtilHashtable_HashtableEntry *lastEntryReturned_;
    int expectedModCount_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)remove;
- (id)nextEntryNotFailFast;
- (id)nextEntry;
- (BOOL)hasNext;
- (id)initWithJavaUtilHashtable:(id)arg1;

@end
