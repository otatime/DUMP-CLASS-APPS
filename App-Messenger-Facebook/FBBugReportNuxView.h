//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface FBBugReportNuxView : UIView
{
    UIImageView *_imageView;
    UILabel *_labelView;
    UIView *_longDividerBottom;
    UIButton *_cancelButton;
    UIView *_verticalDividerBetweenButtons;
    float _margin;
    float _imageWidth;
    float _imageHeight;
    float _dividerHeight;
    float _buttonHeight;
    float _dialogMaxWidth;
    UIButton *_okButton;
}

@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
- (void).cxx_destruct;
- (void)initializeLayoutParameters;
- (float)heightForLabelText;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

