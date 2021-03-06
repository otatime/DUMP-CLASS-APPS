//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocation, CLLocationManager, NSDate, NSError, NSString;

@interface LocationManager : NSObject <CLLocationManagerDelegate>
{
    unsigned int locationUpdateTries;
    NSDate *updateTime;
    CLLocation *location;
    CLLocation *previousLocation;
    NSError *lastLocationError;
    CLLocationManager *_locationManager;
}

+ (id)getInstance;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (CDStruct_feeb6407)getLocalBusinessSearchRegion;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (BOOL)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (BOOL)isLocationServiceEnabled;
- (BOOL)isLocationUpToDate;
- (id)getCurrentLocation;
- (void)didTimeOut:(id)arg1;
- (void)stopLocationManager;
- (void)startUpdatingLocation;
- (void)initialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

