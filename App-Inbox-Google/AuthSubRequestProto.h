//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface AuthSubRequestProto : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *fullApiName; // @dynamic fullApiName;
@property(nonatomic) BOOL hasFullApiName; // @dynamic hasFullApiName;
@property(nonatomic) BOOL hasHttpAuthorizationHeader; // @dynamic hasHttpAuthorizationHeader;
@property(nonatomic) BOOL hasHttpMethod; // @dynamic hasHttpMethod;
@property(nonatomic) BOOL hasHttpRequestUrl; // @dynamic hasHttpRequestUrl;
@property(nonatomic) BOOL hasQueryAndPostParams; // @dynamic hasQueryAndPostParams;
@property(nonatomic) BOOL hasRequestIpAddress; // @dynamic hasRequestIpAddress;
@property(retain, nonatomic) NSString *httpAuthorizationHeader; // @dynamic httpAuthorizationHeader;
@property(retain, nonatomic) NSString *httpMethod; // @dynamic httpMethod;
@property(retain, nonatomic) NSString *httpRequestUrl; // @dynamic httpRequestUrl;
@property(retain, nonatomic) NSString *queryAndPostParams; // @dynamic queryAndPostParams;
@property(retain, nonatomic) NSString *requestIpAddress; // @dynamic requestIpAddress;

@end

