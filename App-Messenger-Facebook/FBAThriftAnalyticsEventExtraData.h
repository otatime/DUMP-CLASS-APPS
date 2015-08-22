//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class FBAThriftAnalyticsCustomExtraData, FBAThriftAnalyticsDeviceStatusExtraData, NSString;

@interface FBAThriftAnalyticsEventExtraData : TBaseStruct <TBase, NSCoding>
{
    FBAThriftAnalyticsCustomExtraData *__thrift_customExtraData;
    FBAThriftAnalyticsDeviceStatusExtraData *__thrift_deviceStatusExtraData;
    BOOL __thrift_customExtraData_set;
    BOOL __thrift_deviceStatusExtraData_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetDeviceStatusExtraData;
- (BOOL)deviceStatusExtraDataIsSet;
@property(retain, nonatomic) FBAThriftAnalyticsDeviceStatusExtraData *deviceStatusExtraData;
- (void)unsetCustomExtraData;
- (BOOL)customExtraDataIsSet;
@property(retain, nonatomic) FBAThriftAnalyticsCustomExtraData *customExtraData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomExtraData:(id)arg1 deviceStatusExtraData:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
