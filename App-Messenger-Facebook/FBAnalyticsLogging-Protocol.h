//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAnalyticsInfoSource.h"
#import "NSObject.h"

@class NSArray, NSDictionary, NSString, NSURL, UIViewController;

@protocol FBAnalyticsLogging <NSObject, FBAnalyticsInfoSource>
+ (UIViewController *)analyticsPresentedViewController;
@property(readonly, copy, nonatomic) NSDictionary *analyticsContentEventExtra;
@property(readonly, copy, nonatomic) UIViewController *analyticsPresentedViewController;
@property(readonly, copy, nonatomic) NSDictionary *analyticsSourceExtras;
@property(readonly, copy, nonatomic) NSDictionary *analyticsExtras;
@property(readonly, copy, nonatomic) NSString *analyticsUUID;
@property(readonly, copy, nonatomic) NSString *analyticsModule;
@property(readonly, nonatomic) BOOL analyticsHasCachedNetworkContent;
@property(readonly, nonatomic) BOOL analyticsRequiresNetworkContent;
@property(copy, nonatomic) NSString *analyticsFromModule;
@property(copy, nonatomic) NSArray *analyticsFromTrackingCodes;
@property(retain, nonatomic) NSURL *analyticsFromURL;
@property(readonly, retain, nonatomic) NSURL *analyticsDestinationURL;
@property(nonatomic) UIViewController *analyticsContentDelegate;
@property(readonly, nonatomic) BOOL analyticsAutomaticallyLogContent;
- (void)analyticsLogWillShowWithOptions:(NSDictionary *)arg1;
- (void)analyticsLogWillShow;
- (void)analyticsLogDidHideWithOptions:(NSDictionary *)arg1;
- (void)analyticsLogDidHide;
- (void)analyticsLogManualRefresh;
- (void)analyticsLogCachedNetworkContentComplete;
- (void)analyticsLogNetworkContentComplete;
- (void)analyticsLogLocalContentComplete;
- (void)analyticsLogContentComplete;
- (void)analyticsLogContent;
- (void)analyticsLogContentIfAutomatic;
@end

