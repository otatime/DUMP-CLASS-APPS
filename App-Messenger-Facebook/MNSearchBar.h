//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIToolbar.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UITextField, UIView;

@interface MNSearchBar : UIToolbar <UITextFieldDelegate>
{
    id <MNSearchBarDelegate> _searchDelegate;
    float _topInset;
    UIView *_searchLeftView;
    UITextField *_textField;
    UIButton *_cancelButton;
}

@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIView *searchLeftView; // @synthesize searchLeftView=_searchLeftView;
@property(nonatomic) float topInset; // @synthesize topInset=_topInset;
@property(nonatomic) __weak id <MNSearchBarDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (void).cxx_destruct;
- (void)_textDidChange:(id)arg1;
- (void)_cancelClicked;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

