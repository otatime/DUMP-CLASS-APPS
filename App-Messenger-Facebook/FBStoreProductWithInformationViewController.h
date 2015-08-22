//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBStoreProductViewController.h"

#import "FBStoreProductInformationDelegate.h"

@class FBLoadingIndicatorView, FBStoreProductInformationView, FBUserSession, NSString;

@interface FBStoreProductWithInformationViewController : FBStoreProductViewController <FBStoreProductInformationDelegate>
{
    FBUserSession *_session;
    FBStoreProductInformationView *_informationView;
    FBStoreProductInformationView *_defaultInformationView;
    BOOL _shouldShowProductInfo;
    FBLoadingIndicatorView *_loadingIndicatorView;
}

- (void).cxx_destruct;
- (void)storeProductInformationDismissed:(id)arg1;
@property(nonatomic) BOOL shouldShowProductInfo;
@property(retain, nonatomic) FBStoreProductInformationView *informationView;
- (void)_animateInformationViewAsVisible:(BOOL)arg1;
- (BOOL)_shouldShowInformationView;
- (id)analyticsModule;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)productViewControllerDidAppear:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

