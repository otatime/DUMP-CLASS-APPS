//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFSegmentedControl.h"

@class NSArray, UIColor;

@interface AFRoundedRectSegmentedControl : AFSegmentedControl
{
    NSArray *_icons;
    NSArray *_titles;
    UIColor *_textColor;
    UIColor *_strokeColor;
}

+ (BOOL)usesSpacerBetweenButtons;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
- (void).cxx_destruct;
- (int)numberOfItems;
- (id)segmentItemForIndex:(int)arg1;
- (id)initWithTitles:(id)arg1 icons:(id)arg2 textColor:(id)arg3 strokeColor:(id)arg4;

@end

