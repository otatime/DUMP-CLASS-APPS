//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLPinCloseupBaseView.h"

#import "UIGestureRecognizerDelegate.h"

@class CBLPin, CBLPinCloseupVisualSearchOverlay, CBLPinImageView, NSString, UIImageView, UILongPressGestureRecognizer;

@interface CBLPinCloseupImageView : CBLPinCloseupBaseView <UIGestureRecognizerDelegate>
{
    id <CBLPinCloseupImageViewDelegate> _delegate;
    CBLPinCloseupVisualSearchOverlay *_visualSearchOverlay;
    CBLPinImageView *_imageView;
    UIImageView *_videoIconImageView;
    UILongPressGestureRecognizer *_repinLongPressGesture;
    CBLPin *_pin;
}

+ (BOOL)shouldDisplayForPin:(id)arg1;
@property(retain, nonatomic) CBLPin *pin; // @synthesize pin=_pin;
@property(readonly, nonatomic) UILongPressGestureRecognizer *repinLongPressGesture; // @synthesize repinLongPressGesture=_repinLongPressGesture;
@property(readonly, nonatomic) UIImageView *videoIconImageView; // @synthesize videoIconImageView=_videoIconImageView;
@property(retain, nonatomic) CBLPinImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) CBLPinCloseupVisualSearchOverlay *visualSearchOverlay; // @synthesize visualSearchOverlay=_visualSearchOverlay;
@property(nonatomic) __weak id <CBLPinCloseupImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pinImageTapped:(id)arg1;
- (void)pinImageLongPressed:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)prepareForReuse;
- (void)updateWithPin:(id)arg1;
- (id)delegateProtocol;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
