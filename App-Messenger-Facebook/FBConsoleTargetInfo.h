//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface FBConsoleTargetInfo : NSObject <TBase, NSCoding>
{
    NSString *__identifier;
    NSString *__targetName;
    NSString *__targetVersion;
    NSString *__osName;
    NSString *__osVersion;
    NSString *__deviceModel;
    NSString *__deviceIdentifier;
    BOOL __identifier_isset;
    BOOL __targetName_isset;
    BOOL __targetVersion_isset;
    BOOL __osName_isset;
    BOOL __osVersion_isset;
    BOOL __deviceModel_isset;
    BOOL __deviceIdentifier_isset;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetDeviceIdentifier;
- (BOOL)deviceIdentifierIsSet;
@property(copy, nonatomic, getter=deviceIdentifier, setter=setDeviceIdentifier:) NSString *deviceIdentifier;
- (void)unsetDeviceModel;
- (BOOL)deviceModelIsSet;
@property(copy, nonatomic, getter=deviceModel, setter=setDeviceModel:) NSString *deviceModel;
- (void)unsetOsVersion;
- (BOOL)osVersionIsSet;
@property(copy, nonatomic, getter=osVersion, setter=setOsVersion:) NSString *osVersion;
- (void)unsetOsName;
- (BOOL)osNameIsSet;
@property(copy, nonatomic, getter=osName, setter=setOsName:) NSString *osName;
- (void)unsetTargetVersion;
- (BOOL)targetVersionIsSet;
@property(copy, nonatomic, getter=targetVersion, setter=setTargetVersion:) NSString *targetVersion;
- (void)unsetTargetName;
- (BOOL)targetNameIsSet;
@property(copy, nonatomic, getter=targetName, setter=setTargetName:) NSString *targetName;
- (void)unsetIdentifier;
- (BOOL)identifierIsSet;
@property(copy, nonatomic, getter=identifier, setter=setIdentifier:) NSString *identifier;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 targetName:(id)arg2 targetVersion:(id)arg3 osName:(id)arg4 osVersion:(id)arg5 deviceModel:(id)arg6 deviceIdentifier:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

