//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionViewController.h"

@class CBLFriend, CBLInviteFriendsConfirmationView, NSArray;

@interface CBLInviteFriendsConfirmationViewController : CBLTraitCollectionViewController
{
    NSArray *_invitedFriends;
    CBLFriend *_smsInvitedFriend;
    CBLInviteFriendsConfirmationView *_confirmationView;
}

@property(retain, nonatomic) CBLInviteFriendsConfirmationView *confirmationView; // @synthesize confirmationView=_confirmationView;
@property(retain, nonatomic) CBLFriend *smsInvitedFriend; // @synthesize smsInvitedFriend=_smsInvitedFriend;
@property(retain, nonatomic) NSArray *invitedFriends; // @synthesize invitedFriends=_invitedFriends;
- (void).cxx_destruct;
- (int)preferredStatusBarStyle;
- (int)preferredStatusBarUpdateAnimation;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

