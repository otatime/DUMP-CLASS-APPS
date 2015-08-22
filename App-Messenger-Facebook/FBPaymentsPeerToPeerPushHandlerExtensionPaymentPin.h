//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBPaymentsPeerToPeerPushHandlerExtension.h"

@class FBPaymentsPeerToPeerPushEventQueue, NSString;

@interface FBPaymentsPeerToPeerPushHandlerExtensionPaymentPin : NSObject <FBPaymentsPeerToPeerPushHandlerExtension>
{
    FBPaymentsPeerToPeerPushEventQueue *_pushEventQueue;
}

- (void).cxx_destruct;
- (id)initWithPushEventQueue:(id)arg1;
- (BOOL)handleAPNSPayloadParameters:(id)arg1 actionIdentifier:(id)arg2 launchedByUser:(BOOL)arg3 supportsPreview:(BOOL)arg4 isColdStart:(BOOL)arg5 handledCompletionBlock:(CDUnknownBlockType)arg6;
@property(readonly, copy, nonatomic) NSString *supportedPushObjectType;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

