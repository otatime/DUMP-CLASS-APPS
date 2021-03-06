//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSearchBaseAppSpecificConfigProtocol.h"

@class NSArray, NSString;

@interface FBSearchBaseAppSpecificConfig : NSObject <FBSearchBaseAppSpecificConfigProtocol>
{
    BOOL _shouldCenterAlignVerifiedBadgeInNullState;
    BOOL _shouldUseFollowIconInsteadOfLikeIcon;
    BOOL _shouldAllowUnfollowing;
    BOOL _shouldAllowUserFollow;
    BOOL _shouldAllowUserSendFriendRequest;
    BOOL _seeMoreResultsDisabled;
    BOOL _shouldAllowSearchMessagingInlineAction;
    BOOL _graphSearchEnablePublicPostsOnly;
    NSArray *_graphSearchKeywordResultsFilterNamesArray;
}

+ (id)applicationSpecificSearchConfig;
@property(copy, nonatomic) NSArray *graphSearchKeywordResultsFilterNamesArray; // @synthesize graphSearchKeywordResultsFilterNamesArray=_graphSearchKeywordResultsFilterNamesArray;
@property(nonatomic) BOOL graphSearchEnablePublicPostsOnly; // @synthesize graphSearchEnablePublicPostsOnly=_graphSearchEnablePublicPostsOnly;
@property(nonatomic) BOOL shouldAllowSearchMessagingInlineAction; // @synthesize shouldAllowSearchMessagingInlineAction=_shouldAllowSearchMessagingInlineAction;
@property(nonatomic) BOOL seeMoreResultsDisabled; // @synthesize seeMoreResultsDisabled=_seeMoreResultsDisabled;
@property(nonatomic) BOOL shouldAllowUserSendFriendRequest; // @synthesize shouldAllowUserSendFriendRequest=_shouldAllowUserSendFriendRequest;
@property(nonatomic) BOOL shouldAllowUserFollow; // @synthesize shouldAllowUserFollow=_shouldAllowUserFollow;
@property(nonatomic) BOOL shouldAllowUnfollowing; // @synthesize shouldAllowUnfollowing=_shouldAllowUnfollowing;
@property(nonatomic) BOOL shouldUseFollowIconInsteadOfLikeIcon; // @synthesize shouldUseFollowIconInsteadOfLikeIcon=_shouldUseFollowIconInsteadOfLikeIcon;
@property(nonatomic) BOOL shouldCenterAlignVerifiedBadgeInNullState; // @synthesize shouldCenterAlignVerifiedBadgeInNullState=_shouldCenterAlignVerifiedBadgeInNullState;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

