//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSString, UICollectionView;

@interface CBLSearchResultsHeaderView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    BOOL _fadingOut;
    id <CBLSearchResultsHeaderViewDelegate> _delegate;
    NSArray *_suggestedQueries;
    UICollectionView *_collectionView;
    int _modeSeparatorIndex;
    CDUnknownBlockType _fadeOutCompletion;
}

+ (struct CGSize)itemSize;
@property(copy, nonatomic) CDUnknownBlockType fadeOutCompletion; // @synthesize fadeOutCompletion=_fadeOutCompletion;
@property(nonatomic) BOOL fadingOut; // @synthesize fadingOut=_fadingOut;
@property(nonatomic) int modeSeparatorIndex; // @synthesize modeSeparatorIndex=_modeSeparatorIndex;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *suggestedQueries; // @synthesize suggestedQueries=_suggestedQueries;
@property(nonatomic) __weak id <CBLSearchResultsHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
@property(readonly, nonatomic) BOOL showModeSeparator;
- (void)fadeIn;
- (void)fadeOut;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

