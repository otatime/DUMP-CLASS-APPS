//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, UIColor;

@interface NIGroupedCellBackground : NSObject
{
    UIColor *_innerBackgroundColor;
    NSMutableArray *_highlightedInnerGradientColors;
    float _shadowWidth;
    UIColor *_shadowColor;
    UIColor *_borderColor;
    UIColor *_dividerColor;
    float _borderRadius;
    NSMutableDictionary *_cachedImages;
    struct CGSize _shadowOffset;
}

+ (float)minPixelOffset;
@property(retain, nonatomic) NSMutableDictionary *cachedImages; // @synthesize cachedImages=_cachedImages;
@property(nonatomic) float borderRadius; // @synthesize borderRadius=_borderRadius;
@property(retain, nonatomic) UIColor *dividerColor; // @synthesize dividerColor=_dividerColor;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) float shadowWidth; // @synthesize shadowWidth=_shadowWidth;
@property(retain, nonatomic) NSMutableArray *highlightedInnerGradientColors; // @synthesize highlightedInnerGradientColors=_highlightedInnerGradientColors;
@property(retain, nonatomic) UIColor *innerBackgroundColor; // @synthesize innerBackgroundColor=_innerBackgroundColor;
- (void).cxx_destruct;
- (id)imageForFirst:(BOOL)arg1 last:(BOOL)arg2 highlighted:(BOOL)arg3 drawDivider:(BOOL)arg4;
- (id)imageForFirst:(BOOL)arg1 last:(BOOL)arg2 highlighted:(BOOL)arg3;
- (int)backgroundTagForFirst:(BOOL)arg1 last:(BOOL)arg2 drawDivider:(BOOL)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)_invalidateCache;
- (id)cacheKeyForFirst:(BOOL)arg1 last:(BOOL)arg2 highlighted:(BOOL)arg3 drawDivider:(BOOL)arg4;
- (id)_imageForFirst:(BOOL)arg1 last:(BOOL)arg2 highlighted:(BOOL)arg3 drawDivider:(BOOL)arg4;
- (id)_imageForHighlight;
- (void)_applyPathToContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2 isFirst:(BOOL)arg3 isLast:(BOOL)arg4;
- (void)_applyRightPathToContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)_applyLeftPathToContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)_applyDividerPathToContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)_applyBottomPathToContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)_applyTopPathToContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)_applySinglePathToContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (id)init;

@end
