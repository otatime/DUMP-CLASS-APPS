//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GOOSideViewItemLayoutSource, NSNumber, NSString, UIColor, UIImage, UIView;

@protocol GOOSideViewItem <NSObject>
@property(readonly, nonatomic) UIImage *icon;
@property(readonly, copy, nonatomic) NSString *title;

@optional
@property(readonly, copy, nonatomic) NSString *accessibilityLabel;
@property(readonly, nonatomic) GOOSideViewItemLayoutSource *layoutSource;
@property(readonly, nonatomic) UIView *selectedBackgroundView;
@property(readonly, nonatomic) UIView *backgroundView;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) UIView *accessoryView;
@property(readonly, nonatomic) UIColor *selectedTextColor;
@property(readonly, nonatomic) UIColor *textColor;
@property(readonly, nonatomic) UIImage *selectedIcon;
@property(readonly, nonatomic) NSNumber *lineBreakMode;
@end
