//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBToastQueueConsumable.h"

@class FBQueuedToast, FBToast;

@protocol FBToastQueuing <FBToastQueueConsumable>
- (void)removeToast:(FBToast *)arg1;
- (void)queueToast:(FBQueuedToast *)arg1;
@end
