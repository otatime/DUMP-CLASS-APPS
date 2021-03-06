//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class FBNetworkImageView, FBUserSession, NSString, NSURL, UIButton, UIColor, UIView;

@interface FBGroupsTabSectionHeaderView : UICollectionReusableView
{
    FBUserSession *_session;
    UIButton *_titleButton;
    UIButton *_rightAccessoryButton;
    FBNetworkImageView *_iconView;
    UIView *_disclosureView;
    UIView *_verticalSeparator;
    UIView *_bottomSeparator;
    BOOL _showDisclosureArrow;
    BOOL _showRightAccessoryButton;
    BOOL _showBottomSeparator;
    BOOL _showVerticalSeparator;
    UIColor *_separatorColor;
}

@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) BOOL showVerticalSeparator; // @synthesize showVerticalSeparator=_showVerticalSeparator;
@property(nonatomic) BOOL showBottomSeparator; // @synthesize showBottomSeparator=_showBottomSeparator;
@property(nonatomic) BOOL showRightAccessoryButton; // @synthesize showRightAccessoryButton=_showRightAccessoryButton;
@property(nonatomic) BOOL showDisclosureArrow; // @synthesize showDisclosureArrow=_showDisclosureArrow;
- (void).cxx_destruct;
- (float)_separatorThickness;
- (void)removeTitleTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)addTitleTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)setRightAccessoryButton:(id)arg1;
@property(readonly, nonatomic) UIButton *rightAccessoryButton;
@property(retain, nonatomic) UIColor *titleColor;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSURL *iconURL;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)configureWithSession:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

