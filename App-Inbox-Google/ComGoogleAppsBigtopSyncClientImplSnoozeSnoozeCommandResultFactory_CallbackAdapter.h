//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTICommonSapiCallback.h"

@class ComGoogleAppsBigtopSyncClientImplSnoozeSnoozeCommandResultFactory, NSString;

@interface ComGoogleAppsBigtopSyncClientImplSnoozeSnoozeCommandResultFactory_CallbackAdapter : NSObject <JBTICommonSapiCallback>
{
    ComGoogleAppsBigtopSyncClientImplSnoozeSnoozeCommandResultFactory *this$0_;
    id <JBTSnoozeConfig> snoozeConfig_;
    id <JBTCallback> delegateCallback_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)onErrorWithJBTError:(id)arg1;
- (void)onSuccessWithId:(id)arg1 withJBTSpan:(id)arg2;
- (id)initWithComGoogleAppsBigtopSyncClientImplSnoozeSnoozeCommandResultFactory:(id)arg1 withJBTSnoozeConfig:(id)arg2 withJBTCallback:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
