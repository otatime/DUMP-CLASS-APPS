//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class CAAnimation, NSString, UIButton, UIImageView, UILabel, UITapGestureRecognizer;

@interface MNBaseNuxView : UIView <UIGestureRecognizerDelegate>
{
    UIImageView *_iconView;
    UIView *_backgroundView;
    UIImageView *_arrowView;
    UILabel *_textLabel;
    UIButton *_closeButton;
    struct CGRect _arrowFrame;
    UIImageView *_roundedCloseButton;
    BOOL _hasRoundedCorners;
    CAAnimation *_iconAnimation;
    UITapGestureRecognizer *_tapRecognizer;
    UIView *_arrowFrameRef;
    id <MNNuxViewDelegate> _delegate;
}

@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <MNNuxViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTap:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didMoveToWindow;
- (float)_textLeft;
- (void)setArrowFrame:(struct CGRect)arg1 fromView:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_applicationBecameActive:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 traits:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

