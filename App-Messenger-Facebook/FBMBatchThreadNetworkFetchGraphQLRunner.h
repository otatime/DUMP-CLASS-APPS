//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBMBatchThreadNetworkFetchRunning.h"

@class FBGraphQLService, FBMBatchThreadFetchRequestConfiguration, FBMGraphQLThreadFetchErrorHandler, FBMMemModelThreadParser, MNGraphQLQueryConfigGenerator, MNMessagingRegionHeaderHelper, NSMutableArray, NSString;

@interface FBMBatchThreadNetworkFetchGraphQLRunner : NSObject <FBMBatchThreadNetworkFetchRunning, FBClassProvidable>
{
    FBGraphQLService *_graphQLService;
    FBMMemModelThreadParser *_memModelThreadParser;
    FBMGraphQLThreadFetchErrorHandler *_threadFetchErrorHandler;
    MNGraphQLQueryConfigGenerator *_queryConfigGenerator;
    MNMessagingRegionHeaderHelper *_messagingRegionHeaderHelper;
    FBMBatchThreadFetchRequestConfiguration *_batchConfig;
    id <FBMBatchThreadNetworkFetchRunningListener> _listener;
    id <FBServiceTransactionMutating> _requestToken;
    unsigned int _numberOfResponsesExpected;
    NSMutableArray *_responsesReceived;
    BOOL _useGraphQLBatch;
}

- (void).cxx_destruct;
- (void)_graphQLServiceFinishedWithSuccess;
- (void)_configureGraphQLServiceConfig:(id)arg1 requestPriority:(int)arg2;
- (void)_handleGraphQLServiceSuccessWithResponse:(id)arg1;
- (void)_handleGraphQLServiceFailureWithError:(id)arg1;
- (void)cancel;
- (void)configureAndRunFetchRequestWithConfiguration:(id)arg1 listener:(id)arg2;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithGraphQLService:(id)arg1 memModelThreadParser:(id)arg2 threadFetchErrorHandler:(id)arg3 queryConfigGenerator:(id)arg4 messagingRegionHeaderHelper:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

