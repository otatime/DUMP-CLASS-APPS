//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface NotificationActionsQueue : NSObject
{
    NSMutableArray *newActionsQueue_;
    NSMutableArray *retryActionsQueue_;
    NSMutableArray *failedActionsArray_;
}

- (void).cxx_destruct;
- (int)appendActions:(id)arg1 toArray:(id)arg2 withCapacity:(int)arg3;
- (void)retrieveActions;
- (void)persistActions;
- (BOOL)hasActiveActions;
- (void)enqueueAction:(id)arg1;
- (id)dequeueAction;
- (void)addFailedAction:(id)arg1;
- (id)init;

@end
