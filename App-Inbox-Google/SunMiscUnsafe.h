//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SunMiscUnsafe : NSObject
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (int)getArrayIndexScaleForComponentTypeWithIOSClass:(id)arg1;
+ (int)getArrayBaseOffsetForComponentTypeWithIOSClass:(id)arg1;
+ (long long)objectFieldOffset0WithJavaLangReflectField:(id)arg1;
+ (id)getUnsafe;
- (id)allocateInstanceWithIOSClass:(id)arg1;
- (void)unparkWithId:(id)arg1;
- (void)parkWithBoolean:(BOOL)arg1 withLong:(long long)arg2;
- (void)putOrderedObjectWithId:(id)arg1 withLong:(long long)arg2 withId:(id)arg3;
- (void)putObjectWithId:(id)arg1 withLong:(long long)arg2 withId:(id)arg3;
- (id)getObjectWithId:(id)arg1 withLong:(long long)arg2;
- (void)putOrderedLongWithId:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (void)putLongWithId:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (long long)getLongWithId:(id)arg1 withLong:(long long)arg2;
- (void)putOrderedIntWithId:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3;
- (void)putIntWithId:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3;
- (int)getIntWithId:(id)arg1 withLong:(long long)arg2;
- (void)putObjectVolatileWithId:(id)arg1 withLong:(long long)arg2 withId:(id)arg3;
- (id)getObjectVolatileWithId:(id)arg1 withLong:(long long)arg2;
- (void)putLongVolatileWithId:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (long long)getLongVolatileWithId:(id)arg1 withLong:(long long)arg2;
- (void)putIntVolatileWithId:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3;
- (int)getIntVolatileWithId:(id)arg1 withLong:(long long)arg2;
- (BOOL)compareAndSwapObjectWithId:(id)arg1 withLong:(long long)arg2 withId:(id)arg3 withId:(id)arg4;
- (BOOL)compareAndSwapLongWithId:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withLong:(long long)arg4;
- (BOOL)compareAndSwapIntWithId:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (int)arrayIndexScaleWithIOSClass:(id)arg1;
- (int)arrayBaseOffsetWithIOSClass:(id)arg1;
- (long long)objectFieldOffsetWithJavaLangReflectField:(id)arg1;
- (id)init;

@end
