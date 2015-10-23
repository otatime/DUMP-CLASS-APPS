//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TAGPBGeneratedMessage.h"

@class NSString, TAGPBMutableArray;

@interface TAGPValue : TAGPBGeneratedMessage
{
}

+ (id)descriptor;
- (unsigned int)hash;

// Remaining properties
@property(nonatomic) BOOL boolean; // @dynamic boolean;
@property(nonatomic) BOOL containsReferences; // @dynamic containsReferences;
@property(retain, nonatomic) TAGPBMutableArray *escapingArray; // @dynamic escapingArray;
@property(retain, nonatomic) NSString *functionId; // @dynamic functionId;
@property(nonatomic) BOOL hasBoolean; // @dynamic hasBoolean;
@property(nonatomic) BOOL hasContainsReferences; // @dynamic hasContainsReferences;
@property(nonatomic) BOOL hasFunctionId; // @dynamic hasFunctionId;
@property(nonatomic) BOOL hasInteger; // @dynamic hasInteger;
@property(nonatomic) BOOL hasMacroReference; // @dynamic hasMacroReference;
@property(nonatomic) BOOL hasString; // @dynamic hasString;
@property(nonatomic) BOOL hasTagReference; // @dynamic hasTagReference;
@property(nonatomic) BOOL hasType; // @dynamic hasType;
@property(nonatomic) long long integer; // @dynamic integer;
@property(retain, nonatomic) TAGPBMutableArray *listItemArray; // @dynamic listItemArray;
@property(retain, nonatomic) NSString *macroReference; // @dynamic macroReference;
@property(retain, nonatomic) TAGPBMutableArray *mapKeyArray; // @dynamic mapKeyArray;
@property(retain, nonatomic) TAGPBMutableArray *mapValueArray; // @dynamic mapValueArray;
@property(retain, nonatomic) NSString *string; // @dynamic string;
@property(retain, nonatomic) NSString *tagReference; // @dynamic tagReference;
@property(retain, nonatomic) TAGPBMutableArray *templateTokenArray; // @dynamic templateTokenArray;
@property(nonatomic) int type; // @dynamic type;

@end
