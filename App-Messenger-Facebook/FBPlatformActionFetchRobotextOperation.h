//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBPlatformActionOperation.h"

#import "FBComposerPublisherStatusListener.h"
#import "FBPlatformActionPublisherOperating.h"

@class FBComposerLogger, FBComposerOpenGraphActionPublisher, FBComposerPublisherData, FBRobotext, FBUserSession, NSString;

@interface FBPlatformActionFetchRobotextOperation : FBPlatformActionOperation <FBPlatformActionPublisherOperating, FBComposerPublisherStatusListener>
{
    id <FBPublisherProvider> _publisherProvider;
    FBUserSession *_userSession;
    NSString *_primaryObjectField;
    FBComposerPublisherData *_publisherData;
    FBRobotext *_robotext;
    NSString *_sharedObjectFBID;
    NSString *_channel;
    FBComposerLogger *_logger;
    FBComposerOpenGraphActionPublisher *_robotextPublisher;
}

@property(retain, nonatomic) FBComposerOpenGraphActionPublisher *robotextPublisher; // @synthesize robotextPublisher=_robotextPublisher;
@property(readonly, nonatomic) FBComposerLogger *logger; // @synthesize logger=_logger;
@property(readonly, copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *sharedObjectFBID; // @synthesize sharedObjectFBID=_sharedObjectFBID;
@property(retain, nonatomic) FBRobotext *robotext; // @synthesize robotext=_robotext;
@property(retain, nonatomic) FBComposerPublisherData *publisherData; // @synthesize publisherData=_publisherData;
@property(copy, nonatomic) NSString *primaryObjectField; // @synthesize primaryObjectField=_primaryObjectField;
- (void).cxx_destruct;
- (void)startedServerProcessingForUploadedPublication:(id)arg1;
- (void)cannotCancelPublishingOfPublisherData:(id)arg1;
- (void)canCancelPublishingOfPublisherData:(id)arg1;
- (void)startedUploadingItemOfType:(int)arg1 withThumbnailImage:(id)arg2 forPublisherData:(id)arg3;
- (void)scheduledPublicationOfPublisherData:(id)arg1 atDate:(id)arg2;
- (void)startedWaitingForConnectivityForPublicationOfPublisherData:(id)arg1;
- (void)retriedPublishingPublisherData:(id)arg1;
- (void)cancelledPublishingPublisherData:(id)arg1;
- (void)terminallyFailedPublishingPublisherData:(id)arg1 withError:(id)arg2;
- (void)failedPublishingAndWaitingForRetryPublisherData:(id)arg1 withError:(id)arg2;
- (void)failedPublishingPublisherData:(id)arg1 withError:(id)arg2;
- (void)publicationProgressedWithProgress:(float)arg1 forPublisherData:(id)arg2;
- (void)pausedPublishingPublisherData:(id)arg1;
- (void)successfullyPublishedPublisherData:(id)arg1 withResponse:(id)arg2;
- (void)attemptedPublicationOfPublisherData:(id)arg1;
- (void)startedPublishingPublisherData:(id)arg1;
- (void)process;
- (id)defaultErrorMessage;
- (void)cleanup;
- (void)cancel;
- (void)_cancelRobotextPublisher;
- (id)initWithAction:(id)arg1;
- (id)initWithAction:(id)arg1 channel:(id)arg2 publisherProvider:(id)arg3 logger:(id)arg4 userSession:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

