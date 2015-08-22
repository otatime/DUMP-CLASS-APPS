//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class CBLSearchBar, NSString, UIImageView, UILabel, UITextView;

@interface CBLSendMessageSearchView : UIView <UITextViewDelegate>
{
    BOOL _editing;
    id <CBLSendMessageSearchViewDelegate> _delegate;
    CBLSearchBar *_userSearchBar;
    NSString *_messageText;
    UILabel *_placeholderLabel;
    UIImageView *_objectImageView;
    UITextView *_messageTextView;
    UIView *_dummyGestureView;
}

+ (float)totalHeightForSendMessageSearchViewForWidth:(float)arg1 isEditing:(BOOL)arg2;
@property(retain, nonatomic) UIView *dummyGestureView; // @synthesize dummyGestureView=_dummyGestureView;
@property(retain, nonatomic) UITextView *messageTextView; // @synthesize messageTextView=_messageTextView;
@property(retain, nonatomic) UIImageView *objectImageView; // @synthesize objectImageView=_objectImageView;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(nonatomic) BOOL editing; // @synthesize editing=_editing;
@property(retain, nonatomic) CBLSearchBar *userSearchBar; // @synthesize userSearchBar=_userSearchBar;
@property(nonatomic) __weak id <CBLSendMessageSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)setImageURL:(id)arg1 forObjectClass:(Class)arg2;
- (void)layoutTextView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
