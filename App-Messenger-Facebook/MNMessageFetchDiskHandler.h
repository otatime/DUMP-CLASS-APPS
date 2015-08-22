//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNMessageFetchRequestHandling.h"

@class FBMessagingStore, NSObject<OS_dispatch_queue>, NSString;

@interface MNMessageFetchDiskHandler : NSObject <MNMessageFetchRequestHandling>
{
    id <MNMessageFetchRequestHandling> _nextHandler;
    FBMessagingStore *_messageStore;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_handleMessageFetchResponse:(id)arg1 forRequest:(id)arg2 isComplete:(BOOL)arg3 listener:(id)arg4;
- (void)_loadMessagesFromDiskForNormalizedHistoryQuery:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)handleMessageFetchRequest:(id)arg1 currentPendingResponse:(id)arg2 listener:(id)arg3;
- (void)configureWithNextHandler:(id)arg1;
- (id)initWithDiskMessageStore:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

