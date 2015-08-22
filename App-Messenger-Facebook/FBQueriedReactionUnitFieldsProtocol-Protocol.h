//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBModelObjectProtocol.h"

@class FBMemImage, FBMemPage, FBMemPageQuestion, FBMemPhoto, FBMemReactionAggregatedUnitsConnection, FBMemReactionStoryAttachmentsConnection, FBMemReactionUnitExpirationCondition, FBMemReactionUnitUserSettings, FBMemTextWithEntities, NSArray, NSNumber, NSString;

@protocol FBQueriedReactionUnitFieldsProtocol <FBModelObjectProtocol>
- (id <FBQueriedMediaFieldsProtocol>)welcomeNotePhoto;
- (FBMemTextWithEntities *)welcomeNoteMessage;
- (FBMemPage *)venue;
- (FBMemReactionUnitUserSettings *)unitUserSettings;
- (NSString *)unitTypeToken;
- (NSString *)unitStyle;
- (FBMemReactionUnitExpirationCondition *)unitExpirationCondition;
- (FBMemTextWithEntities *)summary;
- (NSString *)status;
- (FBMemTextWithEntities *)showMoreAttachmentsPrompt;
- (NSString *)settingsToken;
- (id <FBQueriedReactionUnitHeaderFieldsProtocol>)reactionUnitHeader;
- (NSArray *)reactionUnitComponents;
- (NSArray *)reactionAttachmentsStyleList;
- (FBMemReactionStoryAttachmentsConnection *)reactionAttachments;
- (FBMemReactionAggregatedUnitsConnection *)reactionAggregatedUnits;
- (id <FBQueriedProfileFieldsProtocol>)profile;
- (FBMemPhoto *)photo;
- (FBMemPageQuestion *)pageQuestion;
- (FBMemTextWithEntities *)pageInfoMessage;
- (FBMemPage *)page;
- (FBMemTextWithEntities *)message;
- (NSString *)impressionInfo;
- (FBMemImage *)iconImage;
- (int)homeTeamScoreValue;
- (NSNumber *)homeTeamScore;
- (FBMemPage *)homeTeam;
- (NSString *)graphQLID;
- (FBMemTextWithEntities *)gameTimeText;
- (NSArray *)footerActions;
- (FBMemTextWithEntities *)contextMessage;
- (int)awayTeamScoreValue;
- (NSNumber *)awayTeamScore;
- (FBMemPage *)awayTeam;
@end

