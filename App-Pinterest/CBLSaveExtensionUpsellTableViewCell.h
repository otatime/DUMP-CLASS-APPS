//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionTableViewCell.h"

@class CBLMultilineLabel, UIButton;

@interface CBLSaveExtensionUpsellTableViewCell : CBLTraitCollectionTableViewCell
{
    id <CBLSaveExtensionUpsellTableViewCellDelegate> _delegate;
    CBLMultilineLabel *_titleLabel;
    CBLMultilineLabel *_detailLabel;
    UIButton *_showMeButton;
}

@property(retain, nonatomic) UIButton *showMeButton; // @synthesize showMeButton=_showMeButton;
@property(retain, nonatomic) CBLMultilineLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) CBLMultilineLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <CBLSaveExtensionUpsellTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapShowMe:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

