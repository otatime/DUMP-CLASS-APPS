//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTCallback.h"

@class JBTIBigTopSyncClientAPIImpl, NSString;

@interface JBTIBigTopSyncClientAPIImpl_$6 : NSObject <JBTCallback>
{
    JBTIBigTopSyncClientAPIImpl *this$0_;
    id <JBTICommonSapiSpan> val$sapiSpan_;
    id <JBTCallback> val$callback_;
    BOOL val$forceShutdown_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJBTIBigTopSyncClientAPIImpl:(id)arg1 withJBTICommonSapiSpan:(id)arg2 withJBTCallback:(id)arg3 withBoolean:(BOOL)arg4;
- (void)onErrorWithJBTError:(id)arg1;
- (void)onSuccessWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
