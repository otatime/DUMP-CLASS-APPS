//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMMessageSenderListener.h"
#import "FBMThreadCreationListener.h"
#import "MNThreadMessageSenderPluginService.h"

@class FBMThreadStore, NSMapTable, NSString;

@interface MNThreadMessageSenderPluginServiceImpl : NSObject <MNThreadMessageSenderPluginService, FBMThreadCreationListener, FBMMessageSenderListener>
{
    CDUnknownBlockType _threadMessageSenderProviderBlock;
    FBMThreadStore *_threadStore;
    NSMapTable *_delegateForAttachment;
}

- (void).cxx_destruct;
- (void)_messageDidFailSending:(id)arg1 error:(id)arg2;
- (void)_messageDidSend:(id)arg1;
- (void)_messageDidEnqueue:(id)arg1;
- (id)_pluginCompatibleAttachmentFromMessage:(id)arg1;
- (void)didCancelCreatingThreadWithOfflineID:(id)arg1;
- (void)didAddMessage:(id)arg1 toQueueForPendingThreadWithOfflineID:(id)arg2;
- (void)didFailToCreateThreadWithOfflineID:(id)arg1 withMessage:(id)arg2 error:(id)arg3;
- (void)didCreateThread:(id)arg1 withMessage:(id)arg2 forPendingThreadWithOfflineID:(id)arg3;
- (void)willCreateThreadWithOfflineID:(id)arg1 withMessage:(id)arg2;
- (void)thread:(id)arg1 didEnqueueMessage:(id)arg2;
- (void)thread:(id)arg1 couldNotSendMessage:(id)arg2 error:(id)arg3;
- (void)thread:(id)arg1 didSendMessage:(id)arg2;
- (void)_sendAttachment:(id)arg1 withSenderTarget:(id)arg2;
- (void)_sendAttachment:(id)arg1 toThreadWithThreadDescriptor:(id)arg2 delegate:(id)arg3 threadFetchCompletionHandler:(CDUnknownBlockType)arg4;
- (void)sendAttachment:(id)arg1 toThreadWithThreadId:(id)arg2 delegate:(id)arg3;
- (void)sendAttachment:(id)arg1 toThreadInviteesWithIds:(id)arg2 delegate:(id)arg3;
- (id)initWithThreadMessageSenderProviderBlock:(CDUnknownBlockType)arg1 threadStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
