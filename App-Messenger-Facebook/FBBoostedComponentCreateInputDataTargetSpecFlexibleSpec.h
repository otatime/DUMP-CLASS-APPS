//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSArray;

@interface FBBoostedComponentCreateInputDataTargetSpecFlexibleSpec : FBGraphQLInput
{
    NSArray *_connectionIds;
    NSArray *_friendsOfConnectionIds;
}

@property(copy, nonatomic) NSArray *friendsOfConnectionIds; // @synthesize friendsOfConnectionIds=_friendsOfConnectionIds;
@property(copy, nonatomic) NSArray *connectionIds; // @synthesize connectionIds=_connectionIds;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

