//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MNAttachmentView.h"

@class FBMUser, FBWebRTCAdminMsgAttachmentViewModel, FBWebRTCCallController, MNAttachmentActionButton, MNCoreTextView, MNUserStore, NSString, UIImageView;

@interface FBWebRTCAdminMsgAttachmentView : UIView <MNAttachmentView>
{
    FBWebRTCCallController *_callController;
    MNUserStore *_userStore;
    FBWebRTCAdminMsgAttachmentViewModel *_rtcAdminMsgViewModel;
    FBMUser *_otherUser;
    MNCoreTextView *_titleView;
    MNCoreTextView *_subtitleView;
    UIImageView *_subtitleIconView;
    UIView *_actionSeperatorView;
    MNAttachmentActionButton *_actionButton;
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 withViewModel:(id)arg2;
- (void).cxx_destruct;
- (void)_handleActionTap;
- (void)layoutSubviews;
@property(copy, nonatomic) id viewModel;
- (id)initWithCallController:(id)arg1 userStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

