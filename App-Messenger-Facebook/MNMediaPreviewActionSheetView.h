//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MNMediaPreviewActionSheetViewModel, UIButton;

@interface MNMediaPreviewActionSheetView : UIView
{
    UIView *_replyView;
    UIView *_previewView;
    UIButton *_editButton;
    UIButton *_cancelButton;
    UIView *_sendSeparatorView;
    UIView *_editSeparatorView;
    UIView *_cancelSeparatorView;
    UIView *_strokeView;
    MNMediaPreviewActionSheetViewModel *_viewModel;
    id <MNMediaPreviewActionSheetViewDelegate> _delegate;
    UIButton *_sendButton;
}

@property(readonly, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) __weak id <MNMediaPreviewActionSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateStrokeView;
- (void)setPreviewView:(id)arg1 viewModel:(id)arg2;
- (void)_cancelPressed:(id)arg1;
- (void)_editPressed:(id)arg1;
- (void)_sendPressed:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_layoutSubviews;
- (struct CGSize)previewSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

