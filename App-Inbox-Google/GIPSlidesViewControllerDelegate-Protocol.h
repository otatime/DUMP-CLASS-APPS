//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GIPSlidesViewController, UIButton, UIView;

@protocol GIPSlidesViewControllerDelegate <NSObject>
- (void)slidesViewControllerWillClose:(GIPSlidesViewController *)arg1;

@optional
- (void)slidesViewController:(GIPSlidesViewController *)arg1 didChangeToSlideAtIndex:(int)arg2;
- (UIButton *)slidesViewControllerBackButton:(GIPSlidesViewController *)arg1;
- (UIView *)slidesViewControllerActionButton:(GIPSlidesViewController *)arg1;
@end

