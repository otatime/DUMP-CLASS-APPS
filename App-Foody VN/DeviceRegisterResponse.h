//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CloudResponse.h"

@class NSString;

@interface DeviceRegisterResponse : CloudResponse
{
    NSString *deviceId;
}

@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId;
- (void).cxx_destruct;
- (void)onEndElement:(id)arg1 name:(id)arg2 text:(id)arg3;
- (id)getRegisteredDeviceId;

@end

