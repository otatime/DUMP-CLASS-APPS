//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GTLObject.h"

@class NSNumber, NSString;

@interface GTLGmailLabel : GTLObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *labelListVisibility; // @dynamic labelListVisibility;
@property(copy, nonatomic) NSString *messageListVisibility; // @dynamic messageListVisibility;
@property(retain, nonatomic) NSNumber *messagesTotal; // @dynamic messagesTotal;
@property(retain, nonatomic) NSNumber *messagesUnread; // @dynamic messagesUnread;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSNumber *threadsTotal; // @dynamic threadsTotal;
@property(retain, nonatomic) NSNumber *threadsUnread; // @dynamic threadsUnread;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end
