//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "FBFIGConfig.h"

@class NSDictionary, NSString, UIColor;

@interface FBColorPaletteConfig : FBValueObject <FBFIGConfig>
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

+ (id)newWithWhiteColor:(id)arg1 redColor:(id)arg2 greenColor:(id)arg3 facebookBlueColor:(id)arg4 accentBlueColor:(id)arg5 linkTextColor:(id)arg6 blueGreyTextColor:(id)arg7 backgroundWashColor:(id)arg8 mobileWashColor:(id)arg9 lightBlueWashColor:(id)arg10 separatorColor:(id)arg11 tabBarColor:(id)arg12 lightGreyWashColor:(id)arg13 lightDividerColor:(id)arg14 highlightBackgroundBlueColor:(id)arg15 textHighlightColor:(id)arg16 borderColor:(id)arg17 textDarkColor:(id)arg18 textMediumColor:(id)arg19 textLightColor:(id)arg20 placeholderTextColor:(id)arg21 dividerDarkColor:(id)arg22 dividerLightColor:(id)arg23 backgroundDarkColor:(id)arg24 backgroundLightColor:(id)arg25 washColor:(id)arg26 textInverseDarkColor:(id)arg27 textInverseMediumColor:(id)arg28 textInverseLightColor:(id)arg29 textOverlayDarkColor:(id)arg30 textOverlayMediumColor:(id)arg31 textOverlayLightColor:(id)arg32 dividerInverseDarkColor:(id)arg33 dividerInverseLightColor:(id)arg34 washInverseColor:(id)arg35 highlightedYellowColor:(id)arg36 privacyOnlyMeColor:(id)arg37 privacyCustomAudienceColor:(id)arg38 privacyAllFriendsColor:(id)arg39 privacyPublicColor:(id)arg40 cardBackgroundColor:(id)arg41 navigationBarTextColor:(id)arg42 navigationBarHighlightedTextColor:(id)arg43 navigationBarTintColor:(id)arg44 navigationBarOpacityHackBackgroundTintColor:(id)arg45 navigationBarGlyphTintColor:(id)arg46 opaqueNavigationBarTintColor:(id)arg47 searchBarTextColor:(id)arg48 searchBarPlaceholderTextColor:(id)arg49 defaultStatusBarStyle:(int)arg50 imageColors:(id)arg51;
@property(readonly, copy, nonatomic) NSDictionary *imageColors; // @synthesize imageColors=_imageColors;
@property(readonly, nonatomic) int defaultStatusBarStyle; // @synthesize defaultStatusBarStyle=_defaultStatusBarStyle;
@property(readonly, copy, nonatomic) UIColor *searchBarPlaceholderTextColor; // @synthesize searchBarPlaceholderTextColor=_searchBarPlaceholderTextColor;
@property(readonly, copy, nonatomic) UIColor *searchBarTextColor; // @synthesize searchBarTextColor=_searchBarTextColor;
@property(readonly, copy, nonatomic) UIColor *opaqueNavigationBarTintColor; // @synthesize opaqueNavigationBarTintColor=_opaqueNavigationBarTintColor;
@property(readonly, copy, nonatomic) UIColor *navigationBarGlyphTintColor; // @synthesize navigationBarGlyphTintColor=_navigationBarGlyphTintColor;
@property(readonly, copy, nonatomic) UIColor *navigationBarOpacityHackBackgroundTintColor; // @synthesize navigationBarOpacityHackBackgroundTintColor=_navigationBarOpacityHackBackgroundTintColor;
@property(readonly, copy, nonatomic) UIColor *navigationBarTintColor; // @synthesize navigationBarTintColor=_navigationBarTintColor;
@property(readonly, copy, nonatomic) UIColor *navigationBarHighlightedTextColor; // @synthesize navigationBarHighlightedTextColor=_navigationBarHighlightedTextColor;
@property(readonly, copy, nonatomic) UIColor *navigationBarTextColor; // @synthesize navigationBarTextColor=_navigationBarTextColor;
@property(readonly, copy, nonatomic) UIColor *cardBackgroundColor; // @synthesize cardBackgroundColor=_cardBackgroundColor;
@property(readonly, copy, nonatomic) UIColor *privacyPublicColor; // @synthesize privacyPublicColor=_privacyPublicColor;
@property(readonly, copy, nonatomic) UIColor *privacyAllFriendsColor; // @synthesize privacyAllFriendsColor=_privacyAllFriendsColor;
@property(readonly, copy, nonatomic) UIColor *privacyCustomAudienceColor; // @synthesize privacyCustomAudienceColor=_privacyCustomAudienceColor;
@property(readonly, copy, nonatomic) UIColor *privacyOnlyMeColor; // @synthesize privacyOnlyMeColor=_privacyOnlyMeColor;
@property(readonly, copy, nonatomic) UIColor *highlightedYellowColor; // @synthesize highlightedYellowColor=_highlightedYellowColor;
@property(readonly, copy, nonatomic) UIColor *washInverseColor; // @synthesize washInverseColor=_washInverseColor;
@property(readonly, copy, nonatomic) UIColor *dividerInverseLightColor; // @synthesize dividerInverseLightColor=_dividerInverseLightColor;
@property(readonly, copy, nonatomic) UIColor *dividerInverseDarkColor; // @synthesize dividerInverseDarkColor=_dividerInverseDarkColor;
@property(readonly, copy, nonatomic) UIColor *textOverlayLightColor; // @synthesize textOverlayLightColor=_textOverlayLightColor;
@property(readonly, copy, nonatomic) UIColor *textOverlayMediumColor; // @synthesize textOverlayMediumColor=_textOverlayMediumColor;
@property(readonly, copy, nonatomic) UIColor *textOverlayDarkColor; // @synthesize textOverlayDarkColor=_textOverlayDarkColor;
@property(readonly, copy, nonatomic) UIColor *textInverseLightColor; // @synthesize textInverseLightColor=_textInverseLightColor;
@property(readonly, copy, nonatomic) UIColor *textInverseMediumColor; // @synthesize textInverseMediumColor=_textInverseMediumColor;
@property(readonly, copy, nonatomic) UIColor *textInverseDarkColor; // @synthesize textInverseDarkColor=_textInverseDarkColor;
@property(readonly, copy, nonatomic) UIColor *washColor; // @synthesize washColor=_washColor;
@property(readonly, copy, nonatomic) UIColor *backgroundLightColor; // @synthesize backgroundLightColor=_backgroundLightColor;
@property(readonly, copy, nonatomic) UIColor *backgroundDarkColor; // @synthesize backgroundDarkColor=_backgroundDarkColor;
@property(readonly, copy, nonatomic) UIColor *dividerLightColor; // @synthesize dividerLightColor=_dividerLightColor;
@property(readonly, copy, nonatomic) UIColor *dividerDarkColor; // @synthesize dividerDarkColor=_dividerDarkColor;
@property(readonly, copy, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(readonly, copy, nonatomic) UIColor *textLightColor; // @synthesize textLightColor=_textLightColor;
@property(readonly, copy, nonatomic) UIColor *textMediumColor; // @synthesize textMediumColor=_textMediumColor;
@property(readonly, copy, nonatomic) UIColor *textDarkColor; // @synthesize textDarkColor=_textDarkColor;
@property(readonly, copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, copy, nonatomic) UIColor *textHighlightColor; // @synthesize textHighlightColor=_textHighlightColor;
@property(readonly, copy, nonatomic) UIColor *highlightBackgroundBlueColor; // @synthesize highlightBackgroundBlueColor=_highlightBackgroundBlueColor;
@property(readonly, copy, nonatomic) UIColor *lightDividerColor; // @synthesize lightDividerColor=_lightDividerColor;
@property(readonly, copy, nonatomic) UIColor *lightGreyWashColor; // @synthesize lightGreyWashColor=_lightGreyWashColor;
@property(readonly, copy, nonatomic) UIColor *tabBarColor; // @synthesize tabBarColor=_tabBarColor;
@property(readonly, copy, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(readonly, copy, nonatomic) UIColor *lightBlueWashColor; // @synthesize lightBlueWashColor=_lightBlueWashColor;
@property(readonly, copy, nonatomic) UIColor *mobileWashColor; // @synthesize mobileWashColor=_mobileWashColor;
@property(readonly, copy, nonatomic) UIColor *backgroundWashColor; // @synthesize backgroundWashColor=_backgroundWashColor;
@property(readonly, copy, nonatomic) UIColor *blueGreyTextColor; // @synthesize blueGreyTextColor=_blueGreyTextColor;
@property(readonly, copy, nonatomic) UIColor *linkTextColor; // @synthesize linkTextColor=_linkTextColor;
@property(readonly, copy, nonatomic) UIColor *accentBlueColor; // @synthesize accentBlueColor=_accentBlueColor;
@property(readonly, copy, nonatomic) UIColor *facebookBlueColor; // @synthesize facebookBlueColor=_facebookBlueColor;
@property(readonly, copy, nonatomic) UIColor *greenColor; // @synthesize greenColor=_greenColor;
@property(readonly, copy, nonatomic) UIColor *redColor; // @synthesize redColor=_redColor;
@property(readonly, copy, nonatomic) UIColor *whiteColor; // @synthesize whiteColor=_whiteColor;
- (void).cxx_destruct;
- (id)_initWithWhiteColor:(id)arg1 redColor:(id)arg2 greenColor:(id)arg3 facebookBlueColor:(id)arg4 accentBlueColor:(id)arg5 linkTextColor:(id)arg6 blueGreyTextColor:(id)arg7 backgroundWashColor:(id)arg8 mobileWashColor:(id)arg9 lightBlueWashColor:(id)arg10 separatorColor:(id)arg11 tabBarColor:(id)arg12 lightGreyWashColor:(id)arg13 lightDividerColor:(id)arg14 highlightBackgroundBlueColor:(id)arg15 textHighlightColor:(id)arg16 borderColor:(id)arg17 textDarkColor:(id)arg18 textMediumColor:(id)arg19 textLightColor:(id)arg20 placeholderTextColor:(id)arg21 dividerDarkColor:(id)arg22 dividerLightColor:(id)arg23 backgroundDarkColor:(id)arg24 backgroundLightColor:(id)arg25 washColor:(id)arg26 textInverseDarkColor:(id)arg27 textInverseMediumColor:(id)arg28 textInverseLightColor:(id)arg29 textOverlayDarkColor:(id)arg30 textOverlayMediumColor:(id)arg31 textOverlayLightColor:(id)arg32 dividerInverseDarkColor:(id)arg33 dividerInverseLightColor:(id)arg34 washInverseColor:(id)arg35 highlightedYellowColor:(id)arg36 privacyOnlyMeColor:(id)arg37 privacyCustomAudienceColor:(id)arg38 privacyAllFriendsColor:(id)arg39 privacyPublicColor:(id)arg40 cardBackgroundColor:(id)arg41 navigationBarTextColor:(id)arg42 navigationBarHighlightedTextColor:(id)arg43 navigationBarTintColor:(id)arg44 navigationBarOpacityHackBackgroundTintColor:(id)arg45 navigationBarGlyphTintColor:(id)arg46 opaqueNavigationBarTintColor:(id)arg47 searchBarTextColor:(id)arg48 searchBarPlaceholderTextColor:(id)arg49 defaultStatusBarStyle:(int)arg50 imageColors:(id)arg51;
- (id)colorForImageName:(id)arg1;
- (id)blueColorWithShade:(unsigned int)arg1;
- (id)greyColorWithShade:(unsigned int)arg1;
- (id)blueGreyColorWithShade:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

