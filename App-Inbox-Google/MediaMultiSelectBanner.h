//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface MediaMultiSelectBanner : UIView
{
    UILabel *descriptionLabel_;
    UIButton *insertButton_;
    id <MediaMultiSelectBannerDelegate> _delegate;
}

@property(nonatomic) __weak id <MediaMultiSelectBannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)insertButtonTapped:(id)arg1;
- (void)createSubviews;
- (void)updateSelectionCount:(int)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
