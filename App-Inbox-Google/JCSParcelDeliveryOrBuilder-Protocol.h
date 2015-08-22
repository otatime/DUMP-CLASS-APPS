//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class JCSAssignedId, JCSOrganization, JCSParcelDelivery_DeliveryStatusEnum, JCSProduct, JCSTime, NSString;

@protocol JCSParcelDeliveryOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JCSTime *)getPurchaseDate;
- (BOOL)hasPurchaseDate;
- (JCSParcelDelivery_DeliveryStatusEnum *)getDeliveryStatus;
- (BOOL)hasDeliveryStatus;
- (NSString *)getTotalPrice;
- (BOOL)hasTotalPrice;
- (JCSTime *)getExpectedArrivalDate;
- (BOOL)hasExpectedArrivalDate;
- (JCSOrganization *)getCarrier;
- (BOOL)hasCarrier;
- (JCSOrganization *)getSeller;
- (BOOL)hasSeller;
- (JCSProduct *)getItemShippedWithInt:(int)arg1;
- (id <JavaUtilList>)getItemShippedList;
- (int)getItemShippedCount;
- (NSString *)getTrackingNumber;
- (BOOL)hasTrackingNumber;
- (JCSAssignedId *)getAssignedId;
- (BOOL)hasAssignedId;
@end
