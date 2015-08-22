//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBBouncyButton.h"

#import "FBComposerPhotoOverlayAddDeleteButtonProtocol.h"

@class NSString, UIImage, UIImageView;

@interface FBComposerPhotoOverlayCircleButton : FBBouncyButton <FBComposerPhotoOverlayAddDeleteButtonProtocol>
{
    UIImageView *_circleImageView;
    UIImageView *_iconImageView;
    UIImage *_deleteIconClose;
    UIImage *_deleteIconOpen;
    UIImage *_plusImage;
    BOOL _deleting;
}

- (void).cxx_destruct;
- (id)_borderedCircleImageWithColor:(id)arg1;
- (id)_plusImage;
- (id)_trashClosedImage;
- (void)_animatePhotoOverlayDeleting:(BOOL)arg1;
- (void)photoOverlayViewDidExitDeleteZone;
- (void)photoOverlayViewDidEnterDeleteZone;
- (void)photoOverlayViewDidExitCircle;
- (void)photoOverlayViewDidEnterCircle;
- (void)photoOverlayViewNotSelected;
- (void)photoOverlayViewDidEndDragging;
- (void)photoOverlayViewSelected;
- (void)photoOverlayViewDidBeginDragging;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
