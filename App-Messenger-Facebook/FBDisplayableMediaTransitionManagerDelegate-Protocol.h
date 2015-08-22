//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBDisplayableMediaTransitionManager, FBDisplayableMediaViewProviderInfo, FBDisplayableMediaViewProviderSourceInfo, UIView;

@protocol FBDisplayableMediaTransitionManagerDelegate <NSObject>
- (unsigned int)transitionManager:(FBDisplayableMediaTransitionManager *)arg1 preferredDismissalTransitionTypeForMedia:(id <FBDisplayableMedia>)arg2;
- (FBDisplayableMediaViewProviderSourceInfo *)transitionManagerNeedsMediaInfoForAnimation:(FBDisplayableMediaTransitionManager *)arg1;
- (void)transitionManagerNeedsDismissal:(FBDisplayableMediaTransitionManager *)arg1;

@optional
- (struct CGRect)transitionManager:(FBDisplayableMediaTransitionManager *)arg1 calculateDismissalFrameWithInfo:(FBDisplayableMediaViewProviderInfo *)arg2 inView:(UIView *)arg3;
- (void)transitionManager:(FBDisplayableMediaTransitionManager *)arg1 didPresentWithMediaViewProviderInfo:(FBDisplayableMediaViewProviderInfo *)arg2;
- (void)transitionManager:(FBDisplayableMediaTransitionManager *)arg1 willPresentWithMediaViewProviderInfo:(FBDisplayableMediaViewProviderInfo *)arg2;
- (void)transitionManager:(FBDisplayableMediaTransitionManager *)arg1 willDismissWithMediaViewProviderInfo:(FBDisplayableMediaViewProviderInfo *)arg2;
- (void)transitionManager:(FBDisplayableMediaTransitionManager *)arg1 didDismissWithMediaViewProviderInfo:(FBDisplayableMediaViewProviderInfo *)arg2;
@end

