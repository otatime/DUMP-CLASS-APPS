//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@interface MNMessageSendAutoRetryConfiguration : FBValueObject <NSCopying>
{
    BOOL _allowsInfiniteRetry;
    unsigned int _maxNumberOfAttemptsOnExtension;
    unsigned int _maxNumberOfAttemptsOnMQTT;
    unsigned int _maxNumberOfAttemptsOnGraph;
    unsigned int _maxSizeOfBatchOnMQTT;
    double _maxSendDuration;
    double _retryIntervalOnMQTTConnected;
}

@property(readonly, nonatomic) BOOL allowsInfiniteRetry; // @synthesize allowsInfiniteRetry=_allowsInfiniteRetry;
@property(readonly, nonatomic) double retryIntervalOnMQTTConnected; // @synthesize retryIntervalOnMQTTConnected=_retryIntervalOnMQTTConnected;
@property(readonly, nonatomic) double maxSendDuration; // @synthesize maxSendDuration=_maxSendDuration;
@property(readonly, nonatomic) unsigned int maxSizeOfBatchOnMQTT; // @synthesize maxSizeOfBatchOnMQTT=_maxSizeOfBatchOnMQTT;
@property(readonly, nonatomic) unsigned int maxNumberOfAttemptsOnGraph; // @synthesize maxNumberOfAttemptsOnGraph=_maxNumberOfAttemptsOnGraph;
@property(readonly, nonatomic) unsigned int maxNumberOfAttemptsOnMQTT; // @synthesize maxNumberOfAttemptsOnMQTT=_maxNumberOfAttemptsOnMQTT;
@property(readonly, nonatomic) unsigned int maxNumberOfAttemptsOnExtension; // @synthesize maxNumberOfAttemptsOnExtension=_maxNumberOfAttemptsOnExtension;
- (id)initWithMaxNumberOfAttemptsOnExtension:(unsigned int)arg1 maxNumberOfAttemptsOnMQTT:(unsigned int)arg2 maxNumberOfAttemptsOnGraph:(unsigned int)arg3 maxSizeOfBatchOnMQTT:(unsigned int)arg4 maxSendDuration:(double)arg5 retryIntervalOnMQTTConnected:(double)arg6 allowsInfiniteRetry:(BOOL)arg7;

@end

