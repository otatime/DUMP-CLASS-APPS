//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface MNMessageSendKitExperimentContext : FBExperimentContext
{
    BOOL _shouldEnableAutoRetryWithQueuedState;
    BOOL _shouldEnableNewSendStatesUIWithCheckmark;
    int _maxNumberOfAttemptsOnExtension;
    int _maxNumberOfAttemptsOnMQTT;
    int _maxNumberOfAttemptsOnGraph;
    int _maxNumberOfMessagesInBatch;
    double _maxSendDuration;
    double _retryIntervalOnMQTTConnected;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)experimentName;
+ (id)parameterConfigurations;
@property(readonly, nonatomic) BOOL shouldEnableNewSendStatesUIWithCheckmark; // @synthesize shouldEnableNewSendStatesUIWithCheckmark=_shouldEnableNewSendStatesUIWithCheckmark;
@property(readonly, nonatomic) BOOL shouldEnableAutoRetryWithQueuedState; // @synthesize shouldEnableAutoRetryWithQueuedState=_shouldEnableAutoRetryWithQueuedState;
@property(readonly, nonatomic) double retryIntervalOnMQTTConnected; // @synthesize retryIntervalOnMQTTConnected=_retryIntervalOnMQTTConnected;
@property(readonly, nonatomic) double maxSendDuration; // @synthesize maxSendDuration=_maxSendDuration;
@property(readonly, nonatomic) int maxNumberOfMessagesInBatch; // @synthesize maxNumberOfMessagesInBatch=_maxNumberOfMessagesInBatch;
@property(readonly, nonatomic) int maxNumberOfAttemptsOnGraph; // @synthesize maxNumberOfAttemptsOnGraph=_maxNumberOfAttemptsOnGraph;
@property(readonly, nonatomic) int maxNumberOfAttemptsOnMQTT; // @synthesize maxNumberOfAttemptsOnMQTT=_maxNumberOfAttemptsOnMQTT;
@property(readonly, nonatomic) int maxNumberOfAttemptsOnExtension; // @synthesize maxNumberOfAttemptsOnExtension=_maxNumberOfAttemptsOnExtension;

@end

