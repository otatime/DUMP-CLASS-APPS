//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNThreadContextDownloader.h"

@class FBGraphQLService, FBMCanonicalThreadKey, NSString;

@interface MNUserThreadContextDownloader : NSObject <FBClassProvidable, MNThreadContextDownloader>
{
    FBGraphQLService *_graphQLService;
    FBMCanonicalThreadKey *_canonicalThreadKey;
    id <FBServiceTransactionMutating> _graphQLRequest;
}

- (void).cxx_destruct;
- (void)_processResponse:(id)arg1 error:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_startDownloaderForCanonicalThreadKey:(id)arg1 callbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)startDownloaderForThreadKey:(id)arg1 callbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithGraphQLService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

