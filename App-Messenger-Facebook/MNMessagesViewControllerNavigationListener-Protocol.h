//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMThreadSummary, NSString;

@protocol MNMessagesViewControllerNavigationListener <NSObject>

@optional
- (void)didDisplayMessagesViewControllerWithPendingThreadOfflineId:(NSString *)arg1;
- (void)didDisplayMessagesViewControllerWithThreadSummary:(FBMThreadSummary *)arg1;
@end

