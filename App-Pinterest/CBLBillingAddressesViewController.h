//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewController.h"

@class CBLBillingAddressesView;

@interface CBLBillingAddressesViewController : CBLBaseViewController
{
    id <CBLBillingAddressesViewDelegate> _delegate;
    CBLBillingAddressesView *_billingAddressesView;
}

@property(readonly, nonatomic) CBLBillingAddressesView *billingAddressesView; // @synthesize billingAddressesView=_billingAddressesView;
@property(nonatomic) __weak id <CBLBillingAddressesViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

