//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBWebrtcVoipSwAGCExperimentContext : FBExperimentContext
{
    int _sw_agc_mode;
    int _sw_agc_target;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) int sw_agc_target; // @synthesize sw_agc_target=_sw_agc_target;
@property(readonly, nonatomic) int sw_agc_mode; // @synthesize sw_agc_mode=_sw_agc_mode;

@end

