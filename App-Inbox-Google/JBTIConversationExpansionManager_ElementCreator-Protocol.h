//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTExpandableElement_ExpansionStateEnum;

@protocol JBTIConversationExpansionManager_ElementCreator <NSObject, JavaObject>
- (void)generateExpansionEventWithJBTId:(id <JBTId>)arg1 withJavaUtilList:(id <JavaUtilList>)arg2 withJBTSpan:(id <JBTSpan>)arg3;
- (id <JBTExpandableElement>)createElementWithJBTId:(id <JBTId>)arg1 withJBTExpandableElement_ExpansionStateEnum:(JBTExpandableElement_ExpansionStateEnum *)arg2;
- (id <JBTHyperCollapsedElement>)createHyperCollapsedElementWithJavaUtilList:(id <JavaUtilList>)arg1;
@end

