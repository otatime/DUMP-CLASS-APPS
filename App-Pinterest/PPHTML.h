//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface PPHTML : NSObject
{
    NSString *_fontName;
    UIColor *_fontColor;
    float _fontSize;
    float _listItemFontSize;
    float _margin;
    UIColor *_shadowColor;
    struct CGSize _shadowOffset;
}

@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) float margin; // @synthesize margin=_margin;
@property(nonatomic) float listItemFontSize; // @synthesize listItemFontSize=_listItemFontSize;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (void).cxx_destruct;
- (id)formattedHTMLString:(id)arg1 withBaseHTMLFile:(id)arg2 forLanguage:(id)arg3;
- (void)componentsForColor:(id)arg1 red:(float *)arg2 green:(float *)arg3 blue:(float *)arg4 alpha:(float *)arg5;
- (id)formattedHTMLString:(id)arg1 forLanguage:(id)arg2;
- (void)setDefaults;
- (id)init;

@end
