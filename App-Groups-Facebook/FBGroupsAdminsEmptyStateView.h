//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBButton, UIActivityIndicatorView, UIColor, UILabel;

@interface FBGroupsAdminsEmptyStateView : UIView
{
    UILabel *_noAdminsLabel;
    FBButton *_becomeAdminButton;
    FBButton *_suggestAdminButton;
    UIActivityIndicatorView *_claimingAdminshipLoadingView;
    id <THAdminsEmptyStateViewDelegate> _delegate;
    UIColor *_enabledButtonColor;
    UIColor *_disabledButtonColor;
    UIColor *_labelTextColor;
}

@property(retain, nonatomic) UIColor *labelTextColor; // @synthesize labelTextColor=_labelTextColor;
@property(retain, nonatomic) UIColor *disabledButtonColor; // @synthesize disabledButtonColor=_disabledButtonColor;
@property(retain, nonatomic) UIColor *enabledButtonColor; // @synthesize enabledButtonColor=_enabledButtonColor;
@property(nonatomic) __weak id <THAdminsEmptyStateViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateButtonsTitleColor;
- (void)_updateButtonTitleColor:(id)arg1;
- (void)_tappedSuggestAdminButton:(id)arg1;
- (void)_tappedMakeAdminButton:(id)arg1;
- (void)showAdminButtons:(BOOL)arg1;
- (void)adminRequestDidEnd;
- (id)initWithFrame:(struct CGRect)arg1;

@end
