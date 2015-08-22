//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@interface CBLCinematicPinImageView : UIImageView
{
    BOOL _requestingImage;
    id <CBLCinematicPinImageViewDelegate> _delegate;
    int _lastRequestedFrame;
    float _lastRenderedOffset;
}

@property(nonatomic) BOOL requestingImage; // @synthesize requestingImage=_requestingImage;
@property(nonatomic) float lastRenderedOffset; // @synthesize lastRenderedOffset=_lastRenderedOffset;
@property(nonatomic) int lastRequestedFrame; // @synthesize lastRequestedFrame=_lastRequestedFrame;
@property(nonatomic) __weak id <CBLCinematicPinImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;

@end

