//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface FBPlacePickerLogger : NSObject
{
    unsigned long long _sessionStartTime;
    NSMutableSet *_eventsLogged;
    NSMutableDictionary *_commonInfo;
    BOOL _hasTtiError;
    NSString *_sessionID;
    NSMutableSet *_resultsSeen;
}

+ (BOOL)shouldLogOncePerSession:(id)arg1;
@property(nonatomic) BOOL hasTtiError; // @synthesize hasTtiError=_hasTtiError;
@property(retain, nonatomic) NSMutableSet *resultsSeen; // @synthesize resultsSeen=_resultsSeen;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)_markTtiError;
- (void)logPlacePickerEvent:(id)arg1 nearbyDataSet:(id)arg2 lastLocation:(id)arg3 extra:(id)arg4;
- (void)didSelectBlockerPlace;
- (void)didFinishAddPlace:(id)arg1 withCreationFlowType:(id)arg2;
- (void)willNavigateToCrowdsourcingFlow:(unsigned int)arg1 nearbyDataSet:(id)arg2 lastLocation:(id)arg3;
- (void)didSkipPlacePickerWithNearbyDataSet:(id)arg1 lastLocation:(id)arg2;
- (void)didCancelPlacePickerWithNearbyDataSet:(id)arg1 lastLocation:(id)arg2;
- (void)didSeePlacePickerErrorView:(unsigned int)arg1;
- (void)didSeePlacePickerNUX;
- (void)didGrantLocationPermission;
- (void)didDenyLocationPermission;
- (void)didClickTurnOnLocationServices;
- (void)didHaveNetworkFailure;
- (void)didPreserveCurrentSelection;
- (void)didRemoveCurrentPlaceSelectionWithNearbyDataSet:(id)arg1 lastLocation:(id)arg2;
- (void)didPerformFirstScrollWithNearbyDataSet:(id)arg1 lastLocation:(id)arg2;
- (void)didPerformFirstKeyStrokeWithNearbyDataSet:(id)arg1 lastLocation:(id)arg2;
- (void)didPickPlaceAtIndex:(int)arg1 nearbyDataset:(id)arg2 lastLocation:(id)arg3;
- (void)didEnterBackgroundWithNearbyDataSet:(id)arg1 lastLocation:(id)arg2;
- (void)locationManagerDidCallbackWithLocation:(id)arg1 error:(id)arg2;
- (void)resultsDidLoadWithNearbyDataSet:(id)arg1 lastLocation:(id)arg2;
- (void)sessionWillStart:(id)arg1 nearbyDataSet:(id)arg2 lastLocation:(id)arg3;
- (void)willSeePlace:(id)arg1;
- (id)initWithCompositionID:(id)arg1 searchType:(id)arg2;

@end
