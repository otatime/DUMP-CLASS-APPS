//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class JBTIConversationContactFetchingListener, NSString;

@interface JBTIConversationContactFetchingListener_$1 : NSObject <JavaLangRunnable>
{
    JBTIConversationContactFetchingListener *this$0_;
    id <JBTSpan> val$span_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJBTIConversationContactFetchingListener:(id)arg1 withJBTSpan:(id)arg2;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
