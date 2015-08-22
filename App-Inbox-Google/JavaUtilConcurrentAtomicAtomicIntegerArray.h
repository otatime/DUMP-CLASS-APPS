//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"

@class IOSIntArray, NSString;

@interface JavaUtilConcurrentAtomicAtomicIntegerArray : NSObject <JavaIoSerializable>
{
    IOSIntArray *array_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (int)addAndGetWithInt:(int)arg1 withInt:(int)arg2;
- (int)decrementAndGetWithInt:(int)arg1;
- (int)incrementAndGetWithInt:(int)arg1;
- (int)getAndAddWithInt:(int)arg1 withInt:(int)arg2;
- (int)getAndDecrementWithInt:(int)arg1;
- (int)getAndIncrementWithInt:(int)arg1;
- (BOOL)weakCompareAndSetWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (BOOL)compareAndSetWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)getAndSetWithInt:(int)arg1 withInt:(int)arg2;
- (void)lazySetWithInt:(int)arg1 withInt:(int)arg2;
- (void)setWithInt:(int)arg1 withInt:(int)arg2;
- (int)getUncheckedWithInt:(int)arg1;
- (int)getWithInt:(int)arg1;
- (int)length;
- (id)initWithIntArray:(id)arg1;
- (id)initWithInt:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
