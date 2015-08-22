//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopSyncClientImplConversationsUndoGmailUndoerFactory, JBTICommonForwardSyncTokenProvider, JBTICommonLocalObjectReferenceFetcher;

@interface JBTIItemsBulkCommandExpander : NSObject
{
    ComGoogleAppsBigtopSyncClientImplConversationsUndoGmailUndoerFactory *gmailUndoerFactory_;
    JBTICommonLocalObjectReferenceFetcher *localObjectReferenceFetcher_;
    id <JBTICommonIdFactory> bulkCommandIdFactory_;
    id <JBTICommonIdFactory> undoableCommandIdFactory_;
    JBTICommonForwardSyncTokenProvider *forwardSyncTokenProvider_;
    BOOL undoEnabled_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_gmailUndoerFactory_;
+ (id)__annotations_initWithComGoogleAppsBigtopSyncClientImplConversationsUndoGmailUndoerFactory_withJBTICommonLocalObjectReferenceFetcher_withJBTICommonIdFactory_withJBTICommonIdFactory_withJBTICommonForwardSyncTokenProvider__params;
+ (id)__annotations_initWithComGoogleAppsBigtopSyncClientImplConversationsUndoGmailUndoerFactory_withJBTICommonLocalObjectReferenceFetcher_withJBTICommonIdFactory_withJBTICommonIdFactory_withJBTICommonForwardSyncTokenProvider_;
+ (id)__annotations;
+ (void)initialize;
- (void)dealloc;
- (void)expandBulkCommandOperationsWithNoLocalItemsWithJBTICommonTransaction:(id)arg1 withComGoogleCumulusApiQuerySpec:(id)arg2 withComGoogleProtobufMessageLite:(id)arg3 withComGoogleProtobufExtensionLite:(id)arg4;
- (void)expandBulkCommandOperationsWithJBTICommonTransaction:(id)arg1 withComGoogleCumulusApiQuerySpec:(id)arg2 withComGoogleProtobufMessageLite:(id)arg3 withComGoogleProtobufExtensionLite:(id)arg4 withJavaUtilCollection:(id)arg5 withJBTId:(id)arg6 withBoolean:(BOOL)arg7 withComGoogleCommonBaseOptional:(id)arg8;
- (id)toRefByIdMapWithJavaUtilList:(id)arg1;
- (void)doAddCommandsToTransactionWithJavaUtilList:(id)arg1 withComGoogleCumulusApiQuerySpec:(id)arg2 withComGoogleProtobufMessageLite:(id)arg3 withComGoogleProtobufExtensionLite:(id)arg4 withJBTICommonTransaction:(id)arg5 withJBTId:(id)arg6 withBoolean:(BOOL)arg7 withComGoogleCommonBaseOptional:(id)arg8;
- (void)addIncrementalCommandsToTransactionWithJavaUtilList:(id)arg1 withComGoogleCumulusApiQuerySpec:(id)arg2 withComGoogleProtobufMessageLite:(id)arg3 withComGoogleProtobufExtensionLite:(id)arg4 withJBTICommonTransaction:(id)arg5 withJBTId:(id)arg6 withComGoogleCommonBaseOptional:(id)arg7;
- (void)addCommandsToTransactionWithJavaUtilList:(id)arg1 withComGoogleCumulusApiQuerySpec:(id)arg2 withComGoogleProtobufMessageLite:(id)arg3 withComGoogleProtobufExtensionLite:(id)arg4 withJBTICommonTransaction:(id)arg5;
- (id)initWithComGoogleAppsBigtopSyncClientImplConversationsUndoGmailUndoerFactory:(id)arg1 withJBTICommonLocalObjectReferenceFetcher:(id)arg2 withJBTICommonIdFactory:(id)arg3 withJBTICommonIdFactory:(id)arg4 withJBTICommonForwardSyncTokenProvider:(id)arg5;

@end
