//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BTDropInViewController, BTPaymentMethod;

@protocol BTDropInViewControllerDelegate <NSObject>
- (void)dropInViewControllerDidCancel:(BTDropInViewController *)arg1;
- (void)dropInViewController:(BTDropInViewController *)arg1 didSucceedWithPaymentMethod:(BTPaymentMethod *)arg2;

@optional
- (void)dropInViewControllerWillComplete:(BTDropInViewController *)arg1;
@end

