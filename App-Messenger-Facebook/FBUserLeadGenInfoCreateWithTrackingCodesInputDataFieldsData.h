//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSArray, NSString;

@interface FBUserLeadGenInfoCreateWithTrackingCodesInputDataFieldsData : FBGraphQLInput
{
    NSString *_fieldKey;
    NSArray *_values;
}

@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(copy, nonatomic) NSString *fieldKey; // @synthesize fieldKey=_fieldKey;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

