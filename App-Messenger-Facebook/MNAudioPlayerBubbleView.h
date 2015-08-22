//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MNAudioPlayerControlsView, UITapGestureRecognizer;

@interface MNAudioPlayerBubbleView : UIView
{
    MNAudioPlayerControlsView *_audioPlayerControlsView;
    UIView *_topSeparatorView;
    UITapGestureRecognizer *_audioPlayerTapHandler;
    unsigned int _audioPlayerState;
    id <MNAudioPlayerBubbleViewDelegate> _delegate;
    double _audioDuration;
}

@property(nonatomic) __weak id <MNAudioPlayerBubbleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int audioPlayerState; // @synthesize audioPlayerState=_audioPlayerState;
@property(nonatomic) double audioDuration; // @synthesize audioDuration=_audioDuration;
- (void).cxx_destruct;
- (void)_updateTopSeparatorViewState;
- (void)_initializeTopSeparatorViewIfNecessary;
- (void)_onAudioPlayerTap:(id)arg1;
- (void)_layoutAudioPlayerControls;
@property(nonatomic) BOOL showTopSeparator;
- (void)setBubbleAttributes:(struct MNBubbleViewAttributes)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
