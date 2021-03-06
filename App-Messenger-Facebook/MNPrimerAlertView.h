//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSObject<MNPrimerViewDelegate>, UIButton, UIImageView, UILabel;

@interface MNPrimerAlertView : UIView
{
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_cancelButton;
    UIButton *_okButton;
    UIImageView *_arrowView;
    BOOL _shouldBounceArrow;
    BOOL _allowCancel;
    NSObject<MNPrimerViewDelegate> *_delegate;
}

@property(nonatomic) BOOL allowCancel; // @synthesize allowCancel=_allowCancel;
@property(nonatomic) __weak NSObject<MNPrimerViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showInView:(id)arg1;
- (void)_startArrowViewBouncingAnimation;
- (void)_dismiss;
- (void)_drawLine:(struct CGContext *)arg1 startPoint:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3;
- (struct CGSize)_messageTextSizeThatFitsSize:(struct CGSize)arg1;
- (struct CGSize)_titleTextSizeThatFitsSize:(struct CGSize)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_presentWithPopUpAnimation;
- (void)_okButtonPressed:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 okButtonTitle:(id)arg5 shouldBounceArrow:(BOOL)arg6 highlightOkButton:(BOOL)arg7;

@end

