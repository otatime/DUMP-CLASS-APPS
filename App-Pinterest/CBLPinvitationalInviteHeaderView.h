//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TTTAttributedLabel;

@interface CBLPinvitationalInviteHeaderView : UIView
{
    int _invitesAvailable;
    TTTAttributedLabel *_inviteCountLabel;
    UIView *_separatorLine;
}

@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) TTTAttributedLabel *inviteCountLabel; // @synthesize inviteCountLabel=_inviteCountLabel;
@property(nonatomic) int invitesAvailable; // @synthesize invitesAvailable=_invitesAvailable;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

