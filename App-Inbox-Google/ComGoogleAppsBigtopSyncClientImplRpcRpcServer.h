//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncClientImplRpcRpcReceiver.h"

@class ComGoogleAppsBigtopSyncClientImplRpcServiceParameters, NSString;

@interface ComGoogleAppsBigtopSyncClientImplRpcRpcServer : NSObject <ComGoogleAppsBigtopSyncClientImplRpcRpcReceiver>
{
    ComGoogleAppsBigtopSyncClientImplRpcServiceParameters *serviceParams_;
    id <ComGoogleAppsBigtopSyncClientImplRpcServerInterface> serverInterface_;
    id <ComGoogleAppsBigtopSyncClientImplRpcRpcReceiver> responseReceiver_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)acceptWithComGoogleCumulusCommonAppMessageProto_AppMessage:(id)arg1;
- (id)initWithComGoogleAppsBigtopSyncClientImplRpcServiceParameters:(id)arg1 withComGoogleAppsBigtopSyncClientImplRpcServerInterface:(id)arg2 withComGoogleAppsBigtopSyncClientImplRpcRpcReceiver:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
