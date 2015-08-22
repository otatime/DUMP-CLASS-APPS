//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MNBusinessView.h"

@class MNBusinessTableViewModel, NSMutableArray, NSString;

@interface MNBusinessTableView : UIView <MNBusinessView>
{
    NSMutableArray *_rows;
    MNBusinessTableViewModel *_viewModel;
    id <MNBusinessTableViewProvider> _viewProvider;
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 withViewModel:(id)arg2 viewProvider:(Class)arg3;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 withViewModel:(id)arg2;
@property(nonatomic) __weak id <MNBusinessTableViewProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(copy, nonatomic) MNBusinessTableViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

