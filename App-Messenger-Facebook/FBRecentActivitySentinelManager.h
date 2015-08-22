//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBRecentActivitySentinelManager : NSObject
{
}

+ (id)bugReportWhiteListedEventList;
+ (void)recentActivitySentinelOnlyEventDidOccur:(int)arg1 eventName:(id)arg2 extra:(id)arg3;
+ (void)significantEventDidOccur:(id)arg1 module:(id)arg2 extraBlock:(CDUnknownBlockType)arg3;
+ (void)significantEventDidOccur:(id)arg1 module:(id)arg2 extra:(id)arg3;
+ (id)customizeActivitiesBeforeReport:(id)arg1 fromSession:(int)arg2;
+ (void)recentActivitySentinelOnlyEventDidOccur:(int)arg1 eventName:(id)arg2;
+ (id)recentActivitiesFromPreviousSession:(int)arg1;
+ (id)recentActivitiesFromCurrentSession:(int)arg1 convertEventsToStrings:(BOOL)arg2;
+ (void)setupSentinelsIfNeeded;
+ (void)setupStartupChannel;
+ (void)setupLigerChannel;
+ (void)setupComposerChannel;
+ (void)setupSentinels;
+ (void)setupWebImageChannel;
+ (void)setupInstantArticleChannel;
+ (void)setupPagesManagerReportingChannel;
+ (void)setupStarRatingsChannel;
+ (void)setupPlaceTipsReportingChannel;
+ (void)setupWebViewChannel;
+ (void)setupBugReportingChannel;
+ (void)setupPerformanceReportingChannel;
+ (void)setupNotificationsAnalyticsReportingChannel;
+ (void)setupCrashReportingChannel;
+ (void)clearQueue;
+ (void)processEvent:(id)arg1;
+ (void)setupColdStartTimerIfNeeded;
+ (double)delayForDevice;

@end
