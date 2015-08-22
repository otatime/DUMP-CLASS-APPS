//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBModelObjectProtocol.h"

@class FBMemImage, FBMemProfileQuestion, FBMemTextWithEntities, NSNumber, NSString;

@protocol FBQueriedTimelineInfoReviewItemFieldsProtocol <FBModelObjectProtocol>
- (FBMemTextWithEntities *)title;
- (NSString *)timelineReviewItemType;
- (FBMemTextWithEntities *)subtitle;
- (NSString *)session;
- (NSString *)redirectURLString;
- (FBMemProfileQuestion *)profileQuestion;
- (NSString *)itemToken;
- (BOOL)isExpandedValue;
- (NSNumber *)isExpanded;
- (FBMemImage *)iconImage;
- (NSString *)graphQLID;
@end
