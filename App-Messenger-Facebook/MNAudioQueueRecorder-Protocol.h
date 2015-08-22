//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@protocol MNAudioQueueRecorder <NSObject>
@property(nonatomic) __weak id <MNAudioQueueRecorderDelegate> delegate;
- (double)currentTime;
- (float)averagePower;
- (BOOL)isRecording;
- (void)stop;
- (BOOL)startWithFileURL:(NSURL *)arg1;
- (id)initWithSampleRate:(int)arg1;
@end

