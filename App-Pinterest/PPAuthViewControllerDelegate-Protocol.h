//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PPAuthViewController;

@protocol PPAuthViewControllerDelegate <NSObject>
- (void)authorizeWithPhoneNumber:(NSString *)arg1 phoneCountryCode:(NSString *)arg2 PIN:(NSString *)arg3 forAuthViewController:(PPAuthViewController *)arg4 complete:(void (^)(int, PPServiceResponse *))arg5;
- (void)authorizeWithEmail:(NSString *)arg1 password:(NSString *)arg2 forAuthViewController:(PPAuthViewController *)arg3 complete:(void (^)(int, PPServiceResponse *))arg4;
- (void)userDidSucceedAuthViewController:(PPAuthViewController *)arg1;
- (void)userDidCancelAuthViewController:(PPAuthViewController *)arg1;
@end

