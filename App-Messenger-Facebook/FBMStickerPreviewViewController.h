//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBMStickerViewDelegate.h"

@class FBMStickerResourceManager, FBMStickerView, NSString;

@interface FBMStickerPreviewViewController : UIViewController <FBMStickerViewDelegate>
{
    FBMStickerResourceManager *_stickerResourceManager;
    FBMStickerView *_stickerPreviewView;
    id <FBMStickerPreviewViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBMStickerPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)stickerViewShouldAnimate:(id)arg1;
- (void)configureWithStickerFbId:(unsigned long long)arg1;
- (id)stickerPreview;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithStickerResourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

