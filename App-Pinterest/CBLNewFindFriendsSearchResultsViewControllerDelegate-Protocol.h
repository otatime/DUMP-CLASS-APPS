//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBLFriend, CBLNewFindFriendsSearchResultsViewController;

@protocol CBLNewFindFriendsSearchResultsViewControllerDelegate <NSObject>
- (void)CBLNewFindFriendsSearchResultsViewControllerDidPressInviteAll:(CBLNewFindFriendsSearchResultsViewController *)arg1;
- (void)CBLNewFindFriendsSearchResultsViewControllerWillBeginDragging:(CBLNewFindFriendsSearchResultsViewController *)arg1;
- (void)CBLNewFindFriendsSearchResultsViewControllerDidPressSendSMS:(CBLNewFindFriendsSearchResultsViewController *)arg1;
- (void)CBLNewFindFriendsSearchResultsViewControllerDidPressSendEmail:(CBLNewFindFriendsSearchResultsViewController *)arg1;
- (void)CBLNewFindFriendsSearchResultsViewController:(CBLNewFindFriendsSearchResultsViewController *)arg1 didPressFollowUnfollowWithFriend:(CBLFriend *)arg2;
- (void)CBLNewFindFriendsSearchResultsViewController:(CBLNewFindFriendsSearchResultsViewController *)arg1 didPressInviteWithFriend:(CBLFriend *)arg2;
@end

