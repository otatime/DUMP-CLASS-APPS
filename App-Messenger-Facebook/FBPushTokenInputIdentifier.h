//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSString;

@interface FBPushTokenInputIdentifier : FBGraphQLInput
{
    NSString *_token;
    NSString *_appId;
}

@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

