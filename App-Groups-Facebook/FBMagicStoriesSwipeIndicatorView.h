//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBTimer, UIImageView;

@interface FBMagicStoriesSwipeIndicatorView : UIView
{
    UIImageView *_imageView;
    FBTimer *_timer;
    float _progress;
}

- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setHidden:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)init;

@end
