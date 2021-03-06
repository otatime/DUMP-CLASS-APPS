//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBWebRTCNavigationBarViewDelegate.h"

@class FBWebRTCActionButtonsRow, FBWebRTCButtonImageCache, FBWebRTCNavigationBarView, NSNumber, NSString, UIButton, UILabel;

@interface FBWebRTCCallActionView : UIView <FBWebRTCNavigationBarViewDelegate>
{
    BOOL _hasMultipleCameras;
    BOOL _isVideoSupported;
    unsigned int _viewState;
    unsigned int _callType;
    BOOL _hideControl;
    NSNumber *_navBarHiddenOverrideNullable;
    struct CGSize _maxSize;
    FBWebRTCNavigationBarView *_navigationBarView;
    FBWebRTCActionButtonsRow *_disabledVideoButtonRow;
    FBWebRTCActionButtonsRow *_buttonsFirstRow;
    FBWebRTCActionButtonsRow *_buttonsSecondRow;
    FBWebRTCActionButtonsRow *_noAnswerFirstRow;
    FBWebRTCActionButtonsRow *_noAnswerSecondRow;
    UIButton *_hideCallButton;
    UIButton *_speakerButton;
    UIButton *_muteCallButton;
    UIButton *_videoCallButton;
    UIButton *_disabledVideoButton;
    UIButton *_endCallButton;
    UIButton *_acceptCallButton;
    UIButton *_declineCallButton;
    UIButton *_redialButton;
    UIButton *_cancelRedialButton;
    UIButton *_voiceClipButton;
    UIButton *_messageButton;
    UIButton *_doneButton;
    UIButton *_declineVideoButton;
    UIButton *_acceptVideoButton;
    UIButton *_acceptDirectVideoButton;
    UIButton *_acceptWaitingCallButton;
    UIButton *_rejectWaitingCallButton;
    UILabel *_acceptLabel;
    UILabel *_declineLabel;
    UILabel *_cancelLabel;
    UILabel *_redialLabel;
    UILabel *_acceptWaitingCallLabel;
    UILabel *_rejectWaitingCallLabel;
    NSString *_muteTitle;
    NSString *_speakerTitle;
    NSString *_videoTitle;
    NSString *_hideCallTitle;
    FBWebRTCButtonImageCache *_imageCache;
    BOOL _actionButtonsOffscreen;
    BOOL _muteEnabled;
    BOOL _speakerModeEnabled;
    BOOL _remoteVideoSupported;
    BOOL _videoCallButtonSelected;
    BOOL _videoCallButtonUserInteractionEnabled;
    id <FBWebRTCCallActionViewDelegate> _delegate;
    UIButton *_messageActionSheetButton;
    UIButton *_reminderActionSheetButton;
}

@property(nonatomic) BOOL videoCallButtonUserInteractionEnabled; // @synthesize videoCallButtonUserInteractionEnabled=_videoCallButtonUserInteractionEnabled;
@property(nonatomic) BOOL videoCallButtonSelected; // @synthesize videoCallButtonSelected=_videoCallButtonSelected;
@property(nonatomic) BOOL remoteVideoSupported; // @synthesize remoteVideoSupported=_remoteVideoSupported;
@property(nonatomic) BOOL speakerModeEnabled; // @synthesize speakerModeEnabled=_speakerModeEnabled;
@property(nonatomic) BOOL muteEnabled; // @synthesize muteEnabled=_muteEnabled;
@property(retain, nonatomic) UIButton *reminderActionSheetButton; // @synthesize reminderActionSheetButton=_reminderActionSheetButton;
@property(retain, nonatomic) UIButton *messageActionSheetButton; // @synthesize messageActionSheetButton=_messageActionSheetButton;
@property(nonatomic) __weak id <FBWebRTCCallActionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL actionButtonsOffscreen; // @synthesize actionButtonsOffscreen=_actionButtonsOffscreen;
- (void).cxx_destruct;
- (void)_didPressDeclineVideoCall;
- (void)_didPressAcceptVideoCall;
- (void)_didPressDone;
- (void)_didPressReminderActionSheet;
- (void)_didPressMessageActionSheet;
- (void)_didPressMessage;
- (void)_didPressVoiceClip;
- (void)_didPressHideCall;
- (void)_didPressRejectWaitingCall;
- (void)_didPressAcceptWaitingCall;
- (void)_didPressVideoCall:(id)arg1;
- (void)_didPressMute:(id)arg1;
- (void)_didPressSpeaker;
- (void)_didPressCancelRedial;
- (void)_didPressRedial;
- (void)_didPressDeclineCall;
- (void)_didPressAcceptCall;
- (void)_didPressEndCall;
- (void)_didPressDisabledVideoButton;
- (void)navigationViewDidPressSwitchCameraButton:(id)arg1;
- (void)navigationViewDidPressBackButton:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_setThemeToVideoCalling;
- (void)_setThemeToVideo;
- (void)_setThemeToNormal;
- (float)_getYOriginForVideoButtonsWithFrame;
- (float)_getYOriginForSecondRowOfAudioButtonsWithFrame:(struct CGRect)arg1;
- (float)_getYOriginForFirstRowOfAudioButtonsWithFrame:(struct CGRect)arg1;
- (float)_getXOriginWithViewSize:(struct CGSize)arg1 frame:(struct CGRect)arg2;
- (void)_positionButtonsRow:(id)arg1 withOrigin:(struct CGPoint)arg2;
- (void)_populateDisabledVideoButtonRow;
- (void)_positionToOffScreenRow:(id)arg1;
- (void)_positionToVideoRow:(id)arg1 withInnerFrame:(struct CGRect)arg2;
- (void)_positionToSecondAudioRow:(id)arg1 withInnerFrame:(struct CGRect)arg2;
- (void)_positionToFirstAudioRow:(id)arg1 withInnerFrame:(struct CGRect)arg2;
- (void)_positionNavigationBar:(id)arg1;
- (void)_refreshViewWithAnimation:(BOOL)arg1;
- (void)_hideAllSubviews:(BOOL)arg1;
- (void)_layoutSubviewsAux;
- (void)layoutSubviews;
- (BOOL)_shouldAnimateTransitionFromState:(unsigned int)arg1 to:(unsigned int)arg2;
- (struct UIEdgeInsets)actionButtonInsetsForVideoRequest;
- (struct UIEdgeInsets)actionButtonInsetsWithButtonsOffscreen:(BOOL)arg1;
- (void)switchLayoutToState:(unsigned int)arg1;
- (void)setNavBarHiddenOverride:(BOOL)arg1;
- (void)_configureNoAnswerRows;
- (id)initWithFrame:(struct CGRect)arg1 isVideoSupported:(BOOL)arg2 hasMultipleCameras:(BOOL)arg3 maxSize:(struct CGSize)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

