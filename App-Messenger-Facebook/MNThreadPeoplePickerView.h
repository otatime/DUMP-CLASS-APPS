//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIButton, UIImageView, UILabel;

@interface MNThreadPeoplePickerView : UIView
{
    UIButton *_backgroundButton;
    UILabel *_toLabel;
    UILabel *_nameLabel;
    UIImageView *_addButton;
    UIView *_bottomDivider;
    NSArray *_users;
    id <MNThreadPeoplePickerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MNThreadPeoplePickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *users; // @synthesize users=_users;
- (void).cxx_destruct;
- (void)_didTapButton;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

