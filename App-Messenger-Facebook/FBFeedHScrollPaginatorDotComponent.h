//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKComponent.h"

@class UIColor;

@interface FBFeedHScrollPaginatorDotComponent : CKComponent
{
    UIColor *_selectedColor;
    UIColor *_deselectedColor;
    struct CGSize _intrinsicSize;
}

+ (id)newWithConfig:(const struct FBFeedHScrollPaginatorDotConfiguration *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;
- (void)setSelected:(BOOL)arg1;

@end

