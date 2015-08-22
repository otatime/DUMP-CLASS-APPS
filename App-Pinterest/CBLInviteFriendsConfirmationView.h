//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CBLFriend, NSArray, NSString, UIImageView, UILabel;

@interface CBLInviteFriendsConfirmationView : UIView
{
    NSArray *_invitedFriends;
    CBLFriend *_smsInvitedFriend;
    UIImageView *_backgroundImageView;
    UIImageView *_checkMarkImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSArray *_nameLabels;
    NSString *_phoneNumber;
}

@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSArray *nameLabels; // @synthesize nameLabels=_nameLabels;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *checkMarkImageView; // @synthesize checkMarkImageView=_checkMarkImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) CBLFriend *smsInvitedFriend; // @synthesize smsInvitedFriend=_smsInvitedFriend;
@property(retain, nonatomic) NSArray *invitedFriends; // @synthesize invitedFriends=_invitedFriends;
- (void).cxx_destruct;
- (void)startAnimating;
- (void)layoutBackgroundView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
