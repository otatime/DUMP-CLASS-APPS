//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GIPLocationManagerNotifier.h"

@class NSNotificationCenter, NSString;

@interface GIPLocationManagerNotificationCenterNotifier : NSObject <GIPLocationManagerNotifier>
{
    NSNotificationCenter *notificationCenter_;
}

- (void)gipLocationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)gipLocationManagerDidStopUpdating:(id)arg1;
- (void)gipLocationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)gipLocationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

