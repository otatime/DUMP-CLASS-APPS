//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBStoryCreateInputDataAttachmentsLifeEventExtras, FBStoryCreateInputDataAttachmentsLifeEventStartDate, NSString;

@interface FBStoryCreateInputDataAttachmentsLifeEvent : FBGraphQLInput
{
    NSString *_icon;
    NSString *_source;
    NSString *_lifeEventType;
    FBStoryCreateInputDataAttachmentsLifeEventStartDate *_startDate;
    FBStoryCreateInputDataAttachmentsLifeEventExtras *_extras;
}

@property(copy, nonatomic) FBStoryCreateInputDataAttachmentsLifeEventExtras *extras; // @synthesize extras=_extras;
@property(copy, nonatomic) FBStoryCreateInputDataAttachmentsLifeEventStartDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *lifeEventType; // @synthesize lifeEventType=_lifeEventType;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end
