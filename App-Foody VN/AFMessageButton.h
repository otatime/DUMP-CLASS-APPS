//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface AFMessageButton : UIView
{
    UIButton *_dismissButton;
    UIButton *_actionButton;
}

@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
- (void).cxx_destruct;
- (id)buttonWithTitle:(id)arg1 titleColor:(id)arg2 backgroundColor:(id)arg3;
- (void)setupConstraints;
- (id)initWithTarget:(id)arg1 dismissTitle:(id)arg2 dismissSelector:(SEL)arg3 actionTitle:(id)arg4 actionSelector:(SEL)arg5;

@end
