//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "MNMessageSendQueueMutationListening.h"

@class NSString;

@interface MNMessageSendQueueMutationListeningAnnouncer : FBAnnouncerBase <MNMessageSendQueueMutationListening>
{
}

- (void)didRemoveMessageFromSendQueue:(id)arg1;
- (void)didAddMessageToSendQueue:(id)arg1 sendStateInfo:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

