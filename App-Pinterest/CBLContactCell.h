//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTableViewCell.h"

@class CBLFriend, UIButton;

@interface CBLContactCell : CBLTableViewCell
{
    BOOL _checkable;
    BOOL _hasSendButton;
    BOOL _checked;
    BOOL _hideContactImage;
    BOOL _hideMethodImage;
    BOOL _chooseDefaultEmail;
    BOOL _chooseDefaultPhoneNumber;
    BOOL _enabled;
    CBLFriend *_contact;
    id <CBLContactCellDelegate> _delegate;
    UIButton *_sendButton;
}

@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) __weak id <CBLContactCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL chooseDefaultPhoneNumber; // @synthesize chooseDefaultPhoneNumber=_chooseDefaultPhoneNumber;
@property(nonatomic) BOOL chooseDefaultEmail; // @synthesize chooseDefaultEmail=_chooseDefaultEmail;
@property(nonatomic) BOOL hideMethodImage; // @synthesize hideMethodImage=_hideMethodImage;
@property(nonatomic) BOOL hideContactImage; // @synthesize hideContactImage=_hideContactImage;
@property(nonatomic) BOOL checked; // @synthesize checked=_checked;
@property(nonatomic) BOOL hasSendButton; // @synthesize hasSendButton=_hasSendButton;
@property(nonatomic) BOOL checkable; // @synthesize checkable=_checkable;
@property(retain, nonatomic) CBLFriend *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)sendPressed:(id)arg1;
- (void)formatAccessory;
- (struct UIEdgeInsets)layoutMargins;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

