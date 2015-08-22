//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config, JBTCBigTopObjectOriginationInfo, JBTISearchSearchQueryMetadata, JBTISearchSearchResultsProducer, JBTISearchSearchResultsProducer_ItemsMonitor, NSString;

@interface JBTISearchSearchResultsProducer_ChangeState : NSObject
{
    JBTISearchSearchResultsProducer *this$0_;
    id <JavaUtilMap> changes_;
    JBTISearchSearchResultsProducer_ItemsMonitor *newItemsMonitor_;
    id <JavaUtilSet> previousIds_;
    id <JavaUtilSet> currentIds_;
    id <JavaUtilSet> objectReferences_;
    id <JBTSpan> parentSpan_;
    id <JBTICommonSapiSpan> processSpan_;
    ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config *config_;
    JBTISearchSearchQueryMetadata *queryMetadata_;
    JBTCBigTopObjectOriginationInfo *originationInfo_;
    NSString *serializedEventId_;
    int position_;
    int positionInChronologicalSection_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)commitWithComGoogleAppsBigtopServicesSearchSearchPaginationResponseInfo:(id)arg1;
- (id)toGmailItemIdWithJBTISearchSearchResultMetadata_SearchSectionEnum:(id)arg1 withNSString:(id)arg2;
- (void)monitorWithJBTISearchSearchResultsProducer_ChangeAndMetadata:(id)arg1 withBoolean:(BOOL)arg2;
- (void)addChangeWithJBTIItemsItemImpl:(id)arg1 withJBTISearchSearchResultMetadata_SearchSectionEnum:(id)arg2 withInt:(int)arg3 withNSString:(id)arg4 withBoolean:(BOOL)arg5;
- (void)addChangeWithComGoogleAppsBigtopServicesSearchBigTopSearchResult:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withJBTISearchSearchResultMetadata_SearchSectionEnum:(id)arg4 withBoolean:(BOOL)arg5;
- (id)getChangeTypeWithJBTId:(id)arg1;
- (int)getAndIncrementChronologicalPosition;
- (int)getAndIncrementPosition;
- (id)initWithJBTISearchSearchResultsProducer:(id)arg1 withJavaUtilMap:(id)arg2 withJBTISearchSearchResultsProducer_ItemsMonitor:(id)arg3 withJavaUtilSet:(id)arg4 withJavaUtilSet:(id)arg5 withInt:(int)arg6 withInt:(int)arg7 withJavaUtilCollection:(id)arg8 withJBTSpan:(id)arg9 withComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg10 withComGoogleAppsBigtopServicesSearchBigTopSearchResponseMetadata:(id)arg11;

@end
