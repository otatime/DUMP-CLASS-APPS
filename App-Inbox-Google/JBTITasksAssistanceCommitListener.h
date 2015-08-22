//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTICommonTransaction_CommitListener.h"

@class JBTICommonObjectFetcher, JBTICommonSapiSpan_Factory, NSString;

@interface JBTITasksAssistanceCommitListener : NSObject <JBTICommonTransaction_CommitListener>
{
    id <JBTId> idToFetch_;
    JBTICommonObjectFetcher *taskFetcher_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    BOOL shouldLogTaskAssist_;
    id <JBTTaskSuggestion> taskSuggestion_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_taskSuggestion_;
+ (id)__annotations_initWithJBTId_withJBTICommonObjectFetcher_withJBTICommonSapiSpan_Factory_withBoolean_withJBTTaskSuggestion__params;
+ (void)initialize;
- (void)dealloc;
- (void)onTxCommittedWithJBTICommonTransaction:(id)arg1 withJBTICommonSapiCallback:(id)arg2 withJBTSpan:(id)arg3;
- (id)initWithJBTId:(id)arg1 withJBTICommonObjectFetcher:(id)arg2 withJBTICommonSapiSpan_Factory:(id)arg3 withBoolean:(BOOL)arg4 withJBTTaskSuggestion:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
