//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTImage_StockImageTypeEnum, NSMutableArray, NSString, UIColor, UIFont, UIImage;

@interface SmartMailCardViewModel : NSObject
{
    BOOL _showBorder;
    BOOL _showImageOverlay;
    BOOL _showStatusLabel;
    UIColor *_defaultImageBackgroundColor;
    int _defaultImageContentMode;
    NSString *_imageButtonAccessibilityLabel;
    UIFont *_imageButtonFont;
    UIImage *_imageButtonImage;
    UIImage *_imageButtonImageHighlighted;
    NSString *_imageButtonText;
    UIColor *_imageButtonTextColor;
    float _imageButtonTextTopOffset;
    id <JBTImage> _networkImage;
    JBTImage_StockImageTypeEnum *_stockImageType;
    NSMutableArray *_lineItems;
    UIColor *_accentColor;
    UIColor *_secondaryColor;
    NSString *_cardTapAppUrl;
    NSString *_cardTapFallbackUrl;
    id <JBTSmartMailComponent> _smartMailComponent;
    UIColor *_statusLabelBackgroundColor;
    UIImage *_statusLabelIconImage;
    NSString *_statusLabelText;
}

+ (id)multilineParagraphStyle;
+ (id)modelFromSmartMailComponent:(id)arg1;
+ (id)oneboxModelFromGenericSmartMailLayout:(id)arg1;
+ (id)modelFromGenericSmartMailLayout:(id)arg1;
+ (void)initialize;
+ (BOOL)shouldShowIconForFlightStatus:(id)arg1;
+ (id)stringWithFlightStatus:(id)arg1;
+ (id)colorWithFlightStatus:(id)arg1;
+ (id)flightSegmentsStringWithSegmentsList:(id)arg1 countColor:(id)arg2 skipSegment:(id)arg3;
+ (id)imageNameWithSegment:(id)arg1;
+ (id)formattedTextWithSegment:(id)arg1 showFlightNumber:(BOOL)arg2;
+ (void)updateModelStatusLabel:(id)arg1 withSegment:(id)arg2;
+ (id)segmentForLeftStatusFromFlight:(id)arg1;
+ (void)addLineItemToModel:(id)arg1 withSegment:(id)arg2 showFlightNumber:(BOOL)arg3;
+ (void)updateModel:(id)arg1 withSingleSegment:(id)arg2;
+ (void)updateModel:(id)arg1 withFlight:(id)arg2;
+ (void)loadFlightReservationStringsIfNeeded;
+ (id)accessibleDuration:(id)arg1;
+ (void)updateModel:(id)arg1 withVideo:(id)arg2;
+ (void)loadVideoStringsIfNeeded;
+ (void)updateModel:(id)arg1 withProduct:(id)arg2;
+ (id)topicCardTitleAttributes;
+ (void)updateModel:(id)arg1 withTripLayout:(id)arg2;
+ (void)updateModel:(id)arg1 withBadge:(id)arg2;
+ (void)updateModel:(id)arg1 withSummaryLayout:(id)arg2 forSearch:(BOOL)arg3;
+ (void)loadTopicSummaryFontStylesIfNeeded;
+ (void)updateModel:(id)arg1 withArticle:(id)arg2;
+ (void)loadArticleParagraphSettingsIfNeeded;
@property(copy, nonatomic) NSString *statusLabelText; // @synthesize statusLabelText=_statusLabelText;
@property(retain, nonatomic) UIImage *statusLabelIconImage; // @synthesize statusLabelIconImage=_statusLabelIconImage;
@property(retain, nonatomic) UIColor *statusLabelBackgroundColor; // @synthesize statusLabelBackgroundColor=_statusLabelBackgroundColor;
@property(nonatomic) BOOL showStatusLabel; // @synthesize showStatusLabel=_showStatusLabel;
@property(retain, nonatomic) id <JBTSmartMailComponent> smartMailComponent; // @synthesize smartMailComponent=_smartMailComponent;
@property(copy, nonatomic) NSString *cardTapFallbackUrl; // @synthesize cardTapFallbackUrl=_cardTapFallbackUrl;
@property(copy, nonatomic) NSString *cardTapAppUrl; // @synthesize cardTapAppUrl=_cardTapAppUrl;
@property(retain, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(retain, nonatomic) UIColor *accentColor; // @synthesize accentColor=_accentColor;
@property(retain, nonatomic) NSMutableArray *lineItems; // @synthesize lineItems=_lineItems;
@property(retain, nonatomic) JBTImage_StockImageTypeEnum *stockImageType; // @synthesize stockImageType=_stockImageType;
@property(nonatomic) BOOL showImageOverlay; // @synthesize showImageOverlay=_showImageOverlay;
@property(nonatomic) BOOL showBorder; // @synthesize showBorder=_showBorder;
@property(retain, nonatomic) id <JBTImage> networkImage; // @synthesize networkImage=_networkImage;
@property(nonatomic) float imageButtonTextTopOffset; // @synthesize imageButtonTextTopOffset=_imageButtonTextTopOffset;
@property(retain, nonatomic) UIColor *imageButtonTextColor; // @synthesize imageButtonTextColor=_imageButtonTextColor;
@property(copy, nonatomic) NSString *imageButtonText; // @synthesize imageButtonText=_imageButtonText;
@property(retain, nonatomic) UIImage *imageButtonImageHighlighted; // @synthesize imageButtonImageHighlighted=_imageButtonImageHighlighted;
@property(retain, nonatomic) UIImage *imageButtonImage; // @synthesize imageButtonImage=_imageButtonImage;
@property(retain, nonatomic) UIFont *imageButtonFont; // @synthesize imageButtonFont=_imageButtonFont;
@property(copy, nonatomic) NSString *imageButtonAccessibilityLabel; // @synthesize imageButtonAccessibilityLabel=_imageButtonAccessibilityLabel;
@property(nonatomic) int defaultImageContentMode; // @synthesize defaultImageContentMode=_defaultImageContentMode;
@property(retain, nonatomic) UIColor *defaultImageBackgroundColor; // @synthesize defaultImageBackgroundColor=_defaultImageBackgroundColor;
- (void).cxx_destruct;
- (void)addLineItemWithText:(id)arg1;
- (void)addLineItemWithHighlightedAttributedText:(id)arg1;
- (void)addLineItemWithAttributedText:(id)arg1;
- (void)addLineItemWithAction:(id)arg1 imageName:(id)arg2;
- (id)init;

@end
