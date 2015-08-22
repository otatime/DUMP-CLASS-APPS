//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

#import "FBNetworkCDNRequestProtocol.h"

@class NSString, NSURL;

@interface FBImageDownloadRequest : FBNetworkerRequest <FBNetworkCDNRequestProtocol>
{
    CDUnknownBlockType _responseHandlerFactory;
    BOOL _enabledCDNStatusQuery;
    BOOL _enabledCacheStatusQuery;
    BOOL _squareSafeImage;
    NSURL *_URL;
    float _currentDownloadProgress;
    unsigned int _firstByte;
}

@property(readonly, nonatomic) unsigned int firstByte; // @synthesize firstByte=_firstByte;
@property(nonatomic) BOOL squareSafeImage; // @synthesize squareSafeImage=_squareSafeImage;
@property(nonatomic) float currentDownloadProgress; // @synthesize currentDownloadProgress=_currentDownloadProgress;
@property(readonly, retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) BOOL enabledCacheStatusQuery; // @synthesize enabledCacheStatusQuery=_enabledCacheStatusQuery;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (id)networkRequest;
- (id)initWithURL:(id)arg1 startingAtByte:(unsigned int)arg2 callbackPerformer:(id)arg3;
- (id)initWithURL:(id)arg1 startingAtByte:(unsigned int)arg2 callbackPerformer:(id)arg3 responseHandlerFactory:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
