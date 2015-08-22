//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class JCSAssignedId, JCSOrganization, JCSProduct, JCSTime, NSString;

@protocol JCSOrderOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JCSTime *)getExpectedArrivalDate;
- (BOOL)hasExpectedArrivalDate;
- (JCSTime *)getPurchaseDate;
- (BOOL)hasPurchaseDate;
- (NSString *)getTotalPrice;
- (BOOL)hasTotalPrice;
- (JCSProduct *)getProductWithInt:(int)arg1;
- (id <JavaUtilList>)getProductList;
- (int)getProductCount;
- (JCSOrganization *)getSeller;
- (BOOL)hasSeller;
- (JCSAssignedId *)getAssignedId;
- (BOOL)hasAssignedId;
@end
