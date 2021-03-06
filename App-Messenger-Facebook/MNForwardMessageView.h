//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface MNForwardMessageView : UIView
{
    UIView *_composerView;
    UIView *_suggestionsView;
    UIView *_separatorView;
    UIView *_dimmingView;
    BOOL _composerViewHidden;
    BOOL _showsBlockingUI;
    float _suggestionsViewOffset;
}

@property(nonatomic) BOOL showsBlockingUI; // @synthesize showsBlockingUI=_showsBlockingUI;
@property(nonatomic) float suggestionsViewOffset; // @synthesize suggestionsViewOffset=_suggestionsViewOffset;
- (void).cxx_destruct;
- (float)_composerViewOriginYWithComposerViewHeight:(float)arg1;
- (struct CGRect)_composerViewFrameInSize:(struct CGSize)arg1;
- (void)_layoutComposerViewInBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (float)suggestionsViewTopContentInset;
- (void)setComposerViewHidden:(BOOL)arg1;
- (id)initWithComposerView:(id)arg1 suggestionsView:(id)arg2;

@end

