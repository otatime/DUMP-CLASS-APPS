//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class FBItemView_DEPRECATED, FBMemPerson, FBNetworkImageView, FBUserSession, UIButton, UIImageView, UIView;

@interface FBGroupsPendingMembersViewCell : UITableViewCell
{
    FBUserSession *_session;
    FBMemPerson *_person;
    FBItemView_DEPRECATED *_summaryView;
    FBNetworkImageView *_photoView;
    id <FBGroupsPendingMembersViewConfig> _config;
    UIImageView *_memberAddedImageView;
    UIView *_buttonsView;
    UIButton *_approveButton;
    UIButton *_blockButton;
    UIButton *_ignoreButton;
    float _extraButtonViewVerticalPadding;
    id <FBGroupsPendingMembersViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <FBGroupsPendingMembersViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setSubviewBackgroundColors:(id)arg1;
- (id)_makeButtonWithTitle:(id)arg1 titleColor:(id)arg2 backgroundColor:(id)arg3 action:(SEL)arg4;
- (void)_blockButtonTapped:(id)arg1;
- (void)_ignoreButtonTapped:(id)arg1;
- (void)_approveButtonTapped:(id)arg1;
- (void)_updateButtonsBackgroundColor;
- (void)setTertiarySubtitle:(id)arg1;
- (void)setSecondarySubtitle:(id)arg1;
- (void)setPrimarySubtitle:(id)arg1;
- (void)setShowCheckmark:(BOOL)arg1;
- (void)setShowBlockButton:(BOOL)arg1;
- (void)setShowButtons:(BOOL)arg1;
- (void)setPerson:(id)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHasSeparator:(BOOL)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForReuse;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (id)initWithSession:(id)arg1 reuseIdentifier:(id)arg2 viewConfig:(id)arg3;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
