//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "FBFIGConfig.h"

@class FBImageDownloader, NSArray, NSString, UIColor, UIImage;

@interface FBFacepileViewConfig : FBValueObject <FBFIGConfig>
{
    BOOL _scrollable;
    unsigned int _maximumNumberOfItems;
    unsigned int _maximumNumberOfRows;
    NSArray *_items;
    unsigned int _itemSize;
    unsigned int _itemStyle;
    UIImage *_itemDefaultImage;
    UIColor *_itemsBackgroundColor;
    float _itemSpacing;
    UIColor *_itemBorderLineColor;
    float _itemBorderLineWidth;
    UIColor *_backgroundColor;
    FBImageDownloader *_imageDownloader;
    struct UIEdgeInsets _insets;
}

+ (id)newWithMaximumNumberOfItems:(unsigned int)arg1 maximumNumberOfRows:(unsigned int)arg2 items:(id)arg3 itemSize:(unsigned int)arg4 itemStyle:(unsigned int)arg5 itemDefaultImage:(id)arg6 itemsBackgroundColor:(id)arg7 itemSpacing:(float)arg8 itemBorderLineColor:(id)arg9 itemBorderLineWidth:(float)arg10 insets:(struct UIEdgeInsets)arg11 scrollable:(BOOL)arg12 backgroundColor:(id)arg13 imageDownloader:(id)arg14;
@property(readonly, nonatomic) FBImageDownloader *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) BOOL scrollable; // @synthesize scrollable=_scrollable;
@property(readonly, nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(readonly, nonatomic) float itemBorderLineWidth; // @synthesize itemBorderLineWidth=_itemBorderLineWidth;
@property(readonly, copy, nonatomic) UIColor *itemBorderLineColor; // @synthesize itemBorderLineColor=_itemBorderLineColor;
@property(readonly, nonatomic) float itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(readonly, copy, nonatomic) UIColor *itemsBackgroundColor; // @synthesize itemsBackgroundColor=_itemsBackgroundColor;
@property(readonly, copy, nonatomic) UIImage *itemDefaultImage; // @synthesize itemDefaultImage=_itemDefaultImage;
@property(readonly, nonatomic) unsigned int itemStyle; // @synthesize itemStyle=_itemStyle;
@property(readonly, nonatomic) unsigned int itemSize; // @synthesize itemSize=_itemSize;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) unsigned int maximumNumberOfRows; // @synthesize maximumNumberOfRows=_maximumNumberOfRows;
@property(readonly, nonatomic) unsigned int maximumNumberOfItems; // @synthesize maximumNumberOfItems=_maximumNumberOfItems;
- (void).cxx_destruct;
- (id)_initWithMaximumNumberOfItems:(unsigned int)arg1 maximumNumberOfRows:(unsigned int)arg2 items:(id)arg3 itemSize:(unsigned int)arg4 itemStyle:(unsigned int)arg5 itemDefaultImage:(id)arg6 itemsBackgroundColor:(id)arg7 itemSpacing:(float)arg8 itemBorderLineColor:(id)arg9 itemBorderLineWidth:(float)arg10 insets:(struct UIEdgeInsets)arg11 scrollable:(BOOL)arg12 backgroundColor:(id)arg13 imageDownloader:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
