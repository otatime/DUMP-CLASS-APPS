//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilConcurrentSynchronousQueue_Transferer.h"

@interface JavaUtilConcurrentSynchronousQueue_TransferStack : JavaUtilConcurrentSynchronousQueue_Transferer
{
    // Error parsing type: A^v, name: head_
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)snodeWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(id)arg1 withId:(id)arg2 withJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(id)arg3 withInt:(int)arg4;
+ (BOOL)isFulfillingWithInt:(int)arg1;
- (void)__javaClone;
- (void)dealloc;
- (id)init;
- (void)cleanWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(id)arg1;
- (BOOL)shouldSpinWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(id)arg1;
- (id)awaitFulfillWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(id)arg1 withBoolean:(BOOL)arg2 withLong:(long long)arg3;
- (id)transferWithId:(id)arg1 withBoolean:(BOOL)arg2 withLong:(long long)arg3;
- (BOOL)casHeadWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(id)arg1 withJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(id)arg2;

@end
