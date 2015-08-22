//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLCollectionViewController.h"

#import "CBLInterestsFeedHeaderViewDelegate.h"
#import "CBLViewControllerPresenter.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class CBLInterest, CBLInterestsFeedHeaderView, NSString;

@interface CBLInterestsFeedViewController : CBLCollectionViewController <CBLInterestsFeedHeaderViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, CBLViewControllerPresenter>
{
    CBLInterest *_interest;
    CBLInterestsFeedHeaderView *_interestsHeaderView;
}

+ (void)presentHost:(id)arg1 withPath:(id)arg2 withParameters:(id)arg3 usingPresenterDelegate:(id)arg4 deferingToControllerDelegate:(id)arg5;
@property(retain, nonatomic) CBLInterestsFeedHeaderView *interestsHeaderView; // @synthesize interestsHeaderView=_interestsHeaderView;
@property(retain, nonatomic) CBLInterest *interest; // @synthesize interest=_interest;
- (void).cxx_destruct;
- (void)cblTraitCollectionDidChange:(id)arg1;
- (void)cblViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)displayOptionsForPin:(id)arg1;
- (void)remoteModelCollectionDidUpdateContent:(id)arg1;
- (void)CBLInterestsFeedHeaderViewDidPresssFollowButton:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)updateHeaderMarginsWithWidth:(float)arg1;
- (void)viewDidLoad;
- (id)initWithInterest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
