//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBBugReportPlayVideoButtonOverlayView, FBBugReportRemoveButtonView, UIButton;

@interface FBBugReportScreenshotListItemView : UIView
{
    struct CGSize _imageSize;
    FBBugReportPlayVideoButtonOverlayView *_playVideoButtonOverlayView;
    UIButton *_screenshotThumbnail;
    FBBugReportRemoveButtonView *_removeButton;
    int _itemType;
}

+ (float)removeButtonRadius;
@property int itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) FBBugReportRemoveButtonView *removeButton; // @synthesize removeButton=_removeButton;
@property(readonly, nonatomic) UIButton *screenshotThumbnail; // @synthesize screenshotThumbnail=_screenshotThumbnail;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (int)widthAdjustedToHeight:(int)arg1;
- (id)initWithImage:(id)arg1 itemType:(int)arg2;

@end

