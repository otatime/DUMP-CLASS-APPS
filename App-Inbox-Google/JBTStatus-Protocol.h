//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleCommonBaseOptional, JBTStatus_AppStateEnum, JBTStatus_NetworkQualityEnum, JBTStatus_NetworkStateEnum, NSString;

@protocol JBTStatus <NSObject, JavaObject>
- (BOOL)wasNewStoreCreated;
- (BOOL)hasMutationSyncOnlyModeLostUserData;
- (BOOL)isMutationSyncOnlyMode;
- (BOOL)isImmediateRestartRequired;
- (void)setAppStateWithJBTStatus_AppStateEnum:(JBTStatus_AppStateEnum *)arg1;
- (BOOL)isClientOrUserMakingTooManyRequests;
- (BOOL)isClientNotBigtopEnabled;
- (ComGoogleCommonBaseOptional *)isClientBigTopEnabled;
- (BOOL)hasEncounteredFatalError;
- (BOOL)isClientAuthRequired;
- (BOOL)isClientUpdatedRequired;
- (JBTStatus_NetworkQualityEnum *)getNetworkQuality;
- (JBTStatus_NetworkStateEnum *)getNetworkState;
- (void)stop;
- (BOOL)hasListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
- (void)removeListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
- (void)addListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
- (void)logDetailedStatusWithCallbackAndClientDataWithJBTCallback:(id <JBTCallback>)arg1 withNSString:(NSString *)arg2;
- (void)logDetailedStatusWithCallbackWithJBTCallback:(id <JBTCallback>)arg1;
- (void)logDetailedStatus;
- (NSString *)getStaticSummaryForDebugging;
- (NSString *)getStatusSummaryForDebugging;
- (BOOL)isRetryInProgress;
- (BOOL)isConnected;
- (int)getBackgroundSyncActiveCount;
- (int)getBackgroundSyncPendingCount;
- (int)getBackgroundSyncObjectCount;
- (int)getPendingModifiedHighPriorityCount;
- (int)getPendingModifiedCount;
- (BOOL)hasPendingModifiedObjects;
@end
