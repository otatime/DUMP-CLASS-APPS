//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString;

@interface NotificationAction : NSObject
{
    NSDate *expirationDate_;
    BOOL fromRemoteNotification_;
    BOOL retried_;
    NSString *email_;
    NSString *identifier_;
    NSString *itemIdString_;
    NSDictionary *notificationUserInfo_;
}

@property(nonatomic) BOOL retried; // @synthesize retried=retried_;
@property(readonly, nonatomic) NSDictionary *notificationUserInfo; // @synthesize notificationUserInfo=notificationUserInfo_;
@property(readonly, copy, nonatomic) NSString *itemIdString; // @synthesize itemIdString=itemIdString_;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=identifier_;
@property(readonly, nonatomic) BOOL fromRemoteNotification; // @synthesize fromRemoteNotification=fromRemoteNotification_;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=email_;
- (void).cxx_destruct;
- (void)setupEmailAndItemId;
- (id)serialize;
- (BOOL)hasExpired;
- (id)initWithSerializedAction:(id)arg1;
- (id)initWithActionIdentifier:(id)arg1 notificationUserInfo:(id)arg2 fromRemoteNotification:(BOOL)arg3;

@end
