//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface FBEventEmitter : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_events;
}

- (void).cxx_destruct;
- (void)removeTarget:(id)arg1 forEvent:(id)arg2 selectorToPerformOnEvent:(SEL)arg3;
- (void)emitEvent:(id)arg1 withObject:(id)arg2;
- (void)emitEvent:(id)arg1;
- (void)addTarget:(id)arg1 forEvent:(id)arg2 selectorToPerformOnEvent:(SEL)arg3;
- (id)init;

@end

