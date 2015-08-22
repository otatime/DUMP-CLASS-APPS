//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, FBComposerAlbumAttachment, FBComposerAppAttribution, FBComposerBootstrapTransitioningDeprecatedContent, FBComposerChannelsPostingSummary, FBComposerContentSuggestion, FBComposerDestination, FBComposerGoodwillCampaignAttachment, FBComposerLifeEventAttachments, FBComposerPostEditingSummary, FBComposerPostPayload, FBComposerProductItemAttachment, FBComposerSelectableDate, FBComposerTraits, FBNearbyPlace, FBTaggableActivityComposition, FBTypedNSArrayOfFBComposerPerson, FBTypedNSArrayOfFBComposerPublishedHashtag, FBTypedNSArrayOfNSString, NSArray, NSDate, NSDictionary, NSString;

@interface FBComposerBootstrapContentBuilder : NSObject
{
    NSString *_compositionID;
    FBComposerTraits *_traits;
    FBComposerDestination *_destination;
    NSString *_contentOrigin;
    NSString *_sourceType;
    unsigned int _postContentType;
    NSString *_parentComposerSessionID;
    NSString *_statusText;
    NSArray *_attachments;
    FBNearbyPlace *_taggedPlace;
    BOOL _isPlaceUserSelected;
    CLLocation *_location;
    NSDictionary *_extraAnalyticsDataForInitEvent;
    NSString *_reviewPublishMechanism;
    NSString *_reviewPublishSurface;
    unsigned int _starRating;
    FBComposerAppAttribution *_appAttribution;
    FBTaggableActivityComposition *_taggedActivity;
    NSString *_placeholderText;
    FBTypedNSArrayOfFBComposerPublishedHashtag *_hashtags;
    FBTypedNSArrayOfNSString *_deniedLinks;
    BOOL _userRemovedAllExistingLinks;
    FBComposerAlbumAttachment *_albumAttachment;
    FBTypedNSArrayOfFBComposerPerson *_taggedUsersFromWithWho;
    FBComposerProductItemAttachment *_productItemAttachment;
    FBComposerPostEditingSummary *_postEditingSummary;
    FBComposerBootstrapTransitioningDeprecatedContent *_deprecatedBootstrapContent;
    FBComposerGoodwillCampaignAttachment *_goodwillCampaignAttachment;
    FBComposerSelectableDate *_lifeEventDate;
    FBComposerLifeEventAttachments *_lifeEventAttachments;
    FBComposerChannelsPostingSummary *_channelsPostingSummary;
    FBComposerPostPayload *_postPayload;
    FBComposerContentSuggestion *_contentSuggestion;
    NSDate *_scheduledDate;
    BOOL _publishAsQuestionAndAnswerSession;
    BOOL _isRedSpacePost;
}

+ (id)composerBootstrapContentFromExistingComposerBootstrapContent:(id)arg1;
+ (id)composerBootstrapContent;
- (void).cxx_destruct;
- (id)withIsRedSpacePost:(BOOL)arg1;
- (id)withPublishAsQuestionAndAnswerSession:(BOOL)arg1;
- (id)withScheduledDate:(id)arg1;
- (id)withContentSuggestion:(id)arg1;
- (id)withPostPayload:(id)arg1;
- (id)withChannelsPostingSummary:(id)arg1;
- (id)withLifeEventAttachments:(id)arg1;
- (id)withLifeEventDate:(id)arg1;
- (id)withGoodwillCampaignAttachment:(id)arg1;
- (id)withDeprecatedBootstrapContent:(id)arg1;
- (id)withPostEditingSummary:(id)arg1;
- (id)withProductItemAttachment:(id)arg1;
- (id)withTaggedUsersFromWithWho:(id)arg1;
- (id)withAlbumAttachment:(id)arg1;
- (id)withUserRemovedAllExistingLinks:(BOOL)arg1;
- (id)withDeniedLinks:(id)arg1;
- (id)withHashtags:(id)arg1;
- (id)withPlaceholderText:(id)arg1;
- (id)withTaggedActivity:(id)arg1;
- (id)withAppAttribution:(id)arg1;
- (id)withStarRating:(unsigned int)arg1;
- (id)withReviewPublishSurface:(id)arg1;
- (id)withReviewPublishMechanism:(id)arg1;
- (id)withExtraAnalyticsDataForInitEvent:(id)arg1;
- (id)withLocation:(id)arg1;
- (id)withIsPlaceUserSelected:(BOOL)arg1;
- (id)withTaggedPlace:(id)arg1;
- (id)withAttachments:(id)arg1;
- (id)withStatusText:(id)arg1;
- (id)withParentComposerSessionID:(id)arg1;
- (id)withPostContentType:(unsigned int)arg1;
- (id)withSourceType:(id)arg1;
- (id)withContentOrigin:(id)arg1;
- (id)withDestination:(id)arg1;
- (id)withTraits:(id)arg1;
- (id)withCompositionID:(id)arg1;
- (id)build;

@end
