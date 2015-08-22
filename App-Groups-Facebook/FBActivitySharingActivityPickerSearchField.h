//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FBActivityTaggingSearchFieldProtocol.h"
#import "UISearchBarDelegate.h"
#import "UITextFieldDelegate.h"

@class FBActivitySharingAudioActivityIndicatorButton, NSString, UIButton, UIImageView, UILabel, UITextField;

@interface FBActivitySharingActivityPickerSearchField : UITableViewCell <UISearchBarDelegate, UITextFieldDelegate, FBActivityTaggingSearchFieldProtocol>
{
    UITextField *_searchField;
    UILabel *_activityLabel;
    UIButton *_backButton;
    UIImageView *_searchIcon;
    BOOL _backButtonHidden;
    id <FBActivitySharingActivityPickerSearchFieldDelegate> _delegate;
    FBActivitySharingAudioActivityIndicatorButton *_audioActivityIndicatorButton;
}

@property(nonatomic) FBActivitySharingAudioActivityIndicatorButton *audioActivityIndicatorButton; // @synthesize audioActivityIndicatorButton=_audioActivityIndicatorButton;
@property(nonatomic) BOOL backButtonHidden; // @synthesize backButtonHidden=_backButtonHidden;
@property(nonatomic) __weak id <FBActivitySharingActivityPickerSearchFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)searchFieldDidChange:(id)arg1;
- (void)_didTapSearchField:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_backButtonTapped:(id)arg1;
- (void)clearInputText;
- (void)setPlaceholder:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (id)text;
- (void)dealloc;
- (void)_toggleAudioActivityIndicator;
- (void)_toggleCancelButton;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
