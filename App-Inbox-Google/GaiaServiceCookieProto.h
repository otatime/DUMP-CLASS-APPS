//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface GaiaServiceCookieProto : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long gaiaUserId; // @dynamic gaiaUserId;
@property(nonatomic) BOOL hasGaiaUserId; // @dynamic hasGaiaUserId;
@property(nonatomic) BOOL hasServiceCookie; // @dynamic hasServiceCookie;
@property(nonatomic) BOOL hasServiceId; // @dynamic hasServiceId;
@property(retain, nonatomic) NSString *serviceCookie; // @dynamic serviceCookie;
@property(nonatomic) int serviceId; // @dynamic serviceId;

@end
