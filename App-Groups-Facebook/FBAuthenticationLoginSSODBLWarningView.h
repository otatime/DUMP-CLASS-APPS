//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBAuthenticationRoundedImageView, FBRichTextView, UIActivityIndicatorView, UIButton;

@interface FBAuthenticationLoginSSODBLWarningView : UIView
{
    struct FBAuthenticationLoginSSODBLWarningMetrics _metrics;
    FBAuthenticationRoundedImageView *_roundedImage;
    FBRichTextView *_instructionTextView;
    UIButton *_continueSSOButton;
    UIButton *_goBackButton;
    UIActivityIndicatorView *_activityIndicator;
    id <FBAuthenticationLoginSSODBLDelegate> _delegate;
}

@property(nonatomic) __weak id <FBAuthenticationLoginSSODBLDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resetState;
- (struct CGSize)imageSize;
- (void)setImageURL:(id)arg1;
- (float)_getInstructionHeightConstrainedToSize:(struct CGSize)arg1;
- (void)_setDefaultInstructionText;
- (id)_makeGoBackButton;
- (id)_makeContinueSSOButton;
- (id)_makeInstructionTextView;
- (void)layoutSubviews;
- (void)_goBackButtonTapped:(id)arg1;
- (void)_continueSSOButtonTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 imageDownloader:(id)arg2 gatekeeper:(id)arg3;

@end
