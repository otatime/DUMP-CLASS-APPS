//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTEvent.h"
#import "JavaObject.h"
#import "NSObject.h"

@class JBTSendingMonitor_SendingStateEnum;

@protocol JBTSendingMonitor_SendingStateChangedEvent <JBTEvent, NSObject, JavaObject>
- (void)cancelSendWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (BOOL)canCancelSend;
- (JBTSendingMonitor_SendingStateEnum *)getSendingState;
- (id <JBTId>)getConversationId;
- (id <JBTId>)getMessageId;
@end
