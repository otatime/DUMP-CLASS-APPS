//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMThreadMarking.h"
#import "FBSessionClassProvidable.h"
#import "MNServiceControllable.h"

@class FBAnalytics, FBMMQTTConnectStateTrackerService, FBMReadMarkCache, FBMReadMarkCachePopulator, FBMThreadMarkFilterer, FBMThreadSet, NSString;

@interface FBMThreadMarkService : NSObject <MNServiceControllable, FBSessionClassProvidable, FBMThreadMarking>
{
    FBMThreadMarkFilterer *_markingFilterer;
    FBMReadMarkCache *_savedCache;
    FBMReadMarkCache *_optimisticCache;
    FBMReadMarkCachePopulator *_savedCachePopulator;
    BOOL _isStarted;
    FBAnalytics *_analytics;
    FBMThreadSet *_threadSet;
    FBMMQTTConnectStateTrackerService *_mqttConnectionStateTracker;
    id <FBProvider> _mqttThreadSenderProvider;
    id <FBProvider> _graphMarkerProvider;
    id <MNAuthenticationManager> _authenticationManager;
}

- (void).cxx_destruct;
- (void)markThreadWithKey:(id)arg1 action:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setServerTimestampForThreadKey:(id)arg1 serverTime:(unsigned long long)arg2;
- (void)clearReadTimestampForThreadKey:(id)arg1;
- (unsigned long long)readTimestampForThreadKey:(id)arg1;
- (void)handleIdle;
- (void)stop;
- (void)start:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

