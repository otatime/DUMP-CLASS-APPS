//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface FBRapidFeedbackTransparentBackgroundView : UIView
{
    BOOL _shouldForwardEvents;
    UIView *_underlyingView;
    CDUnknownBlockType _tapCallback;
}

@property(copy, nonatomic) CDUnknownBlockType tapCallback; // @synthesize tapCallback=_tapCallback;
@property(nonatomic) BOOL shouldForwardEvents; // @synthesize shouldForwardEvents=_shouldForwardEvents;
@property(nonatomic) __weak UIView *underlyingView; // @synthesize underlyingView=_underlyingView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

