//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBStoryCreateInputDataPastTimeBackdatedTime, NSNumber;

@interface FBStoryCreateInputDataPastTime : FBGraphQLInput
{
    NSNumber *_timeSinceOriginalPost;
    FBStoryCreateInputDataPastTimeBackdatedTime *_backdatedTime;
}

@property(copy, nonatomic) FBStoryCreateInputDataPastTimeBackdatedTime *backdatedTime; // @synthesize backdatedTime=_backdatedTime;
@property(copy, nonatomic) NSNumber *timeSinceOriginalPost; // @synthesize timeSinceOriginalPost=_timeSinceOriginalPost;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

