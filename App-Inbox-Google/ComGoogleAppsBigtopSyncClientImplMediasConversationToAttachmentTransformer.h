//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplProducersTransformingElementProducer.h"

@class ComGoogleAppsBigtopSyncClientImplMediasMessageDataFilter;

@interface ComGoogleAppsBigtopSyncClientImplMediasConversationToAttachmentTransformer : ComGoogleAppsBigtopSyncClientImplProducersTransformingElementProducer
{
    id <ComGoogleAppsBigtopSyncClientImplLivelistLiveListImpl_Adaptor> adaptor_;
    ComGoogleAppsBigtopSyncClientImplMediasMessageDataFilter *messageDataFilter_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (BOOL)isAttachmentValidWithJBTMessageAttachment:(id)arg1;
- (id)getAttachmentRankWithNSString:(id)arg1 withInt:(int)arg2;
- (id)transformUpdatedElementWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Change:(id)arg1;
- (id)transformRemovedElementWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Change:(id)arg1;
- (id)transformAddedElementWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Change:(id)arg1;
- (id)initWithComGoogleAppsBigtopSyncClientImplProducersElementProducer:(id)arg1 withComGoogleAppsBigtopSyncClientImplLivelistLiveListImpl_Adaptor:(id)arg2 withComGoogleAppsBigtopSyncClientImplMediasMessageDataFilter:(id)arg3;

@end
