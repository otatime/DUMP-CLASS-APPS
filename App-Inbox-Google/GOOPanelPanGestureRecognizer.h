//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPanGestureRecognizer.h"

@interface GOOPanelPanGestureRecognizer : UIPanGestureRecognizer
{
    BOOL _trackingPan;
    BOOL _edgeOnly;
    struct CGPoint _startPoint;
    struct CGAffineTransform _startTransform;
}

@property(nonatomic) BOOL edgeOnly; // @synthesize edgeOnly=_edgeOnly;
@property(nonatomic) BOOL trackingPan; // @synthesize trackingPan=_trackingPan;
@property(nonatomic) struct CGAffineTransform startTransform; // @synthesize startTransform=_startTransform;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;

@end

