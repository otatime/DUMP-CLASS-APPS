//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentAuthorizationViewControllerDelegate.h"
#import "STPCheckoutViewControllerDelegate.h"

@class NSError, NSString, STPAPIClient, STPCheckoutOptions, UIViewController;

@interface STPPaymentPresenter : NSObject <STPCheckoutViewControllerDelegate, PKPaymentAuthorizationViewControllerDelegate>
{
    BOOL _hasAuthorizedPayment;
    id <STPPaymentPresenterDelegate> _delegate;
    STPCheckoutOptions *_checkoutOptions;
    UIViewController *_presentingViewController;
    UIViewController *_presentedViewController;
    NSError *_error;
    STPAPIClient *_apiClient;
}

+ (BOOL)isSimulatorBuild;
@property(retain, nonatomic) STPAPIClient *apiClient; // @synthesize apiClient=_apiClient;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL hasAuthorizedPayment; // @synthesize hasAuthorizedPayment=_hasAuthorizedPayment;
@property(nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(copy, nonatomic) STPCheckoutOptions *checkoutOptions; // @synthesize checkoutOptions=_checkoutOptions;
@property(nonatomic) __weak id <STPPaymentPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)paymentAuthorizationViewControllerDidFinish:(id)arg1;
- (void)paymentAuthorizationViewController:(id)arg1 didAuthorizePayment:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkoutController:(id)arg1 didCreateToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkoutController:(id)arg1 didFinishWithStatus:(int)arg2 error:(id)arg3;
- (void)finishWithStatus:(int)arg1 error:(id)arg2;
- (void)requestPaymentFromPresentingViewController:(id)arg1;
- (id)initWithCheckoutOptions:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

