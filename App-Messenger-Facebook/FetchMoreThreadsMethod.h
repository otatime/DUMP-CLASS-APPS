//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FetchMoreThreadsMethod : NSObject
{
}

+ (void)handleFqlResult:(id)arg1 threadJSONUpdater:(id)arg2 userFetchedAnnouncer:(id)arg3 viewerFBID:(id)arg4 threads:(id)arg5 fetchedThreads:(id)arg6 threadListType:(unsigned int)arg7;
+ (unsigned int)parseNumberOfThreadsWithFqlResult:(id)arg1;
+ (id)getFql:(long long)arg1 threadListType:(unsigned int)arg2 numberOfThreads:(unsigned int)arg3;

@end

