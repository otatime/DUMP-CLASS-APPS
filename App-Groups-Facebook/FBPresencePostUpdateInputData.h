//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSNumber, NSString;

@interface FBPresencePostUpdateInputData : FBGraphQLInput
{
    NSString *_clientMutationId;
    NSString *_actorId;
    NSString *_composerSessionId;
    NSNumber *_presenceIconId;
    NSString *_message;
    NSString *_placeId;
    NSString *_isExplicitPlace;
    NSNumber *_actionId;
    NSNumber *_objectId;
}

@property(copy, nonatomic) NSNumber *objectId; // @synthesize objectId=_objectId;
@property(copy, nonatomic) NSNumber *actionId; // @synthesize actionId=_actionId;
@property(copy, nonatomic) NSString *isExplicitPlace; // @synthesize isExplicitPlace=_isExplicitPlace;
@property(copy, nonatomic) NSString *placeId; // @synthesize placeId=_placeId;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSNumber *presenceIconId; // @synthesize presenceIconId=_presenceIconId;
@property(copy, nonatomic) NSString *composerSessionId; // @synthesize composerSessionId=_composerSessionId;
@property(copy, nonatomic) NSString *actorId; // @synthesize actorId=_actorId;
@property(copy, nonatomic) NSString *clientMutationId; // @synthesize clientMutationId=_clientMutationId;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

