//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBLTraitCollection;

@interface CBLBaseLayoutAttributes : NSObject
{
    CBLTraitCollection *_cblTraitCollection;
    float _leftMargin;
    float _rightMargin;
    float _topMargin;
    float _bottomMargin;
    float _horizontalViewSpacing;
    float _verticalViewSpacing;
    float _avatarSize;
    float _horizontalScale;
    float _verticalScale;
    float _verySmallFontSize;
    float _smallFontSize;
    float _mediumFontSize;
    float _largeFontSize;
    float _veryLargeFontSize;
    float _giantTitleFontSize;
    float _navigationBarTitleFontSize;
    struct CGSize _customViewSize;
    struct UIEdgeInsets _margins;
}

+ (float)kernValueForFontSize:(float)arg1;
+ (id)layoutAttributes;
+ (id)regularLayoutAttributes;
+ (id)compactLayoutAttributes;
+ (id)layoutAttributesFromTraitCollection:(id)arg1;
@property(nonatomic) float navigationBarTitleFontSize; // @synthesize navigationBarTitleFontSize=_navigationBarTitleFontSize;
@property(nonatomic) float giantTitleFontSize; // @synthesize giantTitleFontSize=_giantTitleFontSize;
@property(nonatomic) float veryLargeFontSize; // @synthesize veryLargeFontSize=_veryLargeFontSize;
@property(nonatomic) float largeFontSize; // @synthesize largeFontSize=_largeFontSize;
@property(nonatomic) float mediumFontSize; // @synthesize mediumFontSize=_mediumFontSize;
@property(nonatomic) float smallFontSize; // @synthesize smallFontSize=_smallFontSize;
@property(nonatomic) float verySmallFontSize; // @synthesize verySmallFontSize=_verySmallFontSize;
@property(nonatomic) float verticalScale; // @synthesize verticalScale=_verticalScale;
@property(nonatomic) float horizontalScale; // @synthesize horizontalScale=_horizontalScale;
@property(readonly, nonatomic) float avatarSize; // @synthesize avatarSize=_avatarSize;
@property(readonly, nonatomic) float verticalViewSpacing; // @synthesize verticalViewSpacing=_verticalViewSpacing;
@property(readonly, nonatomic) float horizontalViewSpacing; // @synthesize horizontalViewSpacing=_horizontalViewSpacing;
@property(nonatomic) float bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) float topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) float rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) float leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) struct CGSize customViewSize; // @synthesize customViewSize=_customViewSize;
@property(readonly, copy, nonatomic) CBLTraitCollection *cblTraitCollection; // @synthesize cblTraitCollection=_cblTraitCollection;
@property(nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
- (void).cxx_destruct;
- (id)navigationBarTitleFont;
- (id)giantBoldFont;
- (id)giantTitleFont;
- (id)veryLargeBoldFont;
- (id)largeBoldFont;
- (id)mediumBoldFont;
- (id)smallBoldFont;
- (id)verySmallBoldFont;
- (id)veryLargeFont;
- (id)largeFont;
- (id)mediumFont;
- (id)smallFont;
- (id)verySmallFont;
- (id)scaleStringAttributes:(id)arg1;
- (void)updateMultipliers;
- (id)initWithTraitCollection:(id)arg1;

@end

