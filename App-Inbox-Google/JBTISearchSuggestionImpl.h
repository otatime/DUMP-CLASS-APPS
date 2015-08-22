//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTIItemsItemImpl.h"

#import "JBTSuggestion.h"

@class JBTCCachedValue, JBTICommonSapiSpan_Factory, JBTIContactsPerContactPhotoUrls, JBTISearchSuggestionPromoImpl, JBTSuggestion_SuggestionTypeEnum, NSString;

@interface JBTISearchSuggestionImpl : JBTIItemsItemImpl <JBTSuggestion>
{
    id <JBTId> id__;
    id <JBTQuery> query_;
    id <JavaUtilList> titleRegions_;
    JBTSuggestion_SuggestionTypeEnum *suggestionType_;
    JBTCCachedValue *imageCache_;
    NSString *imageUrl_;
    id <JBTContactReference> contactReference_;
    JBTIContactsPerContactPhotoUrls *perContactPhotoUrls_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    JBTISearchSuggestionPromoImpl *suggestionPromo_;
    id <JBTISearchSuggestionImpl_SuggestionRemover> suggestionRemover_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_suggestionRemover_;
+ (id)__annotations_suggestionPromo_;
+ (id)__annotations_contactReference_;
+ (id)__annotations_imageUrl_;
+ (id)__annotations_removeSelfWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_getSuggestionPromo;
+ (id)__annotations_getImageUrlWithJBTImageUrlSettings__params;
+ (id)__annotations_getImageUrlWithJBTImageUrlSettings_;
+ (id)__annotations_getTitle;
+ (id)__annotations_initWithJBTId_withJBTQuery_withJavaUtilList_withJBTSuggestion_SuggestionTypeEnum_withNSString_withJBTContactReference_withJBTIContactsPerContactPhotoUrls_withJBTICommonSapiSpan_Factory_withJBTISearchSuggestionPromoImpl_withJBTISearchSuggestionImpl_SuggestionRemover__params;
+ (void)initialize;
- (void)dealloc;
- (void)removeSelfWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (id)getSuggestionPromo;
- (id)getImageUrlWithJBTImageUrlSettings:(id)arg1;
- (BOOL)hasProfilePicture;
- (id)getQuery;
- (id)getTitleRegions;
- (id)getTitle;
- (id)getSuggestionType;
- (id)getItemType;
- (id)getId;
- (id)initWithJBTId:(id)arg1 withJBTQuery:(id)arg2 withJavaUtilList:(id)arg3 withJBTSuggestion_SuggestionTypeEnum:(id)arg4 withNSString:(id)arg5 withJBTContactReference:(id)arg6 withJBTIContactsPerContactPhotoUrls:(id)arg7 withJBTICommonSapiSpan_Factory:(id)arg8 withJBTISearchSuggestionPromoImpl:(id)arg9 withJBTISearchSuggestionImpl_SuggestionRemover:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
