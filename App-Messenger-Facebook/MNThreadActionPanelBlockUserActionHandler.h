//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNThreadActionPanelActionHandling.h"

@class FBMThreadParticipantFilter, MNBlockUserFullScreenViewController, MNNavigationCoordinator, MNThreadActionPanelActionConfiguration, NSString;

@interface MNThreadActionPanelBlockUserActionHandler : NSObject <MNThreadActionPanelActionHandling>
{
    FBMThreadParticipantFilter *_threadParticipantFilter;
    MNNavigationCoordinator *_navigationCoordinator;
    MNThreadActionPanelActionConfiguration *_actionConfig;
    MNBlockUserFullScreenViewController *_blockUserVC;
    id <MNThreadActionPanelActionHandlingDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)dismissActionSheets;
- (void)handleActionWithDelegate:(id)arg1;
- (id)initWithThreadParticipantFilter:(id)arg1 navigationCoordinator:(id)arg2 actionConfig:(id)arg3 blockUserVC:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

