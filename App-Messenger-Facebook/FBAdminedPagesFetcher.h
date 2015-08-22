//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAppService.h"

@class NSSet, NSString;

@interface FBAdminedPagesFetcher : NSObject <FBAppService>
{
    id <FBNetworkDispatch> _networkDispatcher;
    id <FBAdminedPagesFetchListener> _listener;
    id <FBHttpRequestToken> _networkerToken;
}

+ (id)_parseResponse:(id)arg1;
@property(retain, nonatomic) id <FBHttpRequestToken> networkerToken; // @synthesize networkerToken=_networkerToken;
- (void).cxx_destruct;
- (void)_handleFetchDataFailure:(id)arg1;
- (void)_handleFetchDataSuccess:(id)arg1 request:(id)arg2;
- (void)fetchPageViewerInfo;
- (void)stopAppServiceWithDependencies:(id)arg1;
- (void)startAppServiceWithDependencies:(id)arg1;
@property(readonly, nonatomic) unsigned int serviceStartupLevel;
@property(readonly, copy, nonatomic) NSSet *appServiceDependencyIDs;
@property(readonly, copy, nonatomic) NSString *appServiceID;
- (id)initWithNetworkDispatcher:(id)arg1 listener:(id)arg2;
- (id)initWithSession:(id)arg1 listener:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
