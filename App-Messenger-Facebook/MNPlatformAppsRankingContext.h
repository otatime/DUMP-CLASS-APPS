//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface MNPlatformAppsRankingContext : FBExperimentContext
{
    int _rankingSystem;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(nonatomic) int rankingSystem; // @synthesize rankingSystem=_rankingSystem;

@end

