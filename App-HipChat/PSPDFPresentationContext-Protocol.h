//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFErrorHandler.h"
#import "PSPDFOverridable.h"
#import "PSPDFVisiblePagesDataSource.h"

@class NSArray, PSPDFAnnotationStateManager, PSPDFAnnotationToolbarController, PSPDFConfiguration, PSPDFDocument, PSPDFKit, PSPDFPageView, PSPDFViewController, UIPopoverController, UIScrollView, UIViewController;

@protocol PSPDFPresentationContext <PSPDFOverridable, PSPDFVisiblePagesDataSource, PSPDFErrorHandler>
@property(readonly, nonatomic) PSPDFViewController *pdfController;
@property(readonly, nonatomic) id <PSPDFControlDelegate> actionDelegate;
@property(readonly, nonatomic) PSPDFAnnotationToolbarController *annotationToolbarController;
@property(readonly, nonatomic) PSPDFAnnotationStateManager *annotationStateManager;
@property(readonly, nonatomic) UIScrollView *pagingScrollView;
@property(readonly, nonatomic, getter=isViewWillAppearing) BOOL viewWillAppearing;
@property(readonly, nonatomic, getter=isHUDVisible) BOOL HUDVisible;
@property(readonly, nonatomic, getter=isRotationActive) BOOL rotationActive;
@property(readonly, nonatomic, getter=isViewLockEnabled) BOOL viewLockEnabled;
@property(readonly, nonatomic, getter=isScrollingEnabled) BOOL scrollingEnabled;
@property(readonly, nonatomic, getter=isDoublePageMode) BOOL doublePageMode;
@property(readonly, nonatomic) struct UIEdgeInsets scrollViewInsets;
@property(readonly, nonatomic) struct CGRect contentRect;
@property(readonly, nonatomic) unsigned int viewMode;
@property(readonly, nonatomic) PSPDFDocument *document;
@property(readonly, nonatomic) UIViewController *visibleViewControllerInPopoverController;
@property(readonly, nonatomic) UIViewController *halfModalController;
@property(readonly, nonatomic) UIPopoverController *popoverController;
@property(readonly, nonatomic) UIViewController *displayingViewController;
@property(readonly, nonatomic) PSPDFKit *pspdfkit;
@property(readonly, copy, nonatomic) PSPDFConfiguration *configuration;
- (unsigned int)landscapePageForPage:(unsigned int)arg1;
- (unsigned int)portraitPageForLandscapePage:(unsigned int)arg1;
- (BOOL)isDoublePageModeForPage:(unsigned int)arg1;
- (BOOL)isDoublePageModeForLandscape:(BOOL)arg1;
- (BOOL)isRightPageInDoublePageMode:(unsigned int)arg1;
- (PSPDFPageView *)pageViewForPage:(unsigned int)arg1;
- (NSArray *)visiblePageViewsForcingLayout:(BOOL)arg1;
- (NSArray *)visiblePageViews;
@end

