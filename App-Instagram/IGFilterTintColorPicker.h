//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UIGestureRecognizerDelegate.h"

@class NSMutableArray, NSString;

@interface IGFilterTintColorPicker : UIControl <UIGestureRecognizerDelegate>
{
    id <IGFilterTintColorPickerDelegate> _delegate;
    unsigned int _currentTintType;
    unsigned int _currentColorIndex;
    NSMutableArray *_boundingBoxes;
}

@property(retain, nonatomic) NSMutableArray *boundingBoxes; // @synthesize boundingBoxes=_boundingBoxes;
@property(nonatomic) unsigned int currentColorIndex; // @synthesize currentColorIndex=_currentColorIndex;
@property(nonatomic) unsigned int currentTintType; // @synthesize currentTintType=_currentTintType;
@property(nonatomic) __weak id <IGFilterTintColorPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned int)currentTintColor;
- (BOOL)isAnyColorSelected;
- (void)handleTapFrom:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (unsigned int)closestColorIndex:(struct CGPoint)arg1;
- (float)paddedPickerWidth;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

