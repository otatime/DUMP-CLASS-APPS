//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBStoryCreateInputDataAttachmentsLifeEventExtrasEducationInfoEndDate, NSString;

@interface FBStoryCreateInputDataAttachmentsLifeEventExtrasEducationInfo : FBGraphQLInput
{
    FBStoryCreateInputDataAttachmentsLifeEventExtrasEducationInfoEndDate *_endDate;
    NSString *_graduated;
    NSString *_schoolType;
    NSString *_schoolId;
}

@property(copy, nonatomic) NSString *schoolId; // @synthesize schoolId=_schoolId;
@property(copy, nonatomic) NSString *schoolType; // @synthesize schoolType=_schoolType;
@property(copy, nonatomic) NSString *graduated; // @synthesize graduated=_graduated;
@property(copy, nonatomic) FBStoryCreateInputDataAttachmentsLifeEventExtrasEducationInfoEndDate *endDate; // @synthesize endDate=_endDate;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end
