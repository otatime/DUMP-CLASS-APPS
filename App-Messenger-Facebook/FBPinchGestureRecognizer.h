//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPinchGestureRecognizer.h"

@interface FBPinchGestureRecognizer : UIPinchGestureRecognizer
{
    unsigned int _maximumNumberOfTouches;
    BOOL _beginsImmediately;
}

@property(nonatomic) BOOL beginsImmediately; // @synthesize beginsImmediately=_beginsImmediately;
@property(nonatomic) unsigned int maximumNumberOfTouches; // @synthesize maximumNumberOfTouches=_maximumNumberOfTouches;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_commonInit;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)init;

@end
