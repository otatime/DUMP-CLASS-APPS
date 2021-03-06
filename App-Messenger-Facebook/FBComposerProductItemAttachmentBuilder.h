//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBNearbyPlace, NSNumber, NSString;

@interface FBComposerProductItemAttachmentBuilder : NSObject
{
    NSString *_title;
    NSNumber *_price;
    NSString *_pickupDeliveryInfo;
    NSString *_productDescription;
    NSString *_priceType;
    NSString *_priceCurrency;
    NSString *_categoryGraphQLID;
    FBNearbyPlace *_locationPage;
}

+ (id)composerProductItemAttachmentFromExistingComposerProductItemAttachment:(id)arg1;
+ (id)composerProductItemAttachment;
- (void).cxx_destruct;
- (id)withLocationPage:(id)arg1;
- (id)withCategoryGraphQLID:(id)arg1;
- (id)withPriceCurrency:(id)arg1;
- (id)withPriceType:(id)arg1;
- (id)withProductDescription:(id)arg1;
- (id)withPickupDeliveryInfo:(id)arg1;
- (id)withPrice:(id)arg1;
- (id)withTitle:(id)arg1;
- (id)build;

@end

