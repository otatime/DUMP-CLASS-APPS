//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTEventListener.h"

@class JavaUtilArrayList, NSString;

@interface JBTICommonEventListenersList : NSObject <JBTEventListener>
{
    JavaUtilArrayList *eventListeners_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)init;
- (void)removeListenerWithJBTEventListener:(id)arg1;
- (void)addListenerWithJBTEventListener:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)containsWithJBTEventListener:(id)arg1;
- (void)clear;
- (void)removeFirst;
- (void)addFirstWithJBTEventListener:(id)arg1;
- (id)getFirst;
- (void)onEventWithJBTEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
