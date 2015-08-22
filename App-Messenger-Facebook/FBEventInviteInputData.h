//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBEventInviteInputDataContext, NSArray, NSString;

@interface FBEventInviteInputData : FBGraphQLInput
{
    NSString *_clientMutationId;
    NSString *_actorId;
    NSString *_eventId;
    NSArray *_inviteeIds;
    FBEventInviteInputDataContext *_context;
}

@property(copy, nonatomic) FBEventInviteInputDataContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSArray *inviteeIds; // @synthesize inviteeIds=_inviteeIds;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(copy, nonatomic) NSString *actorId; // @synthesize actorId=_actorId;
@property(copy, nonatomic) NSString *clientMutationId; // @synthesize clientMutationId=_clientMutationId;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

