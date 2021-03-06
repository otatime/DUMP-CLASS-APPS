//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PSPDFGalleryEmbeddedBackgroundView, PSPDFGalleryFullscreenBackgroundView, PSPDFGalleryView, PSPDFStatusHUDItem, PSPDFStatusHUDView, UIView<PSPDFGalleryContentViewLoading>;

@interface PSPDFGalleryContainerView : UIView
{
    id <PSPDFOverridable> _overrideDelegate;
    unsigned int _contentState;
    unsigned int _presentationMode;
    PSPDFGalleryView *_galleryView;
    UIView<PSPDFGalleryContentViewLoading> *_loadingView;
    PSPDFGalleryEmbeddedBackgroundView *_backgroundView;
    PSPDFGalleryFullscreenBackgroundView *_fullscreenBackgroundView;
    PSPDFStatusHUDView *_statusHUDView;
    UIView *_contentContainerView;
    PSPDFStatusHUDItem *_defaultHUDItem;
}

@property(retain, nonatomic) PSPDFStatusHUDItem *defaultHUDItem; // @synthesize defaultHUDItem=_defaultHUDItem;
@property(readonly, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) PSPDFStatusHUDView *statusHUDView; // @synthesize statusHUDView=_statusHUDView;
@property(retain, nonatomic) PSPDFGalleryFullscreenBackgroundView *fullscreenBackgroundView; // @synthesize fullscreenBackgroundView=_fullscreenBackgroundView;
@property(retain, nonatomic) PSPDFGalleryEmbeddedBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView<PSPDFGalleryContentViewLoading> *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) PSPDFGalleryView *galleryView; // @synthesize galleryView=_galleryView;
@property(nonatomic) unsigned int presentationMode; // @synthesize presentationMode=_presentationMode;
@property(nonatomic) unsigned int contentState; // @synthesize contentState=_contentState;
@property(readonly, nonatomic) __weak id <PSPDFOverridable> overrideDelegate; // @synthesize overrideDelegate=_overrideDelegate;
- (void).cxx_destruct;
- (void)updateContentSubviewVisibility;
- (void)updateSubviewVisibility;
- (void)updateViewState;
- (void)updateBackgroundRenderView;
- (void)dismissStatusHUDAfterTimeout;
- (void)dismissStatusHUDAnimated:(BOOL)arg1;
- (void)presentStatusHUDWithTimeout:(double)arg1 animated:(BOOL)arg2;
- (void)setContentScaleFactor:(float)arg1;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)layoutStatusHUDView;
- (void)layoutLoadingView;
- (void)layoutGalleryView;
- (void)layoutContentContainerView;
- (void)layoutFullscreenBackgroundView;
- (void)layoutBackgroundView;
- (void)layoutSubviews;
- (void)setUpDefaultHUDItem;
- (void)setUpBackgroundView;
- (void)setUpFullscreenBackgroundView;
- (void)setUpStatusHUDView;
- (void)setUpLoadingView;
- (void)setUpGalleryView;
- (void)setUpContentContainerView;
- (id)initWithFrame:(struct CGRect)arg1 overrideDelegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (Class)classForClass:(Class)arg1;

@end

