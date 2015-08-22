//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"

@class IOSObjectArray, NSString;

@interface JavaUtilConcurrentAtomicAtomicReferenceArray : NSObject <JavaIoSerializable>
{
    IOSObjectArray *array_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)weakCompareAndSetWithInt:(int)arg1 withId:(id)arg2 withId:(id)arg3;
- (BOOL)compareAndSetWithInt:(int)arg1 withId:(id)arg2 withId:(id)arg3;
- (id)getAndSetWithInt:(int)arg1 withId:(id)arg2;
- (void)lazySetWithInt:(int)arg1 withId:(id)arg2;
- (void)setWithInt:(int)arg1 withId:(id)arg2;
- (id)getUncheckedWithInt:(int)arg1;
- (id)getWithInt:(int)arg1;
- (int)length;
- (id)initWithNSObjectArray:(id)arg1;
- (id)initWithInt:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
