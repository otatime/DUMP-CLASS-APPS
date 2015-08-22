//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAudioSessionManagerClient.h"
#import "FBSoundProtocol.h"

@class FBSoundBuffer, NSString, NSTimer;

@interface FBSound : NSObject <FBSoundProtocol, FBAudioSessionManagerClient>
{
    FBSoundBuffer *_buffer;
    BOOL _attachedBuffer;
    BOOL _wasPlayingBeforeInterruption;
    unsigned int _alSource;
    float _position[3];
    float _velocity[3];
    NSTimer *_velocityTimer;
    double _lastVelocityUpdateTime;
    BOOL _loop;
    BOOL _useLongFormAudioPlayback;
    float _volume;
}

+ (void)_activateAudioSession;
+ (id)_URLForResourceName:(id)arg1;
+ (BOOL)isBufferedURL:(id)arg1;
+ (void)preloadSoundsWithResourceNames:(id)arg1;
+ (void)preloadSoundsWithContentsOfURLs:(id)arg1;
+ (void)setDefaultVolume:(float)arg1;
+ (float)defaultVolume;
+ (BOOL)_ensureOpenAL;
@property(nonatomic) BOOL useLongFormAudioPlayback; // @synthesize useLongFormAudioPlayback=_useLongFormAudioPlayback;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) BOOL loop; // @synthesize loop=_loop;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int outputOptions;
@property(readonly, nonatomic) unsigned int outputCoordinationMode;
- (void)finishInterruptionAndResume:(BOOL)arg1;
- (void)beginInterruption;
- (void)setRelativeVolume:(float)arg1;
- (void)setPositionX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)setPosition:(struct CGPoint)arg1;
- (void)_updatePositionForVelocity;
- (float)getDuration;
- (void)setCurrentTime:(float)arg1;
- (float)getCurrentTime;
- (void)stop;
- (void)pause;
- (void)playWithVelocity:(struct CGPoint)arg1;
@property(readonly, nonatomic) BOOL isPlaying;
- (void)play;
- (void)_ensureBufferLoaded;
- (void)dealloc;
- (id)initWithResourceName:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) unsigned int audioDirection;
@property(readonly, nonatomic) unsigned int clientPriority;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) unsigned int inputOptions;
@property(readonly) Class superclass;

@end
