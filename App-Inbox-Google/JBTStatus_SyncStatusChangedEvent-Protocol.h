//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTEvent.h"
#import "JavaObject.h"
#import "NSObject.h"

@protocol JBTStatus_SyncStatusChangedEvent <JBTEvent, NSObject, JavaObject>
- (int)getPendingBackgroundSyncActiveCount;
- (int)getPendingBackgroundSyncCount;
- (int)getAllBackgroundSyncObjectCount;
- (int)getPendingModifiedHighPriorityCount;
- (int)getPendingModifiedCount;
- (BOOL)hasPendingModifiedObjects;
@end
