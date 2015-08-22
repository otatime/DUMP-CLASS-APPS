//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MessageRegionsViewRenderingDelegate.h"

@class NSDate, NSMutableDictionary, NSMutableSet, NSString, NSTimer;

@interface ConversationHeightPrefetcher : NSObject <MessageRegionsViewRenderingDelegate>
{
    id <JBTConversationMessageList> messageList_;
    NSMutableSet *messagesComputed_;
    NSMutableDictionary *conversationMessageCache_;
    NSMutableSet *loadingMessageRegionViews_;
    int pendingMessageRegionViewCreations_;
    NSTimer *timer_;
    NSDate *startTime_;
    BOOL backgroundPrefetch_;
    id <JBTConversation> _conversation;
    id <ConversationHeightPrefetcherDelegate> _delegate;
}

@property(nonatomic) __weak id <ConversationHeightPrefetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <JBTConversation> conversation; // @synthesize conversation=_conversation;
@property(nonatomic) BOOL backgroundPrefetch; // @synthesize backgroundPrefetch=backgroundPrefetch_;
- (void).cxx_destruct;
- (void)messageRegionsViewDidFinishLoad:(id)arg1;
- (void)messageRegionsView:(id)arg1 didFinishLoadingWebview:(id)arg2;
- (void)messageRegionsViewHeightDidChange:(id)arg1 scrollNeeded:(BOOL)arg2;
- (void)messageRegionsViewDidStartLoad:(id)arg1;
- (void)messageRegionsViewWasCreatedAsync:(id)arg1;
- (void)messageRegionsViewWillBeCreatedAsync;
- (float)messageWidth;
- (id)conversationMessageForExpandableElement:(id)arg1;
- (void)checkMessageHeights;
- (void)cellRenderedNotification;
- (void)scheduleNextMessageHeightComputation;
- (BOOL)isMessageHeightReadyForConversationMessage:(id)arg1 performInefficientChecks:(BOOL)arg2;
- (void)tearDown;
- (void)dealloc;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
