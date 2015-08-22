//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, UIColor;

@interface QTMColorGroup : NSObject <NSSecureCoding>
{
    const CDStruct_818bb265 *_tones;
    unsigned int _numTones;
    int _groupID;
    UIColor *_bodyTextColor;
    UIColor *_bodyTextColorOnLightestColor;
    UIColor *_bodyTextColorOnLighterColor;
    UIColor *_bodyTextColorOnRegularColor;
    UIColor *_bodyTextColorOnDarkerColor;
    UIColor *_bodyTextColorOnAccentColor;
    UIColor *_bodyTextColorOnBrightAccentColor;
    UIColor *_lightBodyTextColor;
    UIColor *_buttonBackgroundColor;
    UIColor *_buttonDisabledBackgroundColorDark;
    UIColor *_buttonDisabledBackgroundColorLight;
    UIColor *_buttonActionTextColor;
    UIColor *_buttonTextColor;
    UIColor *_buttonInkColor;
}

+ (float)minContrastRatioForOptions:(unsigned int)arg1;
+ (id)exceptionColorFromChoices:(id)arg1 onColor:(id)arg2 options:(unsigned int)arg3;
+ (id)bodyTextColorOnBackgroundImage:(id)arg1 inRegion:(struct CGRect)arg2 withFont:(id)arg3;
+ (id)bodyTextColorOnBackgroundImage:(id)arg1 withFont:(id)arg2;
+ (id)bodyTextColorOnColor:(id)arg1 withFont:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (float)minAlphaOfColor:(id)arg1 onColor:(id)arg2 options:(unsigned int)arg3;
+ (float)luminanceOfColor:(id)arg1;
+ (id)textColorOnColor:(id)arg1 textAlpha:(float)arg2 font:(id)arg3;
+ (id)textColorOnColor:(id)arg1 textAlpha:(float)arg2 options:(unsigned int)arg3;
+ (id)textColorFromChoices:(id)arg1 onColor:(id)arg2 options:(unsigned int)arg3;
+ (float)contrastRatioForColor:(id)arg1 onColor:(id)arg2;
+ (id)colorWithRGBA:(CDStruct_818bb265)arg1;
+ (BOOL)colorToneIsAccent:(int)arg1;
+ (BOOL)colorToneIsTint:(int)arg1;
+ (id)colorGroupFromTargetColor:(id)arg1 checkStandardGroups:(BOOL)arg2;
+ (id)colorGroupFromTargetColor:(id)arg1;
+ (id)colorGroupWithName:(id)arg1;
+ (id)colorGroupWithID:(int)arg1;
+ (id)clearColors;
+ (id)googleYellowColors;
+ (id)googleGreenColors;
+ (id)googleRedColors;
+ (id)googleBlueColors;
+ (id)greyColors;
+ (id)whiteColors;
+ (void)initialize;
@property(readonly, nonatomic) UIColor *buttonInkColor; // @synthesize buttonInkColor=_buttonInkColor;
@property(readonly, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(readonly, nonatomic) UIColor *buttonActionTextColor; // @synthesize buttonActionTextColor=_buttonActionTextColor;
@property(readonly, nonatomic) UIColor *buttonDisabledBackgroundColorLight; // @synthesize buttonDisabledBackgroundColorLight=_buttonDisabledBackgroundColorLight;
@property(readonly, nonatomic) UIColor *buttonDisabledBackgroundColorDark; // @synthesize buttonDisabledBackgroundColorDark=_buttonDisabledBackgroundColorDark;
@property(readonly, nonatomic) UIColor *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(readonly, nonatomic) UIColor *lightBodyTextColor; // @synthesize lightBodyTextColor=_lightBodyTextColor;
@property(readonly, nonatomic) UIColor *bodyTextColorOnBrightAccentColor; // @synthesize bodyTextColorOnBrightAccentColor=_bodyTextColorOnBrightAccentColor;
@property(readonly, nonatomic) UIColor *bodyTextColorOnAccentColor; // @synthesize bodyTextColorOnAccentColor=_bodyTextColorOnAccentColor;
@property(readonly, nonatomic) UIColor *bodyTextColorOnDarkerColor; // @synthesize bodyTextColorOnDarkerColor=_bodyTextColorOnDarkerColor;
@property(readonly, nonatomic) UIColor *bodyTextColorOnRegularColor; // @synthesize bodyTextColorOnRegularColor=_bodyTextColorOnRegularColor;
@property(readonly, nonatomic) UIColor *bodyTextColorOnLighterColor; // @synthesize bodyTextColorOnLighterColor=_bodyTextColorOnLighterColor;
@property(readonly, nonatomic) UIColor *bodyTextColorOnLightestColor; // @synthesize bodyTextColorOnLightestColor=_bodyTextColorOnLightestColor;
@property(readonly, nonatomic) UIColor *bodyTextColor; // @synthesize bodyTextColor=_bodyTextColor;
@property(readonly, nonatomic) int groupID; // @synthesize groupID=_groupID;
- (void).cxx_destruct;
- (void)initBodyTextColors;
- (void)initButtonColors;
- (void)applyTones:(const CDStruct_818bb265 *)arg1 numTones:(unsigned int)arg2;
- (BOOL)hasAccentColors;
- (id)colorWithTone:(int)arg1;
- (id)lightBodyTextColorOnColor:(id)arg1 withFont:(id)arg2;
- (id)lightBodyTextColorOnTone:(int)arg1 withFont:(id)arg2;
- (id)bodyTextColorOnTone:(int)arg1 withFont:(id)arg2;
- (id)bodyTextColorOnDarkerColorWithFont:(id)arg1;
- (id)bodyTextColorOnRegularColorWithFont:(id)arg1;
- (id)bodyTextColorOnLighterColorWithFont:(id)arg1;
- (id)bodyTextColorOnLightestColorWithFont:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) UIColor *statusBarColor;
@property(readonly, nonatomic) UIColor *brightAccentColor;
@property(readonly, nonatomic) UIColor *accentColor;
@property(readonly, nonatomic) UIColor *darkerColor;
@property(readonly, nonatomic) UIColor *regularColor;
@property(readonly, nonatomic) UIColor *lighterColor;
@property(readonly, nonatomic) UIColor *lightestColor;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1;
- (id)initWithGroupID:(int)arg1 tones:(const CDStruct_818bb265 *)arg2 numTones:(unsigned int)arg3;
- (id)initWithTargetColor:(id)arg1 checkStandardGroups:(BOOL)arg2;
- (id)initWithPredefinedColorGroupID:(int)arg1;
- (id)init;

@end
