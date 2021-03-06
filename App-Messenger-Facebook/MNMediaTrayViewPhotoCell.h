//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "POPAnimationDelegate.h"

@class FBLazyCreator, FLAnimatedImageView, MNPhotoImage, MNPhotoStaticImage, NSString, NSURL, UIAccessibilityElement, UIButton, UIView;

@interface MNMediaTrayViewPhotoCell : UICollectionViewCell <POPAnimationDelegate>
{
    FLAnimatedImageView *_imageView;
    MNPhotoImage *_originalImage;
    MNPhotoStaticImage *_selectedImage;
    UIButton *_sendButton;
    UIButton *_editButton;
    UIView *_buttonContainerView;
    UIView *_blurView;
    UIAccessibilityElement *_mediaElement;
    UIAccessibilityElement *_sendButtonElement;
    UIAccessibilityElement *_editButtonElement;
    FBLazyCreator *_accessibleElementsCreator;
    BOOL _enableEditing;
    unsigned int _assetIndex;
    NSURL *_assetURL;
    id <FBCancelable> _imageFetchingRequest;
    id <FBCancelable> _defaultUTIAndImageDataFetchingRequest;
    id <FBCancelable> _imageDataFetchingRequest;
    id <MNMediaTrayViewPhotoCellDelegate> _delegate;
}

@property(nonatomic) __weak id <MNMediaTrayViewPhotoCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <FBCancelable> imageDataFetchingRequest; // @synthesize imageDataFetchingRequest=_imageDataFetchingRequest;
@property(retain, nonatomic) id <FBCancelable> defaultUTIAndImageDataFetchingRequest; // @synthesize defaultUTIAndImageDataFetchingRequest=_defaultUTIAndImageDataFetchingRequest;
@property(retain, nonatomic) id <FBCancelable> imageFetchingRequest; // @synthesize imageFetchingRequest=_imageFetchingRequest;
@property(copy, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(nonatomic) BOOL enableEditing; // @synthesize enableEditing=_enableEditing;
@property(nonatomic) unsigned int assetIndex; // @synthesize assetIndex=_assetIndex;
- (void).cxx_destruct;
- (id)_createAccessibleElementsCreator;
- (void)updateAccessibleElements;
- (id)_createAccessibleElements;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (id)accessibilityElements;
- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;
- (void)_initializeBlurViewIfNeeded;
- (void)_updateBlurView;
- (void)setSelected:(BOOL)arg1;
- (void)setSelectedImage:(id)arg1;
- (BOOL)hasAnimatedImage;
- (BOOL)hasStaticImage;
@property(readonly, nonatomic) MNPhotoImage *image;
- (void)setImage:(id)arg1 animated:(BOOL)arg2;
- (void)_updateSubviewsAnimated:(BOOL)arg1;
- (void)_layoutButtonContainer;
- (void)_layoutButtons;
- (void)_setDisplayedImage:(id)arg1 animated:(BOOL)arg2;
- (void)_updateImage;
- (void)_updateDisplayedImageAnimated:(BOOL)arg1;
- (void)_layoutImage;
- (void)layoutSubviews;
- (void)_onSelectTapEdit:(id)arg1;
- (void)_onSelectTapSend:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

