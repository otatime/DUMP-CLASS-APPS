//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTSetDateAction.h"

@class NSString;

@interface JBTISmartMailSetDateForDeadlineActionImpl : NSObject <JBTSetDateAction>
{
    NSString *eventName_;
    NSString *actionText_;
    id <JBTTask> taskContext_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_setDateWithLong_withJBTCallback_withJBTSpan__params;
- (void)__javaClone;
- (void)dealloc;
- (void)setDateWithLong:(long long)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3;
- (id)getActionText;
- (id)getActionType;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withJBTISmartMailSmartMailComponentContextImpl:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
