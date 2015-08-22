//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CBLCart, CBLCheckoutLoadingPlaceholder, NSMutableArray;

@interface CBLCheckoutSummaryFooterView : UIView
{
    BOOL _showPlaceholder;
    CBLCart *_cart;
    float _leftMargin;
    NSMutableArray *_subtotalTitleLabels;
    NSMutableArray *_subtotalValueLabels;
    CBLCheckoutLoadingPlaceholder *_loadingPlaceholder;
}

@property(readonly, nonatomic) CBLCheckoutLoadingPlaceholder *loadingPlaceholder; // @synthesize loadingPlaceholder=_loadingPlaceholder;
@property(readonly, nonatomic) NSMutableArray *subtotalValueLabels; // @synthesize subtotalValueLabels=_subtotalValueLabels;
@property(readonly, nonatomic) NSMutableArray *subtotalTitleLabels; // @synthesize subtotalTitleLabels=_subtotalTitleLabels;
@property(nonatomic) BOOL showPlaceholder; // @synthesize showPlaceholder=_showPlaceholder;
@property(nonatomic) float leftMargin; // @synthesize leftMargin=_leftMargin;
@property(retain, nonatomic) CBLCart *cart; // @synthesize cart=_cart;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 cart:(id)arg2 leftMargin:(float)arg3;

@end

