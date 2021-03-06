//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBComposerGroupCommerceCategoryPickerViewControllerDelegate.h"
#import "FBComposerPickerController.h"

@class FBComposerGroupCommerceCategoryPickerViewController, FBUserSession, NSOrderedSet, NSString;

@interface FBComposerGroupCommerceCategoryPickerController : NSObject <FBComposerGroupCommerceCategoryPickerViewControllerDelegate, FBComposerPickerController>
{
    FBUserSession *_session;
    FBComposerGroupCommerceCategoryPickerViewController *_viewController;
    BOOL _isInPopover;
    NSOrderedSet *_categories;
    id <FBComposerGroupCommerceCategoryPickerControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBComposerGroupCommerceCategoryPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)groupCommerceCategoryPickerViewControllerDidSelectCategory:(id)arg1;
- (void)groupCommerceCategoryPickerViewControllerDidFinishCanceled:(BOOL)arg1;
- (void)dismissPopoverController;
- (struct CGSize)contentSizeForViewInPopover;
- (id)presentableViewController;
- (struct CGSize)popoverContentSizeForOrientation:(int)arg1;
- (unsigned int)popoverStyle;
- (id)initWithUserSession:(id)arg1 categories:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

