//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBGroupsTableSectionHeaderView, NSString, UIColor;

@protocol FBGroupsMembersViewConfig <NSObject>
@property(nonatomic) BOOL showActionSheetToNonAdmins;
@property(retain, nonatomic) UIColor *sectionDividerColor;
@property(retain, nonatomic) UIColor *searchBarBackgroundColor;
@property(retain, nonatomic) UIColor *tintColor;
@property(retain, nonatomic) UIColor *tableViewBackgroundColor;
@property(retain, nonatomic) UIColor *mediumGrayTextColor;
@property(retain, nonatomic) UIColor *cellSeperatorColor;
@property(retain, nonatomic) UIColor *cellSelectedColor;
- (FBGroupsTableSectionHeaderView *)sectionHeaderWithTitle:(NSString *)arg1;
@end
