//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTICommonEventImpl.h"

#import "JBTConversationList_SenderContactsReadyEvent.h"

@class NSString;

@interface JBTIConversationContactFetchingListener_SenderContactsReadyEventImpl : JBTICommonEventImpl <JBTConversationList_SenderContactsReadyEvent>
{
    id <JavaUtilList> updatedConverstations_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getConversationIds;
- (id)initWithJavaUtilList:(id)arg1 withJBTSpan:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

