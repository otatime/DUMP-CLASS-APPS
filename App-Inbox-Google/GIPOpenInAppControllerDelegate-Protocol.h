//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GIPApp, NSError, NSURL, UIViewController;

@protocol GIPOpenInAppControllerDelegate <NSObject>

@optional
- (void)notifyError:(NSError *)arg1 openingAppStorePageForApp:(GIPApp *)arg2;
- (void)dismissViewController;
- (void)presentViewController:(UIViewController *)arg1;
- (void)notifyErrorOpeningURL:(NSURL *)arg1;
- (BOOL)openURL:(NSURL *)arg1;
@end
