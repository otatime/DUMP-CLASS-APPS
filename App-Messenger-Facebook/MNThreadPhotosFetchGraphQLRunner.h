//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"

@class FBGraphQLService, MNGraphQLQueryConfigGenerator, MNMessagingRegionHeaderHelper, NSString;

@interface MNThreadPhotosFetchGraphQLRunner : NSObject <FBClassProvidable>
{
    FBGraphQLService *_graphQLService;
    id <FBServiceTransactionMutating> _graphQLRequest;
    MNGraphQLQueryConfigGenerator *_queryConfigGenerator;
    MNMessagingRegionHeaderHelper *_messagingRegionHeaderHelper;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)_configureGraphQLServiceConfig:(id)arg1;
- (void)_processResponseWithError:(id)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)_processResponse:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)fetchPhotosOfThreadWithThreadKey:(id)arg1 afterCursor:(id)arg2 numPhotosToFetch:(unsigned int)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithGraphQLService:(id)arg1 queryConfigGenerator:(id)arg2 messagingRegionHeaderHelper:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
