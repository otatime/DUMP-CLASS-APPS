//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GTLObject.h"

@class GTLGmailMessagePartBody, NSArray, NSString;

@interface GTLGmailMessagePart : GTLObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) GTLGmailMessagePartBody *body; // @dynamic body;
@property(copy, nonatomic) NSString *filename; // @dynamic filename;
@property(retain, nonatomic) NSArray *headers; // @dynamic headers;
@property(copy, nonatomic) NSString *mimeType; // @dynamic mimeType;
@property(copy, nonatomic) NSString *partId; // @dynamic partId;
@property(retain, nonatomic) NSArray *parts; // @dynamic parts;

@end
