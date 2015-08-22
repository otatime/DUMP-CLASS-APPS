//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBEventCreateControllerDelegate.h"
#import "FBEventsComposerViewControllerDelegate.h"

@class FBEventAnalyticTracker, FBEventCreationSessionMetrics, FBEventEditController, FBMemGroup, FBUserSession, NSString;

@interface FBEventCreationFlowCoordinator : NSObject <FBEventCreateControllerDelegate, FBEventsComposerViewControllerDelegate>
{
    FBEventEditController *_editController;
    NSString *_createdEventID;
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBUserSession *_session;
    NSString *_creationSessionUUID;
    FBEventCreationSessionMetrics *_sessionMetrics;
    FBEventAnalyticTracker *_tracker;
    id <FBEventCreationFlowDelegate> _delegate;
    FBMemGroup *_group;
}

@property(retain, nonatomic) FBMemGroup *group; // @synthesize group=_group;
@property(nonatomic) __weak id <FBEventCreationFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_navigateToEventWithGraphQLID:(id)arg1;
- (void)eventComposerDidCancel:(id)arg1;
- (void)eventComposer:(id)arg1 didEditEvent:(id)arg2;
- (void)eventComposer:(id)arg1 didCreateEvent:(id)arg2;
- (void)_logCompletionEvent:(id)arg1 withMetrics:(id)arg2;
- (void)controller:(id)arg1 didCreateTraditionalEventWithID:(id)arg2 withMetrics:(id)arg3;
- (void)controllerDidCancelEventCreation:(id)arg1 withMetrics:(id)arg2;
- (id)redesignComposerViewController;
- (id)legacyComposerViewController:(id)arg1;
- (void)presentFromSourceView:(id)arg1;
- (void)present;
- (id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 tracker:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
