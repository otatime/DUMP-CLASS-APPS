//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRBreadcrumbsArchive;

@interface CRNewBreadcrumbs : NSObject
{
    CRBreadcrumbsArchive *_archive;
}

+ (id)extractEndpoints;
+ (id)extractEndpointsFrom:(double)arg1 toEndTime:(double)arg2;
+ (id)extractSystemBreadcrumbs;
+ (id)extractSystemBreadcrumbsFrom:(double)arg1 toEndTime:(double)arg2;
+ (void)leaveCrashBreadcrumb:(id)arg1 withReason:(id)arg2 withTimestamp:(id)arg3;
+ (void)leaveErrorBreadcrumb:(id)arg1 withReason:(id)arg2;
+ (void)leaveViewBreadcrumb:(int)arg1 withViewName:(id)arg2;
+ (void)leaveReachabilityBreadcrumb:(int)arg1 fromType:(id)arg2 toType:(id)arg3;
+ (void)leaveReachabilityBreadcrumb:(int)arg1 forType:(id)arg2;
+ (void)leaveReachabilityBreadcrumb:(int)arg1;
+ (void)leaveEventBreadcrumb:(id)arg1;
+ (void)leaveNetworkBreadcrumb:(id)arg1;
+ (void)leaveUserBreadcrumb:(id)arg1 withPriority:(int)arg2;
+ (id)networkBreadcrumbs;
+ (id)systemBreadcrumbs;
+ (id)userBreadcrumbs;
@property(readonly, nonatomic) CRBreadcrumbsArchive *archive; // @synthesize archive=_archive;
- (void).cxx_destruct;
- (void)clearBreadcrumbs;
- (id)recentBreadcrumbs;
- (id)recentBreadcrumbsFrom:(double)arg1 toEndTime:(double)arg2;
- (void)addBreadcrumb:(int)arg1 withObject:(id)arg2;
- (id)initWithName:(id)arg1;

@end
