//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class CBLUser, UIImageView, UILabel;

@interface CBLUserMentionResultButtonView : UIButton
{
    UIImageView *_userImageView;
    UILabel *_nameLabel;
    UILabel *_userInfoLabel;
    CBLUser *_userMentionResult;
    UIImageView *_verifiedIcon;
}

+ (struct CGSize)sizeForUserResult:(id)arg1;
@property(retain, nonatomic) UIImageView *verifiedIcon; // @synthesize verifiedIcon=_verifiedIcon;
@property(retain, nonatomic) CBLUser *userMentionResult; // @synthesize userMentionResult=_userMentionResult;
@property(retain, nonatomic) UILabel *userInfoLabel; // @synthesize userInfoLabel=_userInfoLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *userImageView; // @synthesize userImageView=_userImageView;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
