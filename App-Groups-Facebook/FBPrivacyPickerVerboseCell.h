//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FBPrivacyTokenableOptionTableViewCell.h"

@class FBNetworkImageView, FBPrivacyPickerCellContentSummary, UIControl, UIImage, UIImageView, UIView;

@interface FBPrivacyPickerVerboseCell : UITableViewCell <FBPrivacyTokenableOptionTableViewCell>
{
    UIImageView *_checkmarkView;
    UIImage *_defaultImage;
    UIImage *_checkedImage;
    UIView *_imageContainer;
    FBNetworkImageView *_networkImageView;
    FBPrivacyPickerCellContentSummary *_cellContentSummary;
    BOOL _checked;
    BOOL _enabled;
    BOOL _hasEditButton;
}

@property(nonatomic) BOOL hasEditButton; // @synthesize hasEditButton=_hasEditButton;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL checked; // @synthesize checked=_checked;
- (void).cxx_destruct;
- (void)_updateAccessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)updateContentSummary:(id)arg1;
- (void)_updateCheckmarkViewImage;
- (void)layoutSubviews;
- (struct UIEdgeInsets)contentInsets;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 defaultImage:(id)arg3 checkedImage:(id)arg4 session:(id)arg5;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(retain, nonatomic) UIControl *accessoryView; // @dynamic accessoryView;

@end
