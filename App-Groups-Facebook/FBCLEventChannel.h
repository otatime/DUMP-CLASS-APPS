//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableOrderedSet, NSObject<OS_dispatch_queue>;

@interface FBCLEventChannel : NSObject
{
    NSObject<OS_dispatch_queue> *_eventProcessingQueue;
    NSObject<OS_dispatch_queue> *_eventNotifQueue;
    NSMutableOrderedSet *_listeners;
    NSMutableArray *_pendingEvent;
    double _batchTime;
    double _batchPeriod;
}

@property double batchPeriod; // @synthesize batchPeriod=_batchPeriod;
- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_emit:(id)arg1;
- (void)emit:(id)arg1;
- (id)init;

@end
