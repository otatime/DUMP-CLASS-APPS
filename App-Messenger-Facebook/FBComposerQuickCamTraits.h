//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface FBComposerQuickCamTraits : FBValueObject <NSCopying>
{
    BOOL _videoOnly;
    BOOL _forceHighQualityCapture;
    BOOL _shouldConfirmComposition;
    BOOL _addVideoAfterReachedMaxLength;
    BOOL _disableLongPressUntilCaptureSessionCompletelyStarted;
    NSString *_overridingVideoHelpString;
    NSString *_overridingSwipeUpString;
    double _maximumVideoLength;
}

@property(readonly, copy, nonatomic) NSString *overridingSwipeUpString; // @synthesize overridingSwipeUpString=_overridingSwipeUpString;
@property(readonly, copy, nonatomic) NSString *overridingVideoHelpString; // @synthesize overridingVideoHelpString=_overridingVideoHelpString;
@property(readonly, nonatomic) BOOL disableLongPressUntilCaptureSessionCompletelyStarted; // @synthesize disableLongPressUntilCaptureSessionCompletelyStarted=_disableLongPressUntilCaptureSessionCompletelyStarted;
@property(readonly, nonatomic) BOOL addVideoAfterReachedMaxLength; // @synthesize addVideoAfterReachedMaxLength=_addVideoAfterReachedMaxLength;
@property(readonly, nonatomic) BOOL shouldConfirmComposition; // @synthesize shouldConfirmComposition=_shouldConfirmComposition;
@property(readonly, nonatomic) BOOL forceHighQualityCapture; // @synthesize forceHighQualityCapture=_forceHighQualityCapture;
@property(readonly, nonatomic) double maximumVideoLength; // @synthesize maximumVideoLength=_maximumVideoLength;
@property(readonly, nonatomic) BOOL videoOnly; // @synthesize videoOnly=_videoOnly;
- (void).cxx_destruct;
- (id)initWithVideoOnly:(BOOL)arg1 maximumVideoLength:(double)arg2 forceHighQualityCapture:(BOOL)arg3 shouldConfirmComposition:(BOOL)arg4 addVideoAfterReachedMaxLength:(BOOL)arg5 disableLongPressUntilCaptureSessionCompletelyStarted:(BOOL)arg6 overridingVideoHelpString:(id)arg7 overridingSwipeUpString:(id)arg8;

@end

