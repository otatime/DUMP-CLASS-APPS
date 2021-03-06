//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class FBAppleMediaPickerPhotoAttachment, FBMediaAttachmentPickerPhotoPreviewView;

@interface FBMediaAttachmentPickerPhotoPreviewViewController : UIViewController
{
    FBAppleMediaPickerPhotoAttachment *_imageAttachment;
    FBMediaAttachmentPickerPhotoPreviewView *_imagePreviewView;
    id <FBMediaAttachmentPickerPhotoPreviewViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBMediaAttachmentPickerPhotoPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBAppleMediaPickerPhotoAttachment *imageAttachment; // @synthesize imageAttachment=_imageAttachment;
- (void).cxx_destruct;
- (void)_didTapUse:(id)arg1;
- (void)_didTapCancel:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (struct CGSize)contentSizeForViewInPopover;
- (id)initWithImageAttachment:(id)arg1;

@end

