//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIntentTarget.h"

@class FBMemCommerceStoreShare, NSString;

@interface FBStoreFrontIntentTarget : FBIntentTarget
{
    NSString *_pageID;
    NSString *_selectedProductID;
}

+ (id)storeFrontTargetWithPageID:(id)arg1 selectedProductID:(id)arg2;
+ (id)storeFrontTargetWithCommerceStoreShare:(id)arg1;
@property(readonly, copy, nonatomic) NSString *selectedProductID; // @synthesize selectedProductID=_selectedProductID;
@property(readonly, copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)fallbackURLs;
- (BOOL)isStoreFrontIntentTarget;
@property(readonly, nonatomic) FBMemCommerceStoreShare *commerceStoreShare;

@end
