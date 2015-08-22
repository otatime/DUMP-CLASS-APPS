//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface ReminderPromoView : UIView
{
    UIView *backgroundView_;
    UILabel *promoLabel_;
    UIImageView *imageView_;
    UIButton *createReminderButton_;
    UIButton *dismissButton_;
    UIView *dropShadow_;
    id <JBTTutorial> _tutorial;
    id <ReminderPromoViewDelegate> _delegate;
}

@property(nonatomic) __weak id <ReminderPromoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <JBTTutorial> tutorial; // @synthesize tutorial=_tutorial;
- (void).cxx_destruct;
- (void)createReminder;
- (void)dismissPromo;
- (void)layoutSubviews;
- (float)horizontalMargin;
- (void)maybeResizeButtonsWidth;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)buttonWithTitle:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
