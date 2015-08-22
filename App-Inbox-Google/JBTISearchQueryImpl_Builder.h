//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTQuery_Builder.h"

@class ComGoogleAppsBigtopServicesSearchSearchMetricsProto_SuggestionClick, JBTQuery_ReasonEnum, NSString;

@interface JBTISearchQueryImpl_Builder : NSObject <JBTQuery_Builder>
{
    NSString *textPart_;
    JBTQuery_ReasonEnum *reason_;
    NSString *snippet_;
    NSString *imageUrl_;
    ComGoogleAppsBigtopServicesSearchSearchMetricsProto_SuggestionClick *suggestionClickMetrics_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_suggestionClickMetrics_;
+ (id)__annotations_imageUrl_;
+ (id)__annotations_snippet_;
+ (id)__annotations_setSuggestionClickMetricsWithComGoogleAppsBigtopServicesSearchSearchMetricsProto_SuggestionClick__params;
+ (id)__annotations_setSnippetWithNSString__params;
+ (id)__annotations_setImageUrlWithNSString__params;
+ (id)__annotations_setIsCompleteWithBoolean_;
- (void)dealloc;
- (id)init;
- (id)build;
- (id)clear;
- (id)setSuggestionClickMetricsWithComGoogleAppsBigtopServicesSearchSearchMetricsProto_SuggestionClick:(id)arg1;
- (id)setSnippetWithNSString:(id)arg1;
- (id)setImageUrlWithNSString:(id)arg1;
- (id)setReasonWithJBTQuery_ReasonEnum:(id)arg1;
- (id)setIsCompleteWithBoolean:(BOOL)arg1;
- (id)setTextPartWithNSString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
