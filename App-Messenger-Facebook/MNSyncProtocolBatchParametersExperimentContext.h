//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface MNSyncProtocolBatchParametersExperimentContext : FBExperimentContext
{
    unsigned int _maxDeltasAbleToProcess;
    unsigned int _deltaBatchSize;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) unsigned int deltaBatchSize; // @synthesize deltaBatchSize=_deltaBatchSize;
@property(readonly, nonatomic) unsigned int maxDeltasAbleToProcess; // @synthesize maxDeltasAbleToProcess=_maxDeltasAbleToProcess;

@end

