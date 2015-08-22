//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"

@class FBGraphQLService, NSString;

@interface MNThreadListMetaDataFetcher : NSObject <FBClassProvidable>
{
    FBGraphQLService *_graphQLService;
    id <FBServiceTransactionMutating> _graphQLRequest;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)_processResponseWithError:(id)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)_processResponse:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)fetchThreadListMetaDataOfMailbox:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithGraphQLService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

