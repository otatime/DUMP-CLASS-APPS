//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PSPDFAnnotation, PSPDFConfiguration, PSPDFPageView;

@protocol PSPDFAnnotationViewProtocol <NSObject>

@optional
@property(nonatomic, getter=isSelected) BOOL selected;
@property(retain, nonatomic) PSPDFConfiguration *configuration;
@property(nonatomic) __weak PSPDFPageView *pageView;
@property(nonatomic) float PDFScale;
@property(nonatomic) float zoomScale;
@property(nonatomic) unsigned int zIndex;
@property(retain, nonatomic) PSPDFAnnotation *annotation;
- (void)willRemoveFromSuperview;
- (BOOL)shouldSyncRemovalFromSuperview;
- (void)didTapAtPoint:(struct CGPoint)arg1;
- (void)didChangePageBounds:(struct CGRect)arg1;
- (void)didHidePageView:(PSPDFPageView *)arg1;
- (void)didShowPageView:(PSPDFPageView *)arg1;
@end
