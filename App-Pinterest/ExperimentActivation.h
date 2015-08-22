//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface ExperimentActivation : NSObject <TBase, NSCoding>
{
    long long __time;
    NSString *__experimentHash;
    NSString *__experimentName;
    int __experimentVersion;
    NSString *__experimentGroup;
    int __appType;
    NSString *__requestId;
    long long __userId;
    NSString *__sessionId;
    NSString *__country;
    NSString *__ipAddress;
    NSString *__uniqueId;
    NSString *__experimentInfo;
    NSString *__contextInfo;
    BOOL __time_isset;
    BOOL __experimentHash_isset;
    BOOL __experimentName_isset;
    BOOL __experimentVersion_isset;
    BOOL __experimentGroup_isset;
    BOOL __appType_isset;
    BOOL __requestId_isset;
    BOOL __userId_isset;
    BOOL __sessionId_isset;
    BOOL __country_isset;
    BOOL __ipAddress_isset;
    BOOL __uniqueId_isset;
    BOOL __experimentInfo_isset;
    BOOL __contextInfo_isset;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetContextInfo;
- (BOOL)contextInfoIsSet;
@property(retain, nonatomic, getter=contextInfo, setter=setContextInfo:) NSString *contextInfo;
- (void)unsetExperimentInfo;
- (BOOL)experimentInfoIsSet;
@property(retain, nonatomic, getter=experimentInfo, setter=setExperimentInfo:) NSString *experimentInfo;
- (void)unsetUniqueId;
- (BOOL)uniqueIdIsSet;
@property(retain, nonatomic, getter=uniqueId, setter=setUniqueId:) NSString *uniqueId;
- (void)unsetIpAddress;
- (BOOL)ipAddressIsSet;
@property(retain, nonatomic, getter=ipAddress, setter=setIpAddress:) NSString *ipAddress;
- (void)unsetCountry;
- (BOOL)countryIsSet;
@property(retain, nonatomic, getter=country, setter=setCountry:) NSString *country;
- (void)unsetSessionId;
- (BOOL)sessionIdIsSet;
@property(retain, nonatomic, getter=sessionId, setter=setSessionId:) NSString *sessionId;
- (void)unsetUserId;
- (BOOL)userIdIsSet;
@property(nonatomic, getter=userId, setter=setUserId:) long long userId;
- (void)unsetRequestId;
- (BOOL)requestIdIsSet;
@property(retain, nonatomic, getter=requestId, setter=setRequestId:) NSString *requestId;
- (void)unsetAppType;
- (BOOL)appTypeIsSet;
@property(nonatomic, getter=appType, setter=setAppType:) int appType;
- (void)unsetExperimentGroup;
- (BOOL)experimentGroupIsSet;
@property(retain, nonatomic, getter=experimentGroup, setter=setExperimentGroup:) NSString *experimentGroup;
- (void)unsetExperimentVersion;
- (BOOL)experimentVersionIsSet;
@property(nonatomic, getter=experimentVersion, setter=setExperimentVersion:) int experimentVersion;
- (void)unsetExperimentName;
- (BOOL)experimentNameIsSet;
@property(retain, nonatomic, getter=experimentName, setter=setExperimentName:) NSString *experimentName;
- (void)unsetExperimentHash;
- (BOOL)experimentHashIsSet;
@property(retain, nonatomic, getter=experimentHash, setter=setExperimentHash:) NSString *experimentHash;
- (void)unsetTime;
- (BOOL)timeIsSet;
@property(nonatomic, getter=time, setter=setTime:) long long time;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTime:(long long)arg1 experimentHash:(id)arg2 experimentName:(id)arg3 experimentVersion:(int)arg4 experimentGroup:(id)arg5 appType:(int)arg6 requestId:(id)arg7 userId:(long long)arg8 sessionId:(id)arg9 country:(id)arg10 ipAddress:(id)arg11 uniqueId:(id)arg12 experimentInfo:(id)arg13 contextInfo:(id)arg14;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
