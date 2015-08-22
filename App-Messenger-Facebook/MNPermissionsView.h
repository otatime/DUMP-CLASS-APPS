//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBMPermissionsViewConfiguration, UIButton;

@interface MNPermissionsView : UIView
{
    FBMPermissionsViewConfiguration *_configuration;
    UIView *_contentContainerView;
    UIButton *_actionButton;
    UIButton *_dismissButton;
    id <MNPermissionsViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MNPermissionsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_dismissButtonPressed:(id)arg1;
- (void)_actionButtonPressed:(id)arg1;
- (void)_layoutDismissButtonIfNeeded;
- (void)_layoutContentContainer;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 shouldShowActionButton:(BOOL)arg2;

@end

