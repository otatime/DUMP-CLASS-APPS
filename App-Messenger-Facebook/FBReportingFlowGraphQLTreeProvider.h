//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBReportingFlowConfigProviderProtocol.h"

@class FBUserSession, NSString;

@interface FBReportingFlowGraphQLTreeProvider : NSObject <FBReportingFlowConfigProviderProtocol>
{
    FBUserSession *_session;
    NSString *_counterpartyUID;
    NSString *_location;
    id <FBServiceTransactionMutating> _networkRequest;
    id <FBReportingFlowConfigProviderDelegateProtocol> _delegate;
    int _type;
    int _style;
}

- (void).cxx_destruct;
- (void)processParsedResponse:(id)arg1;
- (void)requestPromptModel:(id)arg1 nodeID:(id)arg2;
- (id)initWithUserSession:(id)arg1 location:(id)arg2 style:(int)arg3;
- (id)initWithUserSession:(id)arg1 counterpartyUID:(id)arg2 style:(int)arg3;

@end

