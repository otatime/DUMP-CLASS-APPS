//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BTMockApplePayPaymentAuthorizationViewController, PKPayment;

@protocol BTMockApplePayPaymentAuthorizationViewControllerDelegate <NSObject>
- (void)mockApplePayPaymentAuthorizationViewControllerDidFinish:(BTMockApplePayPaymentAuthorizationViewController *)arg1;
- (void)mockApplePayPaymentAuthorizationViewController:(BTMockApplePayPaymentAuthorizationViewController *)arg1 didAuthorizePayment:(PKPayment *)arg2 completion:(void (^)(int))arg3;
@end

