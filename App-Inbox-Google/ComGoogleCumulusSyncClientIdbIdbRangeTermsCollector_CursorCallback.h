//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JCGCuThrowingCallback.h"

@class ComGoogleCumulusCommonIndexIndexProto_PostingList, ComGoogleCumulusSyncClientIdbIdbRangeTermsCollector;

@interface ComGoogleCumulusSyncClientIdbIdbRangeTermsCollector_CursorCallback : JCGCuThrowingCallback
{
    ComGoogleCumulusSyncClientIdbIdbRangeTermsCollector *this$0_;
    id <JavaUtilCollection> callbacks_;
    id <JavaLangComparable> currentTerm_;
    ComGoogleCumulusCommonIndexIndexProto_PostingList *currentPostingList_;
    id <JavaUtilList> currentMutations_;
    id <ComGoogleCumulusApiMetricsSpan> currentPostingListSpan_;
    int lastOpenOrAdvanceStartTimeMs_;
    double lastOpenOrAdvanceDurationMs_;
    id <ComGoogleCumulusApiMetricsSpan> currentPostingListMutationSpan_;
    BOOL isCanceled_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientIdbIdbRangeTermsCollector:(id)arg1;
- (BOOL)removeCallbackWithJCGCuCallback:(id)arg1;
- (double)getAdjustedStartTime;
- (void)recordOpenOrAdvanceStartTime;
- (void)startSpans;
- (void)processCurrentPosition;
- (void)processCurrentPositionWithComGoogleCumulusCommonIndexIdbAdapter_Key:(id)arg1 withComGoogleCumulusCommonIndexIdbAdapter_Value:(id)arg2;
- (void)reifyAndCallbackCurrentTermWithJavaLangComparable:(id)arg1;
- (void)addCallbackWithJCGCuCallback:(id)arg1;
- (void)onSuccessWithId:(id)arg1;

@end

