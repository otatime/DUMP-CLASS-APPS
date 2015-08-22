//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBBugReportCoordinator, UIButton, UIImageView, UILabel;

@interface FBBugReportThankYouView : UIView
{
    UILabel *_messageLabel;
    UIImageView *_imageView;
    UIView *_divider;
    float _margin;
    float _imageWidth;
    float _imageHeight;
    float _dividerHeight;
    float _okButtonHeight;
    float _dialogMaxWidth;
    FBBugReportCoordinator *_coordinator;
    UIButton *_okButton;
}

@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
- (void).cxx_destruct;
- (float)heightForLabelText:(float)arg1;
- (void)setupLayoutParameters;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)unhighlightButton;
- (void)highlightButton;
- (id)initWithFrame:(struct CGRect)arg1 coordinator:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

