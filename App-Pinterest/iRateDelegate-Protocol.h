//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol iRateDelegate <NSObject>

@optional
- (void)iRateDidOpenAppStore;
- (BOOL)iRateShouldOpenAppStore;
- (void)iRateUserDidRequestReminderToRateApp;
- (void)iRateUserDidDeclineToRateApp;
- (void)iRateUserDidAttemptToRateApp;
- (void)iRateDidPromptForRating;
- (BOOL)iRateShouldPromptForRating;
- (void)iRateDidDetectAppUpdate;
- (void)iRateCouldNotConnectToAppStore:(NSError *)arg1;
@end

