//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBModelObjectProtocol.h"

@class FBMemFocusedPhoto, FBMemImage, FBMemPage, FBMemPhoto, FBMemTextWithEntities, FBMemVideo, NSArray, NSNumber, NSString;

@protocol FBQueriedReactionUnitComponentFieldsProtocol <FBModelObjectProtocol>
- (FBMemVideo *)video;
- (NSString *)topColor;
- (NSString *)timeBucket;
- (NSString *)textColor;
- (FBMemTextWithEntities *)tertiaryMessage;
- (FBMemTextWithEntities *)temperature;
- (NSArray *)tabs;
- (FBMemTextWithEntities *)subMessage;
- (NSArray *)subComponents;
- (NSArray *)secondaryActions;
- (NSString *)reloadSpinnerColor;
- (NSArray *)profiles;
- (NSArray *)photoAttachments;
- (FBMemPhoto *)photo;
- (FBMemTextWithEntities *)notificationsViewAllMessage;
- (FBMemTextWithEntities *)notificationsInlineExpansionMessage;
- (int)notificationsInlineExpansionCountValue;
- (NSNumber *)notificationsInlineExpansionCount;
- (FBMemTextWithEntities *)notificationsEmptyMessage;
- (int)notificationsDefaultCountValue;
- (NSNumber *)notificationsDefaultCount;
- (NSString *)monthText;
- (FBMemTextWithEntities *)message;
- (FBMemTextWithEntities *)matchStatusText;
- (FBMemTextWithEntities *)matchStatusSubText;
- (FBMemTextWithEntities *)matchName;
- (FBMemImage *)matchBannerImage;
- (NSArray *)locations;
- (NSString *)lastPlayTimestampText;
- (FBMemTextWithEntities *)lastPlayText;
- (NSArray *)images;
- (FBMemImage *)imageBlockImage;
- (FBMemImage *)iconImage;
- (FBMemImage *)icon;
- (NSString *)homeTeamScore;
- (FBMemTextWithEntities *)homeTeamName;
- (FBMemImage *)homeTeamLogo;
- (NSString *)headerStyle;
- (BOOL)hasTopBorderValue;
- (NSNumber *)hasTopBorder;
- (BOOL)hasInnerBordersValue;
- (NSNumber *)hasInnerBorders;
- (BOOL)hasBottomBorderValue;
- (NSNumber *)hasBottomBorder;
- (FBMemFocusedPhoto *)fallbackPhoto;
- (id <FBQueriedReactionStoryActionFieldsProtocol>)emptyStateAction;
- (FBMemImage *)decorationIcon;
- (NSString *)dateText;
- (NSString *)componentTrackingData;
- (NSString *)componentStyle;
- (NSString *)componentLogicalPath;
- (NSString *)color;
- (FBMemPage *)city;
- (NSString *)bottomColor;
- (NSString *)awayTeamScore;
- (FBMemTextWithEntities *)awayTeamName;
- (FBMemImage *)awayTeamLogo;
- (int)autoExecuteActionDelayValue;
- (NSNumber *)autoExecuteActionDelay;
- (NSArray *)actions;
- (id <FBQueriedReactionStoryActionFieldsProtocol>)action;
@end

