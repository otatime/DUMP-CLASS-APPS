//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface MNStackedContainerView : UIView
{
    struct CGRect _keyboardFrame;
    NSArray *_stackedContainerSubviews;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setKeyboardFrame:(struct CGRect)arg1;
- (void)addSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 subviews:(id)arg2;

@end

