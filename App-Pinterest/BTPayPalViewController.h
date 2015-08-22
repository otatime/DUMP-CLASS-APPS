//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PayPalProfileSharingDelegate.h"

@class BTClient, BTPayPalPaymentMethod, NSError, NSString, PayPalProfileSharingViewController;

@interface BTPayPalViewController : UIViewController <PayPalProfileSharingDelegate>
{
    id <BTPayPalViewControllerDelegate> _delegate;
    BTClient *_client;
    PayPalProfileSharingViewController *_payPalProfileSharingViewController;
    NSError *_failureError;
    BTPayPalPaymentMethod *_paymentMethod;
}

@property(retain, nonatomic) BTPayPalPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property(retain, nonatomic) NSError *failureError; // @synthesize failureError=_failureError;
@property(retain, nonatomic) PayPalProfileSharingViewController *payPalProfileSharingViewController; // @synthesize payPalProfileSharingViewController=_payPalProfileSharingViewController;
@property(retain, nonatomic) BTClient *client; // @synthesize client=_client;
@property(nonatomic) __weak id <BTPayPalViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)payPalProfileSharingViewController:(id)arg1 userDidLogInWithAuthorization:(id)arg2;
- (void)payPalProfileSharingViewController:(id)arg1 userWillLogInWithAuthorization:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)userDidCancelPayPalProfileSharingViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

