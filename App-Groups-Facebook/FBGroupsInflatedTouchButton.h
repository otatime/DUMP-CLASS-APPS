//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class FBButtonConfig;

@interface FBGroupsInflatedTouchButton : UIButton
{
    FBButtonConfig *_buttonConfig;
}

- (void).cxx_destruct;
- (struct CGRect)_expandedBounds;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithButtonConfig:(id)arg1;

@end

