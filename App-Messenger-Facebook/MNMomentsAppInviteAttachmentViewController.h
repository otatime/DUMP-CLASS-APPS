//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MNAttachmentDefaultViewController.h"

#import "MNMomentsAppInviteAttachmentViewDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"

@class FBUserSession, MNMomentsAppInstallSheetOverlay, NSString;

@interface MNMomentsAppInviteAttachmentViewController : MNAttachmentDefaultViewController <SKStoreProductViewControllerDelegate, MNMomentsAppInviteAttachmentViewDelegate>
{
    FBUserSession *_session;
    id <MNNavigationPluginService> _navigationService;
    MNMomentsAppInstallSheetOverlay *_overlay;
}

- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)_animateOverlayVisible:(BOOL)arg1;
- (void)_didTapClose:(id)arg1;
- (void)_ensureOverlay:(id)arg1;
- (void)_createAndShowOverlay:(id)arg1 productViewController:(id)arg2;
- (void)momentsAppInviteViewWasTapped:(id)arg1;
- (void)didDisappearInContainerView:(id)arg1;
- (void)awakeWithView:(id)arg1;
- (id)initWithSession:(id)arg1 navigationService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

