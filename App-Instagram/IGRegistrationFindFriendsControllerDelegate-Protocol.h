//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGRegistrationFindFriendsController, NSURL, UIViewController;

@protocol IGRegistrationFindFriendsControllerDelegate <NSObject>
- (void)findFriendsController:(IGRegistrationFindFriendsController *)arg1 wantsToDismissViewControllerAnimated:(BOOL)arg2 completion:(void (^)(void))arg3;
- (void)findFriendsController:(IGRegistrationFindFriendsController *)arg1 wantsToPresentViewController:(UIViewController *)arg2 animated:(BOOL)arg3 completion:(void (^)(void))arg4;
- (void)findFriendsController:(IGRegistrationFindFriendsController *)arg1 wantsToUpdateToFollowCount:(int)arg2;
- (void)findFriendsController:(IGRegistrationFindFriendsController *)arg1 wasTappedOnURL:(NSURL *)arg2;
@end
