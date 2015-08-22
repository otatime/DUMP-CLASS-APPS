//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FBPlacePickerSearchBarProtocol.h"
#import "UITextFieldDelegate.h"

@class FBTextField, NSString, UIImageView;

@interface FBActivitySharingGenericSearchField : UITableViewCell <UITextFieldDelegate, FBPlacePickerSearchBarProtocol>
{
    FBTextField *_searchField;
    UIImageView *_searchImage;
    id <FBPlacePickerSearchBarDelegate> _delegate;
}

@property(nonatomic) __weak id <FBPlacePickerSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)searchFieldDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *placeholder;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_toggleCancelButton;
- (void)clearInputText;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1 initialText:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
