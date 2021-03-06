//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class DataAccessTokenScope, NSString, PBMutableArray, PrincipalProto, StandardDatScopeProto;

@interface LoggableDataAccessTokenProto : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PBMutableArray *delegateArray; // @dynamic delegateArray;
@property(nonatomic) BOOL hasDelegateArray; // @dynamic hasDelegateArray;
@property(nonatomic) BOOL hasNotAfter; // @dynamic hasNotAfter;
@property(nonatomic) BOOL hasNotBefore; // @dynamic hasNotBefore;
@property(nonatomic) BOOL hasObsolete1; // @dynamic hasObsolete1;
@property(nonatomic) BOOL hasOriginalTokenIdentifier; // @dynamic hasOriginalTokenIdentifier;
@property(nonatomic) BOOL hasReasonArray; // @dynamic hasReasonArray;
@property(nonatomic) BOOL hasRequester; // @dynamic hasRequester;
@property(nonatomic) BOOL hasScope; // @dynamic hasScope;
@property(nonatomic) BOOL hasStandardDatScope; // @dynamic hasStandardDatScope;
@property(nonatomic) BOOL hasTokenIdentifier; // @dynamic hasTokenIdentifier;
@property(nonatomic) BOOL hasUsage; // @dynamic hasUsage;
@property(nonatomic) long long notAfter; // @dynamic notAfter;
@property(nonatomic) long long notBefore; // @dynamic notBefore;
@property(nonatomic) unsigned int obsolete1; // @dynamic obsolete1;
@property(retain, nonatomic) NSString *originalTokenIdentifier; // @dynamic originalTokenIdentifier;
@property(retain, nonatomic) PBMutableArray *reasonArray; // @dynamic reasonArray;
@property(retain, nonatomic) PrincipalProto *requester; // @dynamic requester;
@property(retain, nonatomic) DataAccessTokenScope *scope; // @dynamic scope;
@property(retain, nonatomic) StandardDatScopeProto *standardDatScope; // @dynamic standardDatScope;
@property(retain, nonatomic) NSString *tokenIdentifier; // @dynamic tokenIdentifier;
@property(nonatomic) int usage; // @dynamic usage;

@end

