//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JCGCuCallback.h"

@class ComGoogleCumulusSyncClientObjectStoreWorkQueueProxy, NSString;

@interface ComGoogleCumulusSyncClientObjectStoreWorkQueueProxy_WrappedCallback : NSObject <JCGCuCallback>
{
    ComGoogleCumulusSyncClientObjectStoreWorkQueueProxy *this$0_;
    id <JCGCuCallback> callback_;
}

- (void)dealloc;
- (void)onFailureWithJavaLangException:(id)arg1;
- (void)onSuccessWithId:(id)arg1;
- (id)initWithComGoogleCumulusSyncClientObjectStoreWorkQueueProxy:(id)arg1 withJCGCuCallback:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
