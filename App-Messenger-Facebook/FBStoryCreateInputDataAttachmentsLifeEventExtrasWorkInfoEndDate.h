//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSNumber;

@interface FBStoryCreateInputDataAttachmentsLifeEventExtrasWorkInfoEndDate : FBGraphQLInput
{
    NSNumber *_year;
    NSNumber *_month;
    NSNumber *_day;
}

@property(copy, nonatomic) NSNumber *day; // @synthesize day=_day;
@property(copy, nonatomic) NSNumber *month; // @synthesize month=_month;
@property(copy, nonatomic) NSNumber *year; // @synthesize year=_year;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

