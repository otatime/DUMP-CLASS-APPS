//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MNRegistrationConfirmationCodeChangePhoneNumberTextViewDelegate.h"
#import "MNRegistrationConfirmationCodeFormControllerDelegate.h"
#import "MNRegistrationConfirmationCodeVerificationRequestSenderDelegate.h"
#import "MNRegistrationPhoneVerificationRequestSenderDelegate.h"

@class FBAnalytics, FBImageDownloader, MNRegistrationConfirmationCodeFormController, MNRegistrationConfirmationCodeVerificationRequestSender, MNRegistrationConfirmationCodeView, MNRegistrationPhoneVerificationRequestSender, MNStackedContainerController, NSString;

@interface MNRegistrationConfirmationCodeViewController : UIViewController <MNRegistrationConfirmationCodeFormControllerDelegate, MNRegistrationConfirmationCodeVerificationRequestSenderDelegate, MNRegistrationPhoneVerificationRequestSenderDelegate, MNRegistrationConfirmationCodeChangePhoneNumberTextViewDelegate>
{
    id <FBPhoneNumber> _phoneNumber;
    MNRegistrationConfirmationCodeView *_confirmationCodeView;
    MNStackedContainerController *_stackedContainerController;
    MNRegistrationConfirmationCodeFormController *_confirmationCodeFormController;
    MNRegistrationConfirmationCodeVerificationRequestSender *_confirmationCodeVerificationRequestSender;
    MNRegistrationPhoneVerificationRequestSender *_phoneVerificationRequestSender;
    FBImageDownloader *_imageDownloader;
    FBAnalytics *_analytics;
    id <MNRegistrationConfirmationCodeViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MNRegistrationConfirmationCodeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)changePhoneNumberButtonPressed;
- (void)_resendCodeButtonPressed;
- (void)registrationPhoneVerificationRequestSender:(id)arg1 didFailWithError:(id)arg2;
- (void)registrationPhoneVerificationRequestSenderDidFinish:(id)arg1;
- (void)registrationConfirmationCodeVerificationRequestSender:(id)arg1 didFailWithError:(id)arg2;
- (void)registrationConfirmationCodeVerificationRequestSender:(id)arg1 didFindVerifiedAccountForPhoneNumber:(id)arg2 accountID:(id)arg3 isPartial:(BOOL)arg4 isTwoFacUser:(BOOL)arg5 firstName:(id)arg6 lastName:(id)arg7 profilePhotoURL:(id)arg8;
- (void)registrationConfirmationCodeVerificationRequestSender:(id)arg1 didFinishVerificationForPhoneNumber:(id)arg2;
- (void)registrationConfirmationCodeFormController:(id)arg1 didReceiveConfirmationCodeInput:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithPhoneNumber:(id)arg1 imageDownloader:(id)arg2 analytics:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

