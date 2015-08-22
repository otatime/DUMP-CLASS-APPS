//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIImage;

@protocol FBGroupsLandingViewConfig <NSObject>
@property(nonatomic) BOOL shouldAdjustContentInsets;
@property(nonatomic) BOOL showAddToHomeScreenInMenu;
@property(nonatomic) BOOL canShowCreatePog;
@property(retain, nonatomic) UIColor *sectionDividerColor;
@property(retain, nonatomic) UIColor *sectionHeaderTitleColor;
@property(retain, nonatomic) UIColor *pogTitleColor;
@property(retain, nonatomic) UIColor *accentColor;
- (UIImage *)blankPogImageForGroupID:(NSString *)arg1;
@end
