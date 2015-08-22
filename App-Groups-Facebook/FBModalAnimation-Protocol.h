//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@protocol FBModalAnimation <NSObject>
- (void)cleanUpAfterPresentation:(BOOL)arg1 inTransition:(id <UIViewControllerContextTransitioning>)arg2;
- (NSSet *)animatedViewsForPresentation:(BOOL)arg1 inTransition:(id <UIViewControllerContextTransitioning>)arg2;
- (void)animatePresentation:(BOOL)arg1 alongsideTransition:(id <UIViewControllerContextTransitioning>)arg2;
- (void)prepareForPresentation:(BOOL)arg1 inTransition:(id <UIViewControllerContextTransitioning>)arg2;
@end
