//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, PrincipalProto;

@interface LoggableGaiaMintProto_LoggableDatInfo : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) BOOL hasOriginalTokenIdentifier; // @dynamic hasOriginalTokenIdentifier;
@property(nonatomic) BOOL hasRequester; // @dynamic hasRequester;
@property(nonatomic) BOOL hasUsage; // @dynamic hasUsage;
@property(retain, nonatomic) NSString *originalTokenIdentifier; // @dynamic originalTokenIdentifier;
@property(retain, nonatomic) PrincipalProto *requester; // @dynamic requester;
@property(nonatomic) int usage; // @dynamic usage;

@end

