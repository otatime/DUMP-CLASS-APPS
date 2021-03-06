//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNBannerArrowPositioner.h"
#import "MNComposeViewControllerListener.h"

@class MNComposeViewController, MNQuickPromotionBannerArrowLocation, MNQuickPromotionBannerView, NSString;

@interface MNQuickPromotionComposerBannerBottomArrowPositioner : NSObject <MNBannerArrowPositioner, MNComposeViewControllerListener>
{
    MNComposeViewController *_composeViewController;
    MNQuickPromotionBannerView *_composerBannerView;
    MNQuickPromotionBannerArrowLocation *_arrowLocation;
    id <MNBannerArrowPositionerDelegate> _delegate;
}

@property(nonatomic) __weak id <MNBannerArrowPositionerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_composerExtensionTabIdentifier;
- (BOOL)_composerBannerBottomArrowOverflowsToMoreTab;
- (void)didUpdateTabBar;
@property(readonly, nonatomic) BOOL bannerArrowVisible;
- (void)updateBannerArrowPosition;
- (id)initWithComposerBannerView:(id)arg1 arrowLocation:(id)arg2 composeViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

