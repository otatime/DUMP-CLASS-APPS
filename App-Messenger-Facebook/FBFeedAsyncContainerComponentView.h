//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBFeedUnitAsyncTransactionController;

@interface FBFeedAsyncContainerComponentView : UIView
{
    int _identifier;
    UIView *_contentView;
    FBFeedUnitAsyncTransactionController *_asyncTransactionController;
}

@property(nonatomic) __weak FBFeedUnitAsyncTransactionController *asyncTransactionController; // @synthesize asyncTransactionController=_asyncTransactionController;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)fb_asyncTransactionContainerStateDidChange;
- (void)_openTransaction;
- (id)initWithFrame:(struct CGRect)arg1;

@end
