//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNAudioPlayer, NSURL;

@protocol MNAudioPlayerDelegate <NSObject>
- (NSURL *)audioPlayerGetUrl:(MNAudioPlayer *)arg1;
- (void)audioPlayer:(MNAudioPlayer *)arg1 updateTimestamp:(double)arg2;
- (void)audioPlayer:(MNAudioPlayer *)arg1 updateState:(unsigned int)arg2;
@end
