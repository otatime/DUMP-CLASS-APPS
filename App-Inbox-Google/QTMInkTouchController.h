//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, QTMInkGestureRecognizer, QTMInkView, UIView;

@interface QTMInkTouchController : NSObject <UIGestureRecognizerDelegate>
{
    BOOL _delayResponseToTouch;
    BOOL _shouldRespondToTouch;
    QTMInkGestureRecognizer *_gestureRecognizer;
    QTMInkView *_inkView;
    UIView *_baseView;
    id <QTMInkTouchControllerDelegate> _delegate;
    QTMInkView *_defaultInkView;
}

@property(nonatomic) BOOL shouldRespondToTouch; // @synthesize shouldRespondToTouch=_shouldRespondToTouch;
@property(retain, nonatomic) QTMInkView *defaultInkView; // @synthesize defaultInkView=_defaultInkView;
@property(nonatomic) __weak id <QTMInkTouchControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *baseView; // @synthesize baseView=_baseView;
@property(retain, nonatomic) QTMInkView *inkView; // @synthesize inkView=_inkView;
@property(retain, nonatomic) QTMInkGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) BOOL delayResponseToTouch; // @synthesize delayResponseToTouch=_delayResponseToTouch;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)spreadInkFromPoint:(struct CGPoint)arg1 touchLocation:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelInkGestureWithRecognizer:(id)arg1;
- (void)handleInkGesture:(id)arg1;
- (void)cancelInkTouchProcessing;
- (void)dealloc;
- (id)initWithTouchableView:(id)arg1 inkColor:(id)arg2 delegate:(id)arg3;
- (id)initWithTouchableView:(id)arg1 backgroundColorGroup:(id)arg2 delegate:(id)arg3;
- (id)initWithTouchableView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
