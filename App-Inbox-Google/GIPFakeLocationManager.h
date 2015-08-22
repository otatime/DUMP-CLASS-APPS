//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLLocationManager.h"

@class CLLocation, NSArray;

@interface GIPFakeLocationManager : CLLocationManager
{
    id <CLLocationManagerDelegate> fakedDelegate_;
    unsigned int currentLocationUpdateIndex_;
    id <GIPDelayedInvokerProtocol> invoker_;
    CLLocation *location_;
    CLLocation *oldLocation_;
    NSArray *locations_;
    BOOL loopUpdates_;
    BOOL triggerFirstUpdateImmediately_;
    NSArray *updateSchedule_;
    BOOL updatingLocation_;
    BOOL didSendFailureToDelegate_;
}

+ (void)setAuthorizationStatus:(int)arg1;
+ (void)setFakeLocationServicesEnabled:(BOOL)arg1;
+ (id)locationForLatitude:(double)arg1 longitude:(double)arg2;
+ (int)authorizationStatus;
+ (BOOL)locationServicesEnabled;
@property(retain, nonatomic) NSArray *updateSchedule; // @synthesize updateSchedule=updateSchedule_;
@property(nonatomic) BOOL triggerFirstUpdateImmediately; // @synthesize triggerFirstUpdateImmediately=triggerFirstUpdateImmediately_;
@property(nonatomic) BOOL loopUpdates; // @synthesize loopUpdates=loopUpdates_;
@property(retain, nonatomic) NSArray *fakeLocations; // @synthesize fakeLocations=locations_;
- (void)sendLocationUpdateToDelegate;
- (void)queueNextUpdate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)requestWhenInUseAuthorization;
- (id)location;
- (void)dealloc;
- (id)initWithLocations:(id)arg1 updateSchedule:(id)arg2 loop:(BOOL)arg3;
- (id)init;

@end
