//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplProducersFilteringElementProducer.h"

@interface ComGoogleAppsBigtopSyncClientImplProducersRankLockingElementProducer : ComGoogleAppsBigtopSyncClientImplProducersFilteringElementProducer
{
    id <JavaUtilMap> lockedElements_;
    id <ComGoogleAppsBigtopSyncClientImplLivelistLiveListImpl_Adaptor> adaptor_;
    BOOL isStarted_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_filterWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Change_;
+ (void)initialize;
- (void)dealloc;
- (id)overwriteRankWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Change:(id)arg1 withNSString:(id)arg2;
- (id)overwriteTypeWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Change:(id)arg1 withComGoogleAppsBigtopSyncClientImplProducersElementProducer_Change_TypeEnum:(id)arg2;
- (id)filterWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Change:(id)arg1;
- (void)unlockWithJBTId:(id)arg1;
- (void)lockWithJBTId:(id)arg1 withNSString:(id)arg2;
- (BOOL)isElementLockedWithJBTId:(id)arg1;
- (void)logLockedElementsContainsWithJBTId:(id)arg1;
- (void)stop;
- (void)startWithJBTSpan:(id)arg1;
- (id)initWithComGoogleAppsBigtopSyncClientImplProducersElementProducer:(id)arg1 withComGoogleAppsBigtopSyncClientImplLivelistLiveListImpl_Adaptor:(id)arg2;

@end

