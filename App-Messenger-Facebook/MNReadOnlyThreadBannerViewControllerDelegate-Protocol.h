//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNReadOnlyThreadBannerViewController, UIViewController;

@protocol MNReadOnlyThreadBannerViewControllerDelegate <NSObject>
- (void)readonlyThreadBannerViewControllerDidPressArchive:(MNReadOnlyThreadBannerViewController *)arg1;
- (void)readonlyThreadBannerViewControllerDidPressDelete:(MNReadOnlyThreadBannerViewController *)arg1;
- (void)readonlyThreadBannerViewController:(MNReadOnlyThreadBannerViewController *)arg1 didSelectLearnMoreWithViewController:(UIViewController *)arg2;
@end
