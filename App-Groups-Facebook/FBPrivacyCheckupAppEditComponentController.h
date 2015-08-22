//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKComponentController.h"

#import "FBPopoverControllerDelegate.h"
#import "FBPrivacyCheckupAppNoticeViewControllerDelegate.h"

@class FBPopoverController, NSString, UIWindow;

@interface FBPrivacyCheckupAppEditComponentController : CKComponentController <FBPrivacyCheckupAppNoticeViewControllerDelegate, FBPopoverControllerDelegate>
{
    UIWindow *_window;
    FBPopoverController *_confirmationModal;
    FBPopoverController *_followupModal;
}

- (void).cxx_destruct;
- (void)appNoticeControllerDidTapCancelButton:(id)arg1;
- (void)appNoticeControllerDidTapSecondaryButton:(id)arg1;
- (void)appNoticeControllerDidTapPrimaryButton:(id)arg1;
- (void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned int)arg2;
- (void)_resizeModalController:(id)arg1;
- (void)willRemount;
- (void)_didTapDeleteWithPosts:(BOOL)arg1;
- (id)_modalNoticeFromData:(id)arg1 toolbox:(id)arg2;
- (void)didTapAppDelete:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
