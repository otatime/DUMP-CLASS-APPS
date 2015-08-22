//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBComposerPickerController.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class FBUserSession, NSArray, NSDictionary, NSString, UICollectionView;

@interface FBMLEIconPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, FBComposerPickerController>
{
    UICollectionView *_collectionView;
    id <FBServiceTransactionMutating> _token;
    FBUserSession *_session;
    NSArray *_categories;
    NSDictionary *_icons;
    NSString *_iconTitle;
    id <FBMLEIconPickerViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBMLEIconPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)fb_showNavigationJewels;
- (unsigned int)preferredPresentationOptions;
- (unsigned int)preferredPresentationMethod;
- (void)dismissPopoverController;
- (struct CGSize)popoverContentSizeForOrientation:(int)arg1;
- (unsigned int)popoverStyle;
- (id)presentableViewController;
- (void)_didTapSkip;
- (void)_didTapCancel;
- (unsigned int)supportedInterfaceOrientations;
- (void)_handleDownloadedResponse:(id)arg1 error:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithSession:(id)arg1 iconURL:(id)arg2 iconTitle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
