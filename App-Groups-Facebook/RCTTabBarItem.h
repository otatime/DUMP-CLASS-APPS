//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UITabBarItem;

@interface RCTTabBarItem : UIView
{
    BOOL _selected;
    UITabBarItem *_barItem;
    id _icon;
}

@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(copy, nonatomic) id icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)backingViewController;
@property(readonly, nonatomic) UITabBarItem *barItem; // @synthesize barItem=_barItem;

@end
