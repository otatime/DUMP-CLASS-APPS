//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBTableViewController.h"

@class NSOrderedSet, NSString;

@interface FBComposerGroupCommerceCategoryPickerViewController : FBTableViewController
{
    NSString *_selectedCategoryGraphQLID;
    NSOrderedSet *_categories;
    id <FBComposerGroupCommerceCategoryPickerViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBComposerGroupCommerceCategoryPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)preferredStatusBarStyle;
- (void)didTapCancel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)newCellWithIdentifier:(id)arg1;
- (id)cellIdentifierAtIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_finishPicking;
- (void)viewDidLoad;
- (id)initWithCategories:(id)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;

@end

