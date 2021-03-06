//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, UIColor, UIImage;

@interface QTMSpritedAnimationView : UIView
{
    BOOL _loopAnimation;
    UIColor *_foregroundColor;
    UIImage *_spriteSheet;
    int _frameRate;
    int _numberOfFrames;
    float _singleFrameWidthInPercent;
    CDUnknownBlockType _completion;
    CALayer *_spriteLayer;
}

@property(retain, nonatomic) CALayer *spriteLayer; // @synthesize spriteLayer=_spriteLayer;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) float singleFrameWidthInPercent; // @synthesize singleFrameWidthInPercent=_singleFrameWidthInPercent;
@property(nonatomic) int numberOfFrames; // @synthesize numberOfFrames=_numberOfFrames;
@property(nonatomic) BOOL loopAnimation; // @synthesize loopAnimation=_loopAnimation;
@property(nonatomic) int frameRate; // @synthesize frameRate=_frameRate;
@property(retain, nonatomic) UIImage *spriteSheet; // @synthesize spriteSheet=_spriteSheet;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
- (void).cxx_destruct;
- (void)updateSpriteAnimationLayer;
- (id)colorizedSpriteSheet:(id)arg1;
@property(readonly, nonatomic, getter=isPlaying) BOOL playing;
- (void)seekToEnd;
- (void)seekToBeginning;
- (void)stop;
- (void)playWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 spriteSheet:(id)arg2 foregroundColor:(id)arg3 frameRate:(int)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

