//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class JBTIUtilPendingMutationsPusher, NSString;

@interface JBTIUtilPendingMutationsPusher_PushTask : NSObject <JavaLangRunnable>
{
    JBTIUtilPendingMutationsPusher *this$0_;
    double timeoutAt_;
    id <JBTCallback> callback_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)run;
- (id)initWithJBTIUtilPendingMutationsPusher:(id)arg1 withDouble:(double)arg2 withJBTCallback:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
