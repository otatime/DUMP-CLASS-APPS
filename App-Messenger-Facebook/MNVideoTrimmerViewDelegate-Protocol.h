//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNVideoTrimmerView;

@protocol MNVideoTrimmerViewDelegate <NSObject>
- (void)videoTrimmerView:(MNVideoTrimmerView *)arg1 didUpdateTrimmedVideoLength:(double)arg2;
- (struct MNVideoTrimmerVideoInfo)videoTrimmerViewFetchEditedVideoInfo:(MNVideoTrimmerView *)arg1;
- (void)videoTrimmerView:(MNVideoTrimmerView *)arg1 fetchOriginalVideoInfoWithCompletionBlock:(void (^)(struct MNVideoTrimmerVideoInfo))arg2;
- (void)videoTrimmerView:(MNVideoTrimmerView *)arg1 movedPlayheadToPosition:(float)arg2;
- (void)videoTrimmerViewDidPressPlayPauseButton:(MNVideoTrimmerView *)arg1;
@end

