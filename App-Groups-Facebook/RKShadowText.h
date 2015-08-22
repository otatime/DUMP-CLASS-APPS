//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTShadowView.h"

@class NSAttributedString, NSString, UIColor, UIFont;

@interface RKShadowText : RCTShadowView
{
    NSAttributedString *_cachedAttributedString;
    NSAttributedString *_cachedReactTagAttributedString;
    float _effectiveLetterSpacing;
    UIFont *_font;
    BOOL _isHighlighted;
    UIColor *_color;
    NSString *_fontFamily;
    float _fontSize;
    NSString *_fontWeight;
    NSString *_fontStyle;
    float _letterSpacing;
    float _lineHeight;
    unsigned int _numberOfLines;
    int _textAlign;
    UIColor *_textDecorationColor;
    int _textDecorationLine;
    int _textDecorationStyle;
    int _writingDirection;
    struct CGSize _shadowOffset;
}

@property(nonatomic) int writingDirection; // @synthesize writingDirection=_writingDirection;
@property(nonatomic) int textDecorationStyle; // @synthesize textDecorationStyle=_textDecorationStyle;
@property(nonatomic) int textDecorationLine; // @synthesize textDecorationLine=_textDecorationLine;
@property(retain, nonatomic) UIColor *textDecorationColor; // @synthesize textDecorationColor=_textDecorationColor;
@property(nonatomic) int textAlign; // @synthesize textAlign=_textAlign;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) unsigned int numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) float lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) float letterSpacing; // @synthesize letterSpacing=_letterSpacing;
@property(nonatomic) BOOL isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(copy, nonatomic) NSString *fontStyle; // @synthesize fontStyle=_fontStyle;
@property(copy, nonatomic) NSString *fontWeight; // @synthesize fontWeight=_fontWeight;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(int)arg2;
- (void)fillCSSNode:(struct css_node *)arg1;
- (void)_setParagraphStyleOnAttributedString:(id)arg1;
- (void)_addAttribute:(id)arg1 withValue:(id)arg2 toAttributedString:(id)arg3;
- (id)font;
- (BOOL)fontFamilyIsSet;
- (BOOL)fontStyleIsSet;
- (BOOL)fontWeightIsSet;
- (BOOL)fontSizeIsSet;
- (id)_attributedStringWithFontFamily:(id)arg1 fontSize:(float)arg2 fontWeight:(id)arg3 fontStyle:(id)arg4 letterSpacing:(id)arg5 useBackgroundColor:(BOOL)arg6;
- (id)attributedString;
- (id)reactTagAttributedString;
- (id)description;
- (id)init;

@end
