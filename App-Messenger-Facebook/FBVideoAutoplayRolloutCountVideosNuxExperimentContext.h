//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBVideoAutoplayRolloutCountVideosNuxExperimentContext : FBExperimentContext
{
    int _countSeenVideos;
}

+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) int countSeenVideos; // @synthesize countSeenVideos=_countSeenVideos;
- (int)getCountSeenVideos;

@end

