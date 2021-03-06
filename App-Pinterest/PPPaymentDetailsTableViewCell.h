//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSDecimalNumber, NSString, PayPalItem, UILabel;

@interface PPPaymentDetailsTableViewCell : UITableViewCell
{
    BOOL _isBold;
    BOOL _isFirstRow;
    PayPalItem *_item;
    NSString *_title;
    NSDecimalNumber *_amount;
    NSString *_currencyCode;
    float _itemHeight;
    float _defaultQuantityWidth;
    float _defaultExtendedPriceWidth;
    UILabel *_extendedPriceLabel;
    UILabel *_quantityLabel;
    UILabel *_unitPriceLabel;
    UILabel *_nameLabel;
    int _textAlignment;
    int _reverseTextAlignment;
}

+ (float)cellHeightIsFirstOrLast:(BOOL)arg1;
@property(nonatomic) int reverseTextAlignment; // @synthesize reverseTextAlignment=_reverseTextAlignment;
@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *unitPriceLabel; // @synthesize unitPriceLabel=_unitPriceLabel;
@property(retain, nonatomic) UILabel *quantityLabel; // @synthesize quantityLabel=_quantityLabel;
@property(retain, nonatomic) UILabel *extendedPriceLabel; // @synthesize extendedPriceLabel=_extendedPriceLabel;
@property(nonatomic) float defaultExtendedPriceWidth; // @synthesize defaultExtendedPriceWidth=_defaultExtendedPriceWidth;
@property(nonatomic) float defaultQuantityWidth; // @synthesize defaultQuantityWidth=_defaultQuantityWidth;
@property(nonatomic) float itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) BOOL isFirstRow; // @synthesize isFirstRow=_isFirstRow;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(nonatomic) BOOL isBold; // @synthesize isBold=_isBold;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) PayPalItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1 isFirstRow:(BOOL)arg2;

@end

