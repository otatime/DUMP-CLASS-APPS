//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GOOAlertViewDelegate.h"
#import "ModalViewController.h"
#import "RecipientAutocompleteViewControllerDelegate.h"
#import "TopToolBarDataSource.h"
#import "TopToolBarDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, RecipientAutocompleteViewController, TopToolBar, UIButton, UILabel, UITextField, UIView;

@interface InvitesViewController : UIViewController <GOOAlertViewDelegate, RecipientAutocompleteViewControllerDelegate, TopToolBarDataSource, TopToolBarDelegate, UITextFieldDelegate, ModalViewController>
{
    RecipientAutocompleteViewController *autocomplete_;
    UIButton *inviteButton_;
    UIView *scrimView_;
    UIView *separatorBottom_;
    UIView *separatorTop_;
    UIView *textContainer_;
    UITextField *textField_;
    TopToolBar *toolbar_;
    UIView *warning_;
    UILabel *warningLabel_;
    id <ModalViewControllerDelegate> modalViewControllerDelegate;
    id <InvitesViewControllerDelegate> _delegate;
}

@property(nonatomic) id <InvitesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ModalViewControllerDelegate> modalViewControllerDelegate; // @synthesize modalViewControllerDelegate;
- (void).cxx_destruct;
- (void)updateInviteButtonAndWarning;
- (void)updateAutocomplete;
- (void)inviteButtonTapped;
- (void)createToolBarButtons;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)topToolBarDidSelectLeftButton:(id)arg1;
- (id)rightButtonsForTopToolBar:(id)arg1;
- (id)middleButtonsForTopToolBar:(id)arg1;
- (void)recipientAutocompleteViewController:(id)arg1 didSelectToken:(id)arg2;
- (void)alertViewDidDisappear:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)updateViewForShow:(BOOL)arg1;
- (void)focusInputField;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

