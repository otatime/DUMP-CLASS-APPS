//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MKMapViewDelegate.h"

@class CLLocation, MKMapView, NSMutableArray, NSString, UIGestureRecognizer, UILongPressGestureRecognizer;

@interface MNSimpleMapViewController : UIViewController <MKMapViewDelegate>
{
    MKMapView *_mapView;
    UIGestureRecognizer *_tapRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    NSMutableArray *_annotations;
    id <MNSimpleMapViewControllerDelegate> _delegate;
    CLLocation *_location;
}

@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) __weak id <MNSimpleMapViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleLongPress:(id)arg1;
- (void)_handleTap:(id)arg1;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)_removeAllAnnotations;
- (void)_addAnnotation:(id)arg1;
- (void)_addAnnotationForLocation:(id)arg1;
- (void)_updateAnnotation;
- (void)setView:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

