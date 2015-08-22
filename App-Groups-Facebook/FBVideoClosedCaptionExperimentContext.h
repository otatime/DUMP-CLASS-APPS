//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@class NSString;

@interface FBVideoClosedCaptionExperimentContext : FBExperimentContext
{
    NSString *_captionVisibility;
}

+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, copy, nonatomic) NSString *captionVisibility; // @synthesize captionVisibility=_captionVisibility;
- (void).cxx_destruct;
- (BOOL)shouldShowCaptionsWhenFullScreenAndMuted;
- (BOOL)shouldAlwaysShowCaptions;

@end
