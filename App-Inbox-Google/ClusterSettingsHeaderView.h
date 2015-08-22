//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface ClusterSettingsHeaderView : UIView
{
    UILabel *commonMessage_;
    UILabel *descriptionLabel_;
    UIButton *learnMore_;
    id <ClusterSettingsHeaderViewDelegate> _delegate;
}

+ (void)initialize;
@property(nonatomic) __weak id <ClusterSettingsHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)learnMoreTapped:(id)arg1;
- (void)boldClusterName:(id)arg1 inMessage:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateWithClusterConfig:(id)arg1;

@end
