//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplLivelistElementsChangedEventImpl.h"

#import "JBTConversationMessageList_HypercollapseExpansionEvent.h"

@class NSString;

@interface JBTIConversationConversationMessageListImpl_ExpansionEventImpl : ComGoogleAppsBigtopSyncClientImplLivelistElementsChangedEventImpl <JBTConversationMessageList_HypercollapseExpansionEvent>
{
    id <JBTId> id__;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getId;
- (id)initWithJBTId:(id)arg1 withJBTEvent_TypeEnum:(id)arg2 withBoolean:(BOOL)arg3 withJavaUtilList:(id)arg4 withInt:(int)arg5 withJBTSpan:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

