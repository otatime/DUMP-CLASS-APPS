//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBOptimisticPayloadFactoryProtocol.h"

@class FBGroupLeaveInputData, FBMemGroupLeaveResponsePayload;

@protocol FBGroupLeaveMutationOptimisticPayloadFactoryProtocol <FBOptimisticPayloadFactoryProtocol>
- (FBMemGroupLeaveResponsePayload *)rollbackOptimisticPayload:(FBGroupLeaveInputData *)arg1;
- (FBMemGroupLeaveResponsePayload *)optimisticPayload:(FBGroupLeaveInputData *)arg1;
@end

