//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSArray, NSString;

@interface FBStoryCreateInputDataAttachmentsProductItemDescription : FBGraphQLInput
{
    NSString *_text;
    NSArray *_ranges;
}

@property(copy, nonatomic) NSArray *ranges; // @synthesize ranges=_ranges;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

