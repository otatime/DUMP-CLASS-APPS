//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "PSPDFCacheDelegate.h"

@class CALayer, NSString, PSPDFCache, PSPDFDocument, PSPDFRoundedLabel, UIColor, UIImageView;

@interface PSPDFThumbnailGridViewCell : UICollectionViewCell <PSPDFCacheDelegate>
{
    struct CGSize _customImageSize;
    CALayer *_shadowLayer;
    BOOL _shadowEnabled;
    BOOL _pageLabelEnabled;
    PSPDFDocument *_document;
    unsigned int _page;
    UIColor *_bookmarkImageColor;
    unsigned int _maskStyle;
    UIImageView *_imageView;
    UIImageView *_bookmarkImageView;
    PSPDFRoundedLabel *_pageLabel;
    PSPDFCache *_cache;
    struct UIEdgeInsets _edgeInsets;
}

@property(readonly, nonatomic) PSPDFCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) PSPDFRoundedLabel *pageLabel; // @synthesize pageLabel=_pageLabel;
@property(retain, nonatomic) UIImageView *bookmarkImageView; // @synthesize bookmarkImageView=_bookmarkImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned int maskStyle; // @synthesize maskStyle=_maskStyle;
@property(retain, nonatomic) UIColor *bookmarkImageColor; // @synthesize bookmarkImageColor=_bookmarkImageColor;
@property(nonatomic, getter=isPageLabelEnabled) BOOL pageLabelEnabled; // @synthesize pageLabelEnabled=_pageLabelEnabled;
@property(nonatomic, getter=isShadowEnabled) BOOL shadowEnabled; // @synthesize shadowEnabled=_shadowEnabled;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) unsigned int page; // @synthesize page=_page;
@property(retain, nonatomic) PSPDFDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)didRenderImage:(id)arg1 document:(id)arg2 page:(unsigned int)arg3 size:(struct CGSize)arg4;
- (void)loadImageAsync;
- (void)setImage:(id)arg1 animated:(BOOL)arg2;
- (void)updateImageViewBackgroundColor;
- (void)updateImageSize;
- (void)setImageSize:(struct CGSize)arg1;
- (void)updatePageLabel;
- (void)updateShadow;
- (BOOL)isSelectedOrHighlighted;
- (id)pathShadowForView:(id)arg1;
- (void)updateBookmarkImage;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)updateAccessibilityLabelWithBookmarkedInfo:(BOOL)arg1;
- (void)updateCell;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

