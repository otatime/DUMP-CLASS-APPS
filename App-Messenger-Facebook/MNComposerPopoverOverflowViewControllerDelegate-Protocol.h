//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNComposerPopoverOverflowViewController, NSString;

@protocol MNComposerPopoverOverflowViewControllerDelegate <NSObject>
- (void)composerPopoverOverflowViewControllerDidBecomeActive;
- (void)composerPopoverOverflowViewControllerDidAppear:(MNComposerPopoverOverflowViewController *)arg1;
- (BOOL)composerPopoverOverflowViewControllerShouldShowBottomButton:(MNComposerPopoverOverflowViewController *)arg1;
- (void)composerPopoverOverflowViewControllerDidPressBottomButton:(MNComposerPopoverOverflowViewController *)arg1;
- (void)composerPopoverOverflowViewController:(MNComposerPopoverOverflowViewController *)arg1 didSelectItemWithExtensionIdentifier:(NSString *)arg2;
@end

