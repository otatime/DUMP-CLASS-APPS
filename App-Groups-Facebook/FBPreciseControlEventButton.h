//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface FBPreciseControlEventButton : UIButton
{
    BOOL _dragOutsideOfBound;
    struct CGRect _extendedBounds;
    BOOL _wantImageViewExtendToBounds;
    struct CGSize _extendedTouchArea;
}

@property(nonatomic) BOOL wantImageViewExtendToBounds; // @synthesize wantImageViewExtendToBounds=_wantImageViewExtendToBounds;
@property(nonatomic) struct CGSize extendedTouchArea; // @synthesize extendedTouchArea=_extendedTouchArea;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_setExtendedBounds:(struct CGRect)arg1 extendedTouchSize:(struct CGSize)arg2;
- (void)setExtendedTouchSize:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;

@end
