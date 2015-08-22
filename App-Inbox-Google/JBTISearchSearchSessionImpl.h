//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTSearchSession.h"

@class JBTICommonSapiSpan_Factory, JBTISearchDebugInfoFetcher, JBTISearchSearchItemListImpl, JBTISearchSearchSessionEndLogger, JBTISearchSearchWarmUp, JBTISearchZeroStateSuggestionsCache, JavaUtilHashMap, NSString;

@interface JBTISearchSearchSessionImpl : NSObject <JBTSearchSession>
{
    JBTISearchSearchWarmUp *warmUp_;
    int numberOfInitialSearchResults_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    BOOL useSearchAsYouType_;
    id <JBTISearchSearchLiveList> contactSuggestionsList_;
    id <JBTISearchSearchLiveList> suggestionsList_;
    JBTISearchSearchItemListImpl *resultsList_;
    id <JBTISearchSearchLiveList> zeroStateSuggestionsList_;
    JBTISearchZeroStateSuggestionsCache *zeroStateSuggestionsCache_;
    JBTISearchDebugInfoFetcher *debugInfoFetcher_;
    JBTISearchSearchSessionEndLogger *searchSessionEndLogger_;
    id <JavaUtilList> allLists_;
    JavaUtilHashMap *spansInFlight_;
    id <JBTEventListener> spanClosingListener_;
    BOOL started_;
    NSString *queryString_;
    NSString *searchSessionId_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_stopWithJBTSpan__params;
+ (id)__annotations_startWithJBTSpan__params;
+ (id)__annotations_updateQueryWithJBTQuery_withJBTSpan__params;
+ (void)initialize;
- (void)dealloc;
- (id)getQueryStringFromQueryWithJBTQuery:(id)arg1;
- (id)getZeroStateSuggestions;
- (id)getRelevantResults;
- (id)getSuggestions;
- (id)getContactSuggestions;
- (void)stopWithJBTSpan:(id)arg1;
- (BOOL)isStarted;
- (void)startWithJBTSpan:(id)arg1;
- (void)getDebugInfoWithJBTCallback:(id)arg1;
- (id)getQueryStringForDebugging;
- (int)updateProducerConfigWithJBTISearchSearchLiveList:(id)arg1 withJBTQuery:(id)arg2 withJBTICommonSapiSpan:(id)arg3 withBoolean:(BOOL)arg4;
- (void)maybeFireSearchInProgressWithJBTQuery:(id)arg1 withJBTICommonSapiSpan:(id)arg2;
- (void)updateQueryWithJBTQuery:(id)arg1 withJBTSpan:(id)arg2;
- (id)newQueryBuilder;
- (BOOL)isOffline;
- (id)initWithJBTISearchSearchFactory:(id)arg1 withJBTISearchSearchSessionBuilderImpl:(id)arg2 withJBTICommonSapiSpan_Factory:(id)arg3 withJBTISearchSearchWarmUp:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
