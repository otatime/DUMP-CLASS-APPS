//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData, SimpleSecretLabelProto;

@interface SimpleSecretProto : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) BOOL hasLabel; // @dynamic hasLabel;
@property(nonatomic) BOOL hasSecret; // @dynamic hasSecret;
@property(retain, nonatomic) SimpleSecretLabelProto *label; // @dynamic label;
@property(retain, nonatomic) NSData *secret; // @dynamic secret;

@end

