//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMemCreditCard, FBMemPeerToPeerPaymentMethod, FBPaymentsPeerToPeerCardFlowController, NSError, NSString;

@protocol FBPaymentsPeerToPeerCardFlowControllerDelegate <NSObject>
- (void)peerToPeerCardFlowController:(FBPaymentsPeerToPeerCardFlowController *)arg1 willVerifyCSCforPaymentMethod:(FBMemPeerToPeerPaymentMethod *)arg2 forAnalyticsUUID:(NSString *)arg3;
- (void)peerToPeerCardFlowController:(FBPaymentsPeerToPeerCardFlowController *)arg1 didAddCard:(FBMemCreditCard *)arg2 didVerifyPaymentMethod:(FBMemPeerToPeerPaymentMethod *)arg3 forAnalyticsUUID:(NSString *)arg4;
- (void)peerToPeerCardFlowController:(FBPaymentsPeerToPeerCardFlowController *)arg1 didCancelCardFlowWithError:(NSError *)arg2 forAnalyticsUUID:(NSString *)arg3;
@end

