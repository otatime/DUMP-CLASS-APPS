//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface FBMLocationUpdateListenerAnnouncerSubcription : NSObject
{
    id <FBMLocationUpdateListener> _listener;
    NSObject<OS_dispatch_queue> *_listenerQueue;
}

@property(readonly) NSObject<OS_dispatch_queue> *listenerQueue; // @synthesize listenerQueue=_listenerQueue;
@property(readonly) __weak id <FBMLocationUpdateListener> listener; // @synthesize listener=_listener;
- (void).cxx_destruct;
- (id)initWithListener:(id)arg1 listenerQueue:(id)arg2;

@end

