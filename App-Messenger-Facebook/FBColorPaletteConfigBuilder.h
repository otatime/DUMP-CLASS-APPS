//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBFIGConfigBuilder.h"

@class NSDictionary, NSString, UIColor;

@interface FBColorPaletteConfigBuilder : NSObject <FBFIGConfigBuilder>
{
    UIColor *_whiteColor;
    UIColor *_redColor;
    UIColor *_greenColor;
    UIColor *_facebookBlueColor;
    UIColor *_accentBlueColor;
    UIColor *_linkTextColor;
    UIColor *_blueGreyTextColor;
    UIColor *_backgroundWashColor;
    UIColor *_mobileWashColor;
    UIColor *_lightBlueWashColor;
    UIColor *_separatorColor;
    UIColor *_tabBarColor;
    UIColor *_lightGreyWashColor;
    UIColor *_lightDividerColor;
    UIColor *_highlightBackgroundBlueColor;
    UIColor *_textHighlightColor;
    UIColor *_borderColor;
    UIColor *_textDarkColor;
    UIColor *_textMediumColor;
    UIColor *_textLightColor;
    UIColor *_placeholderTextColor;
    UIColor *_dividerDarkColor;
    UIColor *_dividerLightColor;
    UIColor *_backgroundDarkColor;
    UIColor *_backgroundLightColor;
    UIColor *_washColor;
    UIColor *_textInverseDarkColor;
    UIColor *_textInverseMediumColor;
    UIColor *_textInverseLightColor;
    UIColor *_textOverlayDarkColor;
    UIColor *_textOverlayMediumColor;
    UIColor *_textOverlayLightColor;
    UIColor *_dividerInverseDarkColor;
    UIColor *_dividerInverseLightColor;
    UIColor *_washInverseColor;
    UIColor *_highlightedYellowColor;
    UIColor *_privacyOnlyMeColor;
    UIColor *_privacyCustomAudienceColor;
    UIColor *_privacyAllFriendsColor;
    UIColor *_privacyPublicColor;
    UIColor *_cardBackgroundColor;
    UIColor *_navigationBarTextColor;
    UIColor *_navigationBarHighlightedTextColor;
    UIColor *_navigationBarTintColor;
    UIColor *_navigationBarOpacityHackBackgroundTintColor;
    UIColor *_navigationBarGlyphTintColor;
    UIColor *_opaqueNavigationBarTintColor;
    UIColor *_searchBarTextColor;
    UIColor *_searchBarPlaceholderTextColor;
    int _defaultStatusBarStyle;
    NSDictionary *_imageColors;
}

+ (id)builderForInstance:(id)arg1;
+ (id)builderFromConfig:(id)arg1;
+ (id)builderIgnoringClassLevelOverrides;
+ (id)builder;
@property(copy, nonatomic) NSDictionary *imageColors; // @synthesize imageColors=_imageColors;
@property(nonatomic) int defaultStatusBarStyle; // @synthesize defaultStatusBarStyle=_defaultStatusBarStyle;
@property(copy, nonatomic) UIColor *searchBarPlaceholderTextColor; // @synthesize searchBarPlaceholderTextColor=_searchBarPlaceholderTextColor;
@property(copy, nonatomic) UIColor *searchBarTextColor; // @synthesize searchBarTextColor=_searchBarTextColor;
@property(copy, nonatomic) UIColor *opaqueNavigationBarTintColor; // @synthesize opaqueNavigationBarTintColor=_opaqueNavigationBarTintColor;
@property(copy, nonatomic) UIColor *navigationBarGlyphTintColor; // @synthesize navigationBarGlyphTintColor=_navigationBarGlyphTintColor;
@property(copy, nonatomic) UIColor *navigationBarOpacityHackBackgroundTintColor; // @synthesize navigationBarOpacityHackBackgroundTintColor=_navigationBarOpacityHackBackgroundTintColor;
@property(copy, nonatomic) UIColor *navigationBarTintColor; // @synthesize navigationBarTintColor=_navigationBarTintColor;
@property(copy, nonatomic) UIColor *navigationBarHighlightedTextColor; // @synthesize navigationBarHighlightedTextColor=_navigationBarHighlightedTextColor;
@property(copy, nonatomic) UIColor *navigationBarTextColor; // @synthesize navigationBarTextColor=_navigationBarTextColor;
@property(copy, nonatomic) UIColor *cardBackgroundColor; // @synthesize cardBackgroundColor=_cardBackgroundColor;
@property(copy, nonatomic) UIColor *privacyPublicColor; // @synthesize privacyPublicColor=_privacyPublicColor;
@property(copy, nonatomic) UIColor *privacyAllFriendsColor; // @synthesize privacyAllFriendsColor=_privacyAllFriendsColor;
@property(copy, nonatomic) UIColor *privacyCustomAudienceColor; // @synthesize privacyCustomAudienceColor=_privacyCustomAudienceColor;
@property(copy, nonatomic) UIColor *privacyOnlyMeColor; // @synthesize privacyOnlyMeColor=_privacyOnlyMeColor;
@property(copy, nonatomic) UIColor *highlightedYellowColor; // @synthesize highlightedYellowColor=_highlightedYellowColor;
@property(copy, nonatomic) UIColor *washInverseColor; // @synthesize washInverseColor=_washInverseColor;
@property(copy, nonatomic) UIColor *dividerInverseLightColor; // @synthesize dividerInverseLightColor=_dividerInverseLightColor;
@property(copy, nonatomic) UIColor *dividerInverseDarkColor; // @synthesize dividerInverseDarkColor=_dividerInverseDarkColor;
@property(copy, nonatomic) UIColor *textOverlayLightColor; // @synthesize textOverlayLightColor=_textOverlayLightColor;
@property(copy, nonatomic) UIColor *textOverlayMediumColor; // @synthesize textOverlayMediumColor=_textOverlayMediumColor;
@property(copy, nonatomic) UIColor *textOverlayDarkColor; // @synthesize textOverlayDarkColor=_textOverlayDarkColor;
@property(copy, nonatomic) UIColor *textInverseLightColor; // @synthesize textInverseLightColor=_textInverseLightColor;
@property(copy, nonatomic) UIColor *textInverseMediumColor; // @synthesize textInverseMediumColor=_textInverseMediumColor;
@property(copy, nonatomic) UIColor *textInverseDarkColor; // @synthesize textInverseDarkColor=_textInverseDarkColor;
@property(copy, nonatomic) UIColor *washColor; // @synthesize washColor=_washColor;
@property(copy, nonatomic) UIColor *backgroundLightColor; // @synthesize backgroundLightColor=_backgroundLightColor;
@property(copy, nonatomic) UIColor *backgroundDarkColor; // @synthesize backgroundDarkColor=_backgroundDarkColor;
@property(copy, nonatomic) UIColor *dividerLightColor; // @synthesize dividerLightColor=_dividerLightColor;
@property(copy, nonatomic) UIColor *dividerDarkColor; // @synthesize dividerDarkColor=_dividerDarkColor;
@property(copy, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(copy, nonatomic) UIColor *textLightColor; // @synthesize textLightColor=_textLightColor;
@property(copy, nonatomic) UIColor *textMediumColor; // @synthesize textMediumColor=_textMediumColor;
@property(copy, nonatomic) UIColor *textDarkColor; // @synthesize textDarkColor=_textDarkColor;
@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(copy, nonatomic) UIColor *textHighlightColor; // @synthesize textHighlightColor=_textHighlightColor;
@property(copy, nonatomic) UIColor *highlightBackgroundBlueColor; // @synthesize highlightBackgroundBlueColor=_highlightBackgroundBlueColor;
@property(copy, nonatomic) UIColor *lightDividerColor; // @synthesize lightDividerColor=_lightDividerColor;
@property(copy, nonatomic) UIColor *lightGreyWashColor; // @synthesize lightGreyWashColor=_lightGreyWashColor;
@property(copy, nonatomic) UIColor *tabBarColor; // @synthesize tabBarColor=_tabBarColor;
@property(copy, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(copy, nonatomic) UIColor *lightBlueWashColor; // @synthesize lightBlueWashColor=_lightBlueWashColor;
@property(copy, nonatomic) UIColor *mobileWashColor; // @synthesize mobileWashColor=_mobileWashColor;
@property(copy, nonatomic) UIColor *backgroundWashColor; // @synthesize backgroundWashColor=_backgroundWashColor;
@property(copy, nonatomic) UIColor *blueGreyTextColor; // @synthesize blueGreyTextColor=_blueGreyTextColor;
@property(copy, nonatomic) UIColor *linkTextColor; // @synthesize linkTextColor=_linkTextColor;
@property(copy, nonatomic) UIColor *accentBlueColor; // @synthesize accentBlueColor=_accentBlueColor;
@property(copy, nonatomic) UIColor *facebookBlueColor; // @synthesize facebookBlueColor=_facebookBlueColor;
@property(copy, nonatomic) UIColor *greenColor; // @synthesize greenColor=_greenColor;
@property(copy, nonatomic) UIColor *redColor; // @synthesize redColor=_redColor;
@property(copy, nonatomic) UIColor *whiteColor; // @synthesize whiteColor=_whiteColor;
- (void).cxx_destruct;
- (id)_init;
- (id)build;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
