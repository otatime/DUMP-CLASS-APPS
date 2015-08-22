//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, NSMutableArray, NSTextStorage;

@interface RCTText : UIView
{
    NSTextStorage *_textStorage;
    NSMutableArray *_reactSubviews;
    CAShapeLayer *_highlightLayer;
    struct UIEdgeInsets _contentInset;
}

@property(retain, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)reactTagAtPoint:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)reactSubviews;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(int)arg2;
- (void)reactSetFrame:(struct CGRect)arg1;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;

@end
