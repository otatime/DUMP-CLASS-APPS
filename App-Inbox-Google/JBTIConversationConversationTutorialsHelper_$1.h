//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTIConversationConversationTutorialsHelper_ConversationCloseListener.h"

@class JBTIConversationConversationTutorialsHelper, NSString;

@interface JBTIConversationConversationTutorialsHelper_$1 : NSObject <JBTIConversationConversationTutorialsHelper_ConversationCloseListener>
{
    JBTIConversationConversationTutorialsHelper *this$0_;
    id <JBTConversation> val$conversation_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJBTIConversationConversationTutorialsHelper:(id)arg1 withJBTConversation:(id)arg2;
- (void)onConversationClose;
- (id)getId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

