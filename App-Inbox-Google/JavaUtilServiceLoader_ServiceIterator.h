//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilIterator.h"

@class IOSClass, JavaLangClassLoader, JavaUtilLinkedList, NSString;

@interface JavaUtilServiceLoader_ServiceIterator : NSObject <JavaUtilIterator>
{
    JavaLangClassLoader *classLoader_;
    IOSClass *service_;
    id <JavaUtilSet> services_;
    BOOL isRead_;
    JavaUtilLinkedList *queue_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)checkValidJavaClassNameWithNSString:(id)arg1;
- (void)remove;
- (void)readClass;
- (id)next;
- (BOOL)hasNext;
- (id)initWithJavaUtilServiceLoader:(id)arg1 withJavaUtilServiceLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

