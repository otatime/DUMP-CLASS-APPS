//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBLBoard, CBLFriend, CBLUser, NSString;

@protocol CBLUserCellDelegate <NSObject>

@optional
- (void)blockUser:(CBLUser *)arg1;
- (void)removeFacebookFriendFromNewBoard:(CBLFriend *)arg1;
- (void)removeEmailFromNewBoard:(NSString *)arg1;
- (void)removeCollaboratorFromNewBoard:(CBLUser *)arg1;
- (void)removeCollaborator:(CBLUser *)arg1 fromBoard:(CBLBoard *)arg2;
- (void)leaveBoard:(CBLBoard *)arg1;
- (void)inviteFacebookFriendToNewBoard:(CBLFriend *)arg1;
- (void)inviteFacebookFriend:(CBLFriend *)arg1;
- (void)inviteUserToNewBoard:(CBLUser *)arg1;
- (void)inviteUserWithId:(NSString *)arg1 toBoard:(CBLBoard *)arg2;
- (BOOL)facebookFriendAlreadyOnInviteList:(CBLFriend *)arg1;
- (BOOL)userAlreadyOnInviteList:(CBLUser *)arg1;
@end

