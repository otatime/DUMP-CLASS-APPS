//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface PSPDFPopOutMenu : UIView
{
    BOOL _expanded;
    NSArray *_items;
    unsigned int _selectedItemIndex;
    unsigned int _expansionDirection;
    float _itemPadding;
    struct CGRect _anchorFrame;
}

@property(nonatomic) float itemPadding; // @synthesize itemPadding=_itemPadding;
@property(nonatomic) unsigned int expansionDirection; // @synthesize expansionDirection=_expansionDirection;
@property(nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property(nonatomic) unsigned int selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) struct CGRect anchorFrame; // @synthesize anchorFrame=_anchorFrame;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)frameForItemAtIndex:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)updateItemVisibilityAnimated:(BOOL)arg1;
- (void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2;
- (void)toggleAnimated:(BOOL)arg1;
@property(retain, nonatomic) UIView *selectedItem;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
