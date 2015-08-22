//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBPaymentsPeerToPeerResetPasscodeViewControllerDelegate.h"

@class FBPaymentsPeerToPeerPasscodeWorkflowListenerAnnouncer, FBPaymentsPeerToPeerPaymentPinController, NSString, UINavigationController;

@interface FBPaymentsPeerToPeerPasscodeWorkflowController : NSObject <FBPaymentsPeerToPeerResetPasscodeViewControllerDelegate>
{
    FBPaymentsPeerToPeerPaymentPinController *_paymentPinController;
    id <MNNavigationPluginService> _navigationService;
    id <MNConnectionStatusPluginService> _connectionStatusService;
    UINavigationController *_navigationController;
    int _workflow;
    CDUnknownBlockType _completion;
    FBPaymentsPeerToPeerPasscodeWorkflowListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)_performGraphRequestWithType:(int)arg1 oldPasscode:(id)arg2 newPasscode:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_presentViewControllerOrPushViewController:(id)arg1;
- (void)_presentResetPasscodeViewController;
- (void)_presentPasscodeViewControllerWithPresentingMode:(int)arg1 graphRequestType:(int)arg2 usesUserInputAsOldPasscode:(BOOL)arg3 supplementaryOldPasscode:(id)arg4 extra:(id)arg5;
- (void)_announceDidFailWorkflowWithError:(id)arg1;
- (void)_announceDidCancelWorkflow;
- (void)_announceDidFinishWorkflowWithPasscode:(id)arg1;
- (void)_dismissAndDispatchSuccess:(BOOL)arg1 passcode:(id)arg2 error:(id)arg3 cancelled:(BOOL)arg4;
- (void)_handleError:(id)arg1;
- (void)_handleResetPaymentPin:(BOOL)arg1 error:(id)arg2;
- (void)_handleDeletePaymentPin:(BOOL)arg1 error:(id)arg2;
- (void)_handleUpdatePaymentPin:(BOOL)arg1 newPasscode:(id)arg2 error:(id)arg3;
- (void)_handleCreatePaymentPin:(BOOL)arg1 newPasscode:(id)arg2 error:(id)arg3;
- (void)_handleVerifyPaymentPin:(BOOL)arg1 error:(id)arg2 oldPasscode:(id)arg3;
- (void)_handleGraphRequestCallback:(int)arg1 oldPasscode:(id)arg2 newPasscode:(id)arg3 success:(BOOL)arg4 error:(id)arg5;
- (void)resetPasscodeViewControllerDidFailToResetPin:(id)arg1 error:(id)arg2;
- (void)resetPasscodeViewControllerDidResetPin:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)presentWorkflow:(int)arg1 extra:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPaymentPinController:(id)arg1 navigationService:(id)arg2 connectionStatusService:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

