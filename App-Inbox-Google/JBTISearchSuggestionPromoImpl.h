//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTSuggestionPromo.h"

@class JBTSuggestionPromo_PromoTypeEnum, JavaLangInteger, NSString;

@interface JBTISearchSuggestionPromoImpl : NSObject <JBTSuggestionPromo>
{
    JBTSuggestionPromo_PromoTypeEnum *promoType_;
    JavaLangInteger *campaignId_;
    NSString *promoId_;
    NSString *promoText_;
    NSString *promoHint_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_promoHint_;
+ (id)__annotations_getPromoHint;
+ (id)__annotations_initWithJBTSuggestionPromo_PromoTypeEnum_withJavaLangInteger_withNSString_withNSString_withNSString__params;
- (void)dealloc;
- (id)getPromoHint;
- (id)getPromoText;
- (id)getPromoId;
- (id)getCampaignId;
- (id)getPromoType;
- (id)initWithJBTSuggestionPromo_PromoTypeEnum:(id)arg1 withJavaLangInteger:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

