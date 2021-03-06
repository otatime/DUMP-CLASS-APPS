//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGQEExperimentUserGroup, NSArray, NSDictionary, NSMutableArray, NSString;

@interface IGQEExperiment : NSObject
{
    double _lastExposureEventTime;
    IGQEExperimentUserGroup *_exposedGroup;
    BOOL _useDeviceId;
    NSMutableArray *_storedBackgroundRequests;
    NSString *_key;
    NSArray *_userGroups;
    NSString *_descriptiveName;
    IGQEExperimentUserGroup *_serverSideUserGroup;
    IGQEExperimentUserGroup *_defaultUserGroup;
    NSDictionary *_exposeData;
}

+ (id)experimentWithKey:(id)arg1 name:(id)arg2 groups:(id)arg3 useDeviceId:(BOOL)arg4;
+ (id)experimentWithKey:(id)arg1 name:(id)arg2 booleanValue:(BOOL)arg3 useDeviceId:(BOOL)arg4;
@property(retain, nonatomic) NSDictionary *exposeData; // @synthesize exposeData=_exposeData;
@property(readonly, nonatomic) IGQEExperimentUserGroup *defaultUserGroup; // @synthesize defaultUserGroup=_defaultUserGroup;
@property(retain, nonatomic) IGQEExperimentUserGroup *serverSideUserGroup; // @synthesize serverSideUserGroup=_serverSideUserGroup;
@property(readonly, copy, nonatomic) NSString *descriptiveName; // @synthesize descriptiveName=_descriptiveName;
@property(readonly, copy, nonatomic) NSArray *userGroups; // @synthesize userGroups=_userGroups;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)clearUserGroupOverride;
@property(retain, nonatomic) IGQEExperimentUserGroup *overrideUserGroup;
- (id)overrideUserGroupIndexKey;
- (id)generateServerSideUserGroupParameters:(id)arg1;
- (id)exposeValueForParameterNamed:(id)arg1;
- (BOOL)wasExposed;
- (void)sendBackgroundExposure;
- (void)sendExposureEventIfNecessary;
- (id)description;
- (id)initWithKey:(id)arg1 name:(id)arg2 groups:(id)arg3 useDeviceId:(BOOL)arg4;
- (void)dealloc;

@end

