//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNNewUserRampUpCreateGroupRequestSender, NSError;

@protocol MNNewUserRampUpCreateGroupRequestSenderDelegate <NSObject>
- (void)newUserRampUpCreateGroupRequestSender:(MNNewUserRampUpCreateGroupRequestSender *)arg1 didFailWithError:(NSError *)arg2;
- (void)newUserRampUpCreateGroupRequestSenderDidCreateGroup:(MNNewUserRampUpCreateGroupRequestSender *)arg1;
@end

