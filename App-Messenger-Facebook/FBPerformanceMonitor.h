//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBPerformanceMonitorViewController;

@interface FBPerformanceMonitor : NSObject
{
    FBPerformanceMonitorViewController *_performanceMonitorViewController;
}

+ (void)removeAllMetrics:(id)arg1;
+ (void)removeMetric:(id)arg1;
+ (void)addMetric:(id)arg1;
+ (void)detatchPerformanceMonitorFromWindow;
+ (void)attachPerformanceMonitorToWindow:(id)arg1;
+ (id)performanceMonitor;
- (void).cxx_destruct;
- (void)_destroyViewController;
- (void)_createViewControllerIfNeeded;
- (void)_attachViewControllerToView:(id)arg1;
- (id)init;

@end

