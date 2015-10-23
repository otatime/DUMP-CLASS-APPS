//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableDictionary, NSString;

@interface AFInfinitePagingView : UIScrollView <UIScrollViewDelegate>
{
    BOOL _paging;
    id <AFInfinitePagingViewDataSource> _dataSource;
    id <AFInfinitePagingViewDelegate> _pagingDelegate;
    float _pageWidth;
    unsigned int _currentIndex;
    unsigned int _numItems;
    NSMutableDictionary *_reusableItems;
    NSMutableDictionary *_reusableItemClasses;
    NSMutableDictionary *_currentItems;
    float _lastOffset;
}

@property(nonatomic, getter=isPaging) BOOL paging; // @synthesize paging=_paging;
@property(nonatomic) float lastOffset; // @synthesize lastOffset=_lastOffset;
@property(retain, nonatomic) NSMutableDictionary *currentItems; // @synthesize currentItems=_currentItems;
@property(retain, nonatomic) NSMutableDictionary *reusableItemClasses; // @synthesize reusableItemClasses=_reusableItemClasses;
@property(retain, nonatomic) NSMutableDictionary *reusableItems; // @synthesize reusableItems=_reusableItems;
@property(nonatomic) unsigned int numItems; // @synthesize numItems=_numItems;
@property(nonatomic) unsigned int currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) float pageWidth; // @synthesize pageWidth=_pageWidth;
@property(nonatomic) __weak id <AFInfinitePagingViewDelegate> pagingDelegate; // @synthesize pagingDelegate=_pagingDelegate;
@property(nonatomic) __weak id <AFInfinitePagingViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (unsigned int)indexRightOfIndex:(unsigned int)arg1 numberOfItems:(unsigned int)arg2;
- (unsigned int)indexLeftOfIndex:(unsigned int)arg1 numberOfItems:(unsigned int)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pageToContentOffset:(struct CGPoint)arg1 index:(int)arg2;
- (void)pageBackward;
- (void)pageForward;
- (void)removeItemWithIndex:(unsigned int)arg1;
- (void)insertItemWithIndex:(unsigned int)arg1 atOffset:(float)arg2;
- (void)insertItemIfNecessaryWithIndex:(unsigned int)arg1 atOffset:(float)arg2;
- (void)layoutSubviews;
@property(readonly, nonatomic) NSArray *currentCells;
- (void)setFrame:(struct CGRect)arg1;
- (void)reloadData;
- (id)dequeueReusableItemViewForReuseIdentifier:(id)arg1;
- (void)registerItemViewClass:(Class)arg1 forReuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
