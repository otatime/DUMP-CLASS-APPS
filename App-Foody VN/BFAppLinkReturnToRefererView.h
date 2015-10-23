//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BFAppLink, UIButton, UIColor, UILabel, UITapGestureRecognizer;

@interface BFAppLinkReturnToRefererView : UIView
{
    BOOL _closed;
    id <BFAppLinkReturnToRefererViewDelegate> _delegate;
    UIColor *_textColor;
    BFAppLink *_refererAppLink;
    int _includeStatusBarInSize;
    UILabel *_labelView;
    UIButton *_closeButton;
    UITapGestureRecognizer *_insideTapGestureRecognizer;
    UIView *_viewToMoveWithNavController;
}

@property(retain, nonatomic) UIView *viewToMoveWithNavController; // @synthesize viewToMoveWithNavController=_viewToMoveWithNavController;
@property(retain, nonatomic) UITapGestureRecognizer *insideTapGestureRecognizer; // @synthesize insideTapGestureRecognizer=_insideTapGestureRecognizer;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *labelView; // @synthesize labelView=_labelView;
@property(nonatomic) BOOL closed; // @synthesize closed=_closed;
@property(nonatomic) int includeStatusBarInSize; // @synthesize includeStatusBarInSize=_includeStatusBarInSize;
@property(retain, nonatomic) BFAppLink *refererAppLink; // @synthesize refererAppLink=_refererAppLink;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) __weak id <BFAppLinkReturnToRefererViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onTapInside:(id)arg1;
- (void)closeButtonTapped:(id)arg1;
- (BOOL)hasRefererData;
- (id)localizedLabelForReferer:(id)arg1;
- (id)drawCloseButtonImageWithColor:(id)arg1;
- (void)updateColors;
- (void)updateLabelText;
- (float)statusBarHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
