//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusQueryClientCQUpdateQueue_Task.h"

@class NSString;

@interface ComGoogleCumulusQueryClientCQUpdateQueue_QueryCompletion : ComGoogleCumulusQueryClientCQUpdateQueue_Task
{
    id <JavaUtilIterator> queryIterator_;
    NSString *batchId_;
    id <ComGoogleCumulusApiMetricsSpan> parentSpan_;
}

- (void)dealloc;
- (BOOL)runWithComGoogleCumulusQueryClientCQUpdateQueue_MatchUpdater:(id)arg1;
- (id)description;
- (id)initWithComGoogleCumulusQueryClientCQUpdateQueue:(id)arg1 withComGoogleCumulusQueryClientCQUpdateQueue_PriorityEnum:(id)arg2 withComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum:(id)arg3 withJavaUtilList:(id)arg4 withNSString:(id)arg5 withComGoogleCumulusApiMetricsSpan:(id)arg6;

@end

