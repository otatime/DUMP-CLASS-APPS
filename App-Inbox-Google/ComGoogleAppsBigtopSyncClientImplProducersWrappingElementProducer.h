//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncClientImplProducersElementProducer.h"

@class NSString;

@interface ComGoogleAppsBigtopSyncClientImplProducersWrappingElementProducer : NSObject <ComGoogleAppsBigtopSyncClientImplProducersElementProducer>
{
    id <ComGoogleAppsBigtopSyncClientImplProducersElementProducer> innerProducer_;
    id <ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Listener> outerListener_;
    int mostRecentHandledConfigVersion_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_updateConfigWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config_withJBTSpan__params;
+ (void)initialize;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)acceptVisitorWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Visitor:(id)arg1;
- (BOOL)isExpectingMoreChanges;
- (BOOL)hasMore;
- (id)getQueryStrings;
- (id)getConfig;
- (void)updateConfigWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg1 withJBTSpan:(id)arg2;
- (void)setListenerWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Listener:(id)arg1;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)startWithJBTSpan:(id)arg1;
- (id)newSpanCloseOnlyChangeListWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_ChangeList:(id)arg1;
- (int)getMostRecentHandledConfigVersion;
- (void)handleChangesWithComGoogleAppsBigtopSyncClientImplProducersElementProducer:(id)arg1 withComGoogleAppsBigtopSyncClientImplProducersElementProducer_ChangeList:(id)arg2;
- (id)initWithComGoogleAppsBigtopSyncClientImplProducersElementProducer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
