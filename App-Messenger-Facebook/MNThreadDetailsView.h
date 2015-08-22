//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MNLoadingView, MNStackedContainerScrollView, UICollectionView, UITableView;

@interface MNThreadDetailsView : UIView
{
    UIView *_detailsHeaderView;
    MNLoadingView *_loadingView;
    BOOL _showHeaderAsCell;
    UITableView *_tableView;
    UICollectionView *_collectionView;
    unsigned int _layoutMode;
    MNStackedContainerScrollView *_containerScrollView;
}

@property(retain, nonatomic) MNStackedContainerScrollView *containerScrollView; // @synthesize containerScrollView=_containerScrollView;
@property(readonly, nonatomic) unsigned int layoutMode; // @synthesize layoutMode=_layoutMode;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)_updateFooterViewFrame;
- (void)_updateHeaderViewFrameWithSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 layoutMode:(unsigned int)arg2 headerView:(id)arg3 showHeaderAsCell:(BOOL)arg4 tableViewDelegate:(id)arg5 tableViewDataSource:(id)arg6;

@end
