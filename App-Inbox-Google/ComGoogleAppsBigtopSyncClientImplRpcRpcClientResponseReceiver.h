//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncClientImplRpcRpcReceiver.h"

@class NSString;

@interface ComGoogleAppsBigtopSyncClientImplRpcRpcClientResponseReceiver : NSObject <ComGoogleAppsBigtopSyncClientImplRpcRpcReceiver>
{
    id <JavaUtilMap> pendingRpcsReceiversByReqId_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getReceiverWithInt_;
- (void)dealloc;
- (id)init;
- (id)getReceiverWithInt:(int)arg1;
- (void)acceptWithComGoogleCumulusCommonAppMessageProto_AppMessage:(id)arg1;
- (void)register__WithInt:(int)arg1 withComGoogleAppsBigtopSyncClientImplRpcRpcReceiver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
