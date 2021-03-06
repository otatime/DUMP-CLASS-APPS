//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBMemRetailShipmentTrackingEventsConnection, MNCommerceLabelWithHeaderView, NSMutableArray;

@interface MNCommerceShipmentTrackingUpdatesView : UIView
{
    FBMemRetailShipmentTrackingEventsConnection *_trackingEventsConnection;
    MNCommerceLabelWithHeaderView *_nullStateMessage;
    NSMutableArray *_trackingEventViews;
    MNCommerceLabelWithHeaderView *_headerView;
}

- (void).cxx_destruct;
- (void)_removeOldTrackingEventViews;
- (float)_totalVerticalPadding;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateCommerceSubviews;
- (void)setViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

