//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSArray, NSString;

@interface FBHomeMigrateInputDataPrivacy : FBGraphQLInput
{
    NSString *_baseState;
    NSArray *_allow;
    NSArray *_deny;
    NSString *_tagExpansionState;
}

@property(copy, nonatomic) NSString *tagExpansionState; // @synthesize tagExpansionState=_tagExpansionState;
@property(copy, nonatomic) NSArray *deny; // @synthesize deny=_deny;
@property(copy, nonatomic) NSArray *allow; // @synthesize allow=_allow;
@property(copy, nonatomic) NSString *baseState; // @synthesize baseState=_baseState;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

