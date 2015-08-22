//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "MNAttachmentView.h"

@class FBRichTextView, MNBusinessLogoView, MNBusinessNavigationHandler, MNCommerceListView, MNCommerceMapView, MNMessageDeliveryUpdateViewModel, NSString, UIView;

@interface MNMessageDeliveryUpdateView : UIControl <MNAttachmentView>
{
    MNCommerceMapView *_mapView;
    UIView *_mapBottomLine;
    MNBusinessLogoView *_carrierLogoView;
    FBRichTextView *_information1TitleLabel;
    FBRichTextView *_information1TextLabel;
    FBRichTextView *_information2TitleLabel;
    FBRichTextView *_information2TextLabel;
    FBRichTextView *_itemListTitleLabel;
    MNCommerceListView *_itemListView;
    MNBusinessNavigationHandler *_navigationHandler;
    MNMessageDeliveryUpdateViewModel *_viewModel;
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 withViewModel:(id)arg2;
@property(copy, nonatomic) MNMessageDeliveryUpdateViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak MNBusinessNavigationHandler *navigationHandler; // @synthesize navigationHandler=_navigationHandler;
- (void).cxx_destruct;
- (void)markSenderImage;
- (void)_didSelectMessage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

