//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CardView.h"

@class GBTNetworkImageView, NSArray, NSMutableArray, NSString, SmartMailCardViewModel, UIButton, UIImageView, UILabel, UIView;

@interface SmartMailCardView : CardView
{
    NSString *appUrl_;
    UIView *border_;
    NSString *fallbackUrl_;
    UIButton *imageButton_;
    GBTNetworkImageView *imageView_;
    float lastLoadedImageHeight_;
    SmartMailCardViewModel *model_;
    NSMutableArray *additionalTextSnippets_;
    UIView *leftStatusContainer_;
    UIImageView *leftStatusIcon_;
    UILabel *leftStatusLabel_;
    id <JBTGenericSmartMailLayout> layout_;
    id <JBTSmartMailComponent> smartMailComponent_;
    NSArray *_allowedInsecureImageURLSchemes;
}

+ (void)handleLowMemory:(id)arg1;
+ (Class)oneboxClassFromLayout:(id)arg1;
+ (float)snippetLeftMargin;
+ (void)initialize;
+ (float)heightWithLayout:(id)arg1 width:(float)arg2;
+ (float)imageWidth;
@property(retain, nonatomic) NSArray *allowedInsecureImageURLSchemes; // @synthesize allowedInsecureImageURLSchemes=_allowedInsecureImageURLSchemes;
@property(retain, nonatomic) id <JBTSmartMailComponent> smartMailComponent; // @synthesize smartMailComponent=smartMailComponent_;
@property(retain, nonatomic) id <JBTGenericSmartMailLayout> layout; // @synthesize layout=layout_;
- (void).cxx_destruct;
- (id)defaultImageFromStockImageType:(id)arg1;
- (id)filterImage:(id)arg1 overlay:(BOOL)arg2;
- (void)reloadImages;
- (void)updateImageViewWithImage:(id)arg1;
- (void)createSubviews;
- (void)cardTapped;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateModelWithCurrentLayout;
- (id)snippetForLineItem:(id)arg1 index:(unsigned int)arg2 accentColor:(id)arg3;
- (void)updateWithModel:(id)arg1;

@end
