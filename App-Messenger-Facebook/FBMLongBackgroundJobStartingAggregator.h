//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable;

@interface FBMLongBackgroundJobStartingAggregator : NSObject
{
    NSHashTable *_aggregatedBackgroundJobStarters;
}

- (void).cxx_destruct;
- (void)beginLongBackgroundJobs;
- (void)removeLongBackgroundJobStarter:(id)arg1;
- (void)addLongBackgroundJobStarter:(id)arg1;
- (id)init;

@end

