//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZRBaseDataFetcher.h"

#import "FBClassProvidable.h"
#import "FBRequestDelegate.h"

@class NSDictionary, NSString;

@interface ZROptinContentDataFetcher : ZRBaseDataFetcher <FBRequestDelegate, FBClassProvidable>
{
    id <ZROptinContentDataFetcherDelegate> _delegate;
    NSDictionary *_response;
    NSDictionary *_savedNetworkIdentifier;
    NSString *_screenScale;
}

@property(copy, nonatomic) NSString *screenScale; // @synthesize screenScale=_screenScale;
@property(copy, nonatomic) NSDictionary *savedNetworkIdentifier; // @synthesize savedNetworkIdentifier=_savedNetworkIdentifier;
@property(copy, nonatomic) NSDictionary *response; // @synthesize response=_response;
@property(nonatomic) id <ZROptinContentDataFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didLoad:(id)arg2;
- (void)doSend;
- (void)doCancel;
- (void)didFailWithError:(id)arg1;
- (void)didSucceed;
- (void)send;
- (void)sendNetworkIdentifier:(id)arg1;
- (void)_cancelRequest;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;
- (id)initWithFacebook:(id)arg1 errorHandler:(id)arg2;
- (id)initWithFacebook:(id)arg1 errorHandler:(id)arg2 screenScale:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
