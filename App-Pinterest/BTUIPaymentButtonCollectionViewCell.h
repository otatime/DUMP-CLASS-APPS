//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSMutableArray, UIControl;

@interface BTUIPaymentButtonCollectionViewCell : UICollectionViewCell
{
    UIControl *_paymentButton;
    NSMutableArray *_paymentButtonConstraints;
}

@property(retain, nonatomic) NSMutableArray *paymentButtonConstraints; // @synthesize paymentButtonConstraints=_paymentButtonConstraints;
@property(retain, nonatomic) UIControl *paymentButton; // @synthesize paymentButton=_paymentButton;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

