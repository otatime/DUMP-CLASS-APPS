//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface MNStackedContainerSubview : NSObject
{
    UIView *_view;
    float _topMargin;
    float _bottomMargin;
    float _leftMargin;
    float _rightMargin;
}

@property(readonly, nonatomic) float rightMargin; // @synthesize rightMargin=_rightMargin;
@property(readonly, nonatomic) float leftMargin; // @synthesize leftMargin=_leftMargin;
@property(readonly, nonatomic) float bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(readonly, nonatomic) float topMargin; // @synthesize topMargin=_topMargin;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)initSubviewWithView:(id)arg1 topMargin:(float)arg2 bottomMargin:(float)arg3 leftMargin:(float)arg4 rightMargin:(float)arg5;
- (id)initHorizontallyCenteredSubviewWithView:(id)arg1 topMargin:(float)arg2 bottomMargin:(float)arg3;

@end

