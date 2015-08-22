//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncClientImplProducersElementProducer.h"

@class ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config, JBTICommonSapiSpan_Factory, NSString;

@interface ComGoogleAppsBigtopSyncClientImplProducersCumulusChannelElementProducer : NSObject <ComGoogleAppsBigtopSyncClientImplProducersElementProducer>
{
    id <JCGCuChannel> channel_;
    id <ComGoogleAppsBigtopSyncClientImplLivelistLiveListImpl_Adaptor> elementAdaptor_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    id <JavaUtilSet> elementIds_;
    id <ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Listener> listener_;
    BOOL started_;
    BOOL isExpectingMoreChanges_;
    BOOL hasStopped_;
    int queryVersion_;
    int lastResponseVersion_;
    ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config *config_;
    BOOL allowEmptyQuery_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_DEFAULT_RANK_;
+ (id)__annotations_updateConfigWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config_withJBTSpan__params;
+ (void)initialize;
- (void)dealloc;
- (BOOL)isExpectingMoreChanges;
- (void)setAllowEmptyQueryWithBoolean:(BOOL)arg1;
- (int)size;
- (id)getQueryStrings;
- (void)clearResultsWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg1 withJBTICommonSapiSpan:(id)arg2;
- (void)clearPreviousResultsWithJavaUtilList:(id)arg1;
- (void)sendRequestWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg1 withJBTICommonSapiSpan:(id)arg2;
- (id)getConfig;
- (void)updateConfigWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)hasMore;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)startWithJBTSpan:(id)arg1;
- (void)acceptVisitorWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Visitor:(id)arg1;
- (void)setListenerWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Listener:(id)arg1;
- (id)initWithJCGCuChannel:(id)arg1 withComGoogleAppsBigtopSyncClientImplLivelistLiveListImpl_Adaptor:(id)arg2 withJBTICommonSapiSpan_Factory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
