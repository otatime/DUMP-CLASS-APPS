//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLModelObject.h"

@class NSString;

@interface CBLProductRichOfferSummary : CBLModelObject
{
    int _inStock;
    NSString *_price;
    NSString *_minPrice;
    NSString *_maxPrice;
    NSString *_standardPrice;
    NSString *_saleStartDate;
    NSString *_saleEndDate;
}

+ (id)propertyAliases;
@property(readonly, copy, nonatomic) NSString *saleEndDate; // @synthesize saleEndDate=_saleEndDate;
@property(readonly, copy, nonatomic) NSString *saleStartDate; // @synthesize saleStartDate=_saleStartDate;
@property(readonly, copy, nonatomic) NSString *standardPrice; // @synthesize standardPrice=_standardPrice;
@property(readonly, copy, nonatomic) NSString *maxPrice; // @synthesize maxPrice=_maxPrice;
@property(readonly, copy, nonatomic) NSString *minPrice; // @synthesize minPrice=_minPrice;
@property(readonly, copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(readonly, nonatomic) int inStock; // @synthesize inStock=_inStock;
- (void).cxx_destruct;
- (id)init;

@end

