//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBGraphMessageSendListening.h"

@class FBAnalytics, FBReachabilityAnnouncer, NSString;

@interface FBGraphMessageSendAnalyticsLogger : NSObject <FBGraphMessageSendListening>
{
    FBReachabilityAnnouncer *_reachabilityAnnouncer;
    FBAnalytics *_analytics;
    NSString *_sessionId;
    id <FBGraphMessageSendRequestRunnerDelegate> _runnerDelegate;
}

- (void).cxx_destruct;
- (void)graphMessageSendRequestRunnerDidUpdateProgressForMessage:(id)arg1 didUpdateUploadProgress:(float)arg2;
- (void)graphMessageSendRequestRunnerDidNotSendMessageDueToNoConnection:(id)arg1 error:(id)arg2;
- (void)graphMessageSendRequestRunnerCouldNotSendMessage:(id)arg1 error:(id)arg2;
- (void)graphMessageSendRequestRunnerDidCancelSendingMessage:(id)arg1;
- (void)graphMessageSendRequestRunnerDidSendMessage:(id)arg1 messageId:(id)arg2;
- (void)graphMessageSendRequestRunnerWillRetrySendingMessage:(id)arg1;
- (void)graphMessageSendRequestRunnerWillSendMessage:(id)arg1;
- (id)initWithReachabilityAnnouncer:(id)arg1 analytics:(id)arg2 sessionId:(id)arg3 runnerDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

