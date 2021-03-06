//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "BTPayPalButtonViewControllerPresenterDelegate.h"
#import "BTPayPalViewControllerDelegate.h"

@class BTClient, BTPayPalHorizontalSignatureWhiteView, BTPayPalViewController, BTUI, NSString;

@interface BTPayPalButton : UIControl <BTPayPalViewControllerDelegate, BTPayPalButtonViewControllerPresenterDelegate>
{
    id <BTPayPalButtonDelegate> _delegate;
    id <BTPayPalButtonViewControllerPresenterDelegate> _presentationDelegate;
    BTClient *_client;
    BTUI *_theme;
    BTPayPalHorizontalSignatureWhiteView *_payPalHorizontalSignatureView;
    BTPayPalViewController *_braintreePayPalViewController;
}

@property(retain, nonatomic) BTPayPalViewController *braintreePayPalViewController; // @synthesize braintreePayPalViewController=_braintreePayPalViewController;
@property(retain, nonatomic) BTPayPalHorizontalSignatureWhiteView *payPalHorizontalSignatureView; // @synthesize payPalHorizontalSignatureView=_payPalHorizontalSignatureView;
@property(retain, nonatomic) BTUI *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) BTClient *client; // @synthesize client=_client;
@property(nonatomic) __weak id <BTPayPalButtonViewControllerPresenterDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(nonatomic) __weak id <BTPayPalButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (id)defaultConstraints;
- (void)payPalButton:(id)arg1 requestsDismissalOfViewController:(id)arg2;
- (void)payPalButton:(id)arg1 requestsPresentationOfViewController:(id)arg2;
- (void)payPalViewControllerDidCancel:(id)arg1;
- (void)payPalViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)payPalViewController:(id)arg1 didCreatePayPalPaymentMethod:(id)arg2;
- (void)payPalViewControllerWillCreatePayPalPaymentMethod:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)requestPresentationOfViewController:(id)arg1;
- (void)requestDismissalOfViewController:(id)arg1;
- (void)informDelegateWillCreatePayPalPaymentMethod;
- (void)informDelegateDidFailWithError:(id)arg1;
- (void)informDelegateDidCreatePayPalPaymentMethod:(id)arg1;
- (void)didReceiveTouch;
- (void)setupViews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

