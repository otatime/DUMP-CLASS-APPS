//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBContainerViewController.h"

#import "MNActionSheetPresenting.h"
#import "MNMediaCollectionViewControllerDelegate.h"
#import "MNMediaPreviewActionSheetViewDelegate.h"

@class MNMediaCollectionViewController, MNMediaPreviewActionSheetView, MNMessageSourceAppAttributionViewModel, MNTextAndAttachmentForwardContent, NSString;

@interface MNMediaPreviewActionSheetViewController : FBContainerViewController <MNMediaPreviewActionSheetViewDelegate, MNMediaCollectionViewControllerDelegate, MNActionSheetPresenting>
{
    MNTextAndAttachmentForwardContent *_content;
    MNMediaPreviewActionSheetView *_actionSheetView;
    MNMediaCollectionViewController *_contentViewController;
    MNMessageSourceAppAttributionViewModel *_attributionViewModel;
    id <MNMediaCollectionFetching> _contentFetcher;
    id <MNActionSheetPresentationDelegate> _presentationDelegate;
    id <MNMediaPreviewActionSheetViewControllerDelegate> _delegate;
}

@property(nonatomic) id <MNMediaPreviewActionSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MNActionSheetPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void).cxx_destruct;
- (void)actionSheetDidResize;
- (void)_setUpActionSheetForNewContent;
- (void)mediaCollectionViewController:(id)arg1 didSelectPlatformApplication:(id)arg2;
- (void)mediaCollectionViewControllerDidDeselectContent:(id)arg1;
- (void)mediaCollectionViewControllerDidChangePreferredSize:(id)arg1;
- (void)mediaCollectionViewController:(id)arg1 didSelectContent:(id)arg2 atIndex:(unsigned int)arg3;
- (void)actionSheetViewDidTapCancel:(id)arg1;
- (void)actionSheetViewDidTapEdit:(id)arg1;
- (void)actionSheetViewDidTapSend:(id)arg1;
- (void)_loadPreviewViewForContentViewController;
- (void)_loadPreviewViewForContent;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithContentViewController:(id)arg1 attributionViewModel:(id)arg2;
- (id)initWithContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
