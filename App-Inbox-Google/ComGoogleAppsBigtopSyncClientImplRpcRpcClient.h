//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopSyncClientImplRpcRequestIdFactory, ComGoogleAppsBigtopSyncClientImplRpcRpcClientResponseReceiver, ComGoogleAppsBigtopSyncClientImplRpcServiceParameters;

@interface ComGoogleAppsBigtopSyncClientImplRpcRpcClient : NSObject
{
    ComGoogleAppsBigtopSyncClientImplRpcServiceParameters *serviceParams_;
    id <ComGoogleAppsBigtopSyncClientImplRpcRpcReceiver> requestReceiver_;
    ComGoogleAppsBigtopSyncClientImplRpcRpcClientResponseReceiver *responseReceiver_;
    ComGoogleAppsBigtopSyncClientImplRpcRequestIdFactory *requestIdFactory_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)acceptResponseWithComGoogleCumulusCommonAppMessageProto_AppMessage:(id)arg1 withComGoogleAppsBigtopSyncClientImplRpcRpcClientContext:(id)arg2 withComGoogleAppsBigtopSyncClientImplRpcRpcCallback:(id)arg3;
- (void)dispatchWithComGoogleAppsBigtopSyncClientImplRpcRpcClientContext:(id)arg1 withComGoogleProtobufMessageLite:(id)arg2 withComGoogleAppsBigtopSyncClientImplRpcRpcCallback:(id)arg3;
- (id)initWithComGoogleAppsBigtopSyncClientImplRpcServiceParameters:(id)arg1 withComGoogleAppsBigtopSyncClientImplRpcRpcReceiver:(id)arg2 withComGoogleAppsBigtopSyncClientImplRpcRpcClientResponseReceiver:(id)arg3 withComGoogleAppsBigtopSyncClientImplRpcRequestIdFactory:(id)arg4;

@end
