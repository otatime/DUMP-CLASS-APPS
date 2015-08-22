//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNContactImportDialogDismissalListener.h"
#import "MNContactImportProgressMegaphoneCellListener.h"
#import "MNImportedContactCardViewListener.h"
#import "MNSyncPersonsDialogListViewListener.h"

@class FBGraphQLImportedContactRemover, FBMParticipantNameFormatter, FBSyncPerson, FBUserSession, MNContactImportAnalyticsLogger, MNContactImportDialogViewController, MNNavigationCoordinator, MNSyncPersonsDialogListView, MNSyncPersonsDialogListViewListenerAnnouncer, NSString;

@interface MNImportedContactsListPresenter : NSObject <MNContactImportDialogDismissalListener, MNSyncPersonsDialogListViewListener, MNImportedContactCardViewListener, MNContactImportProgressMegaphoneCellListener>
{
    MNContactImportAnalyticsLogger *_analyticsLogger;
    FBSyncPerson *_currentlySelectedPerson;
    FBGraphQLImportedContactRemover *_importedContactRemover;
    id <MNSyncPersonsListDisplayerAvailabilityListener> _listDisplayerAvailabilityListener;
    MNSyncPersonsDialogListView *_listView;
    MNSyncPersonsDialogListViewListenerAnnouncer *_listViewEventAnnouncer;
    FBMParticipantNameFormatter *_nameFormatter;
    MNNavigationCoordinator *_navigationCoordinator;
    FBUserSession *_session;
    MNContactImportDialogViewController *_viewController;
    id <MNAvatarImageDecorating> _avatarImageDecoration;
}

@property(retain, nonatomic) id <MNAvatarImageDecorating> avatarImageDecoration; // @synthesize avatarImageDecoration=_avatarImageDecoration;
@property(retain, nonatomic) MNContactImportDialogViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) MNNavigationCoordinator *navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(retain, nonatomic) FBMParticipantNameFormatter *nameFormatter; // @synthesize nameFormatter=_nameFormatter;
@property(retain, nonatomic) MNSyncPersonsDialogListViewListenerAnnouncer *listViewEventAnnouncer; // @synthesize listViewEventAnnouncer=_listViewEventAnnouncer;
@property(retain, nonatomic) MNSyncPersonsDialogListView *listView; // @synthesize listView=_listView;
@property(nonatomic) __weak id <MNSyncPersonsListDisplayerAvailabilityListener> listDisplayerAvailabilityListener; // @synthesize listDisplayerAvailabilityListener=_listDisplayerAvailabilityListener;
@property(retain, nonatomic) FBGraphQLImportedContactRemover *importedContactRemover; // @synthesize importedContactRemover=_importedContactRemover;
@property(retain, nonatomic) FBSyncPerson *currentlySelectedPerson; // @synthesize currentlySelectedPerson=_currentlySelectedPerson;
@property(retain, nonatomic) MNContactImportAnalyticsLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
- (void).cxx_destruct;
- (void)contactImportDialogDismissed;
- (void)secondaryAuxiliaryButtonTapped;
- (void)primaryAuxiliaryButtonTapped;
- (void)mainActionButtonTapped;
- (void)confirmationButtonPressed;
- (void)tappedSyncPerson:(id)arg1;
- (void)contactImportProgressCellTapped;
- (id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 analyticsLogger:(id)arg3 importedContactRemover:(id)arg4 nameFormatter:(id)arg5 listDisplayerAvailabilityListener:(id)arg6 avatarImageDecoration:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
