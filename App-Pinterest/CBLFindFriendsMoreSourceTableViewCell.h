//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton;

@interface CBLFindFriendsMoreSourceTableViewCell : UITableViewCell
{
    id <CBLFindFriendsMoreSourceTableViewCellDelegate> _delegate;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <CBLFindFriendsMoreSourceTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapButton:(id)arg1;
- (void)updateButtonStyleForSource:(id)arg1;
- (void)updateWithSource:(id)arg1;
- (void)updateConstraints;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

