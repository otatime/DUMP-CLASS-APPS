//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "MNAttachmentView.h"

@class MNAgentMessageReceiptViewModel, MNBusinessNavigationHandler, NSString, UIButton;

@interface MNAgentMessageReceiptView : UIControl <MNAttachmentView>
{
    UIButton *_viewReceiptButton;
    MNBusinessNavigationHandler *_navigationHandler;
    MNAgentMessageReceiptViewModel *_viewModel;
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 withViewModel:(id)arg2;
@property(copy, nonatomic) MNAgentMessageReceiptViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak MNBusinessNavigationHandler *navigationHandler; // @synthesize navigationHandler=_navigationHandler;
- (void).cxx_destruct;
- (void)_didTapViewReceiptButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 imageDownloader:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

