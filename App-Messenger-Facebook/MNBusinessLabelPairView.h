//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MNBusinessView.h"

@class MNBusinessLabelPairViewModel, MNBusinessLabelView, NSString;

@interface MNBusinessLabelPairView : UIView <MNBusinessView>
{
    MNBusinessLabelView *_label1;
    MNBusinessLabelView *_label2;
    MNBusinessLabelPairViewModel *_viewModel;
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 withViewModel:(id)arg2;
@property(copy, nonatomic) MNBusinessLabelPairViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

