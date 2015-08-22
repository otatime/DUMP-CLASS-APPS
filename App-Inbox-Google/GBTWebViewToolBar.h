//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GIPWebViewToolbarProtocol.h"

@class NSString, UIButton;

@interface GBTWebViewToolBar : UIView <GIPWebViewToolbarProtocol>
{
    UIButton *previousButton_;
    UIButton *nextButton_;
    id <GBTWebViewToolBarDelegate> delegate;
}

@property(nonatomic) __weak id <GBTWebViewToolBarDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)nextButton:(id)arg1;
- (void)previousButton:(id)arg1;
- (void)setButton:(id)arg1 visible:(BOOL)arg2;
- (void)setForwardButtonEnabled:(BOOL)arg1;
- (void)setBackButtonEnabled:(BOOL)arg1;
- (void)hideSpinner;
- (void)showSpinner;
- (void)setVisibleURL:(id)arg1;
- (void)setBackButtonVisible:(BOOL)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
