//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MNMessageCollectionViewCell.h"

#import "MNAttributionViewDelegate.h"
#import "MNAudioPlayerBubbleViewDelegate.h"
#import "MNAudioPlayerDelegate.h"
#import "MNWebAudioManagerDelegate.h"

@class FBLazyCreator, MNAttributionController, MNAudioCache, MNAudioPlayer, MNWebAudioManager, NSData, NSString, NSURL;

@interface MNAudioMessageCollectionViewCell : MNMessageCollectionViewCell <MNWebAudioManagerDelegate, MNAudioPlayerDelegate, MNAudioPlayerBubbleViewDelegate, MNAttributionViewDelegate>
{
    FBLazyCreator *_bubbleMaskCreator;
    FBLazyCreator *_textViewCreator;
    FBLazyCreator *_playerBubbleViewCreator;
    FBLazyCreator *_highlightedPlayerBubbleViewCreator;
    FBLazyCreator *_highlightedPlayerBubbleViewMaskCreator;
    FBLazyCreator *_attributionViewCreator;
    FBLazyCreator *_attributionMaskViewCreator;
    FBLazyCreator *_bubbleBackgroundView;
    MNAudioCache *_audioCache;
    MNWebAudioManager *_webAudioManager;
    MNAudioPlayer *_player;
    NSData *_audioData;
    NSURL *_audioUrl;
    double _audioDuration;
    unsigned int _state;
    float _progress;
    MNAttributionController *_attributionController;
}

- (void).cxx_destruct;
- (void)attributionViewDidTapOpenButton:(id)arg1;
- (id)audioPlayerGetUrl:(id)arg1;
- (void)audioPlayer:(id)arg1 updateTimestamp:(double)arg2;
- (void)audioPlayer:(id)arg1 updateState:(unsigned int)arg2;
- (void)webAudioManager:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3;
- (void)webAudioManager:(id)arg1 didFinishWithAudio:(id)arg2 forURL:(id)arg3;
- (void)didTapAudioPlayer;
- (void)didDisappear;
- (void)_updateTopSeparatorVisibility;
- (void)_clipHighlightedContainerView;
- (void)_setState:(unsigned int)arg1;
- (float)_getProgressFromTimestamp:(double)arg1;
- (void)_updateAudioTimerLabelWithDuration:(double)arg1;
- (void)_setAudioDuration:(double)arg1;
- (void)_setProgress:(float)arg1;
- (void)_setAudioData:(id)arg1;
- (void)_setupAudioData:(id)arg1 withUrl:(id)arg2;
- (void)_clearCacheForURL:(id)arg1;
- (void)_downloadAudio:(id)arg1;
- (void)_loadAudioCache:(id)arg1;
- (void)_loadAudioAttachmentViewModel:(id)arg1;
- (BOOL)_isMessageFailed;
- (void)_updateBubbleMaskAnimated:(BOOL)arg1;
- (void)_updateAttribution;
- (void)_updatePlayerBubbleViewAnimated:(BOOL)arg1;
- (void)_updateMessageBody;
- (void)_updateBubbleBackgroundView;
- (void)setMessageRow:(id)arg1 animated:(BOOL)arg2;
- (void)applyLayoutSpec:(id)arg1;
- (void)prepareForReuse;
- (void)doMessageContentInit;
- (struct CGRect)accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 audioCache:(id)arg2 webAudioManager:(id)arg3 attributionController:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

