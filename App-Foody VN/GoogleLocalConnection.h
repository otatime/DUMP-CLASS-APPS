//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSURLConnection;

@interface GoogleLocalConnection : NSObject
{
    id <GoogleLocalConnectionDelegate> delegate;
    NSMutableData *responseData;
    NSURLConnection *connection;
    BOOL connectionIsActive;
    int minAccuracyValue;
}

@property(nonatomic) int minAccuracyValue; // @synthesize minAccuracyValue;
@property(nonatomic) BOOL connectionIsActive; // @synthesize connectionIsActive;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData;
@property(nonatomic) id <GoogleLocalConnectionDelegate> delegate; // @synthesize delegate;
- (void)dealloc;
- (void)cancelGetGoogleObjects;
- (CDStruct_feeb6407)makeRegionFromViewportCornersAndCenter:(CDStruct_c3b9c2ee)arg1 NELat:(id)arg2 NELng:(id)arg3 SWLat:(id)arg4 SWLng:(id)arg5;
- (CDStruct_feeb6407)getViewPortForGoogleSearchResults:(id)arg1 andGoogleViewport:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)getGoogleObjectsWithQuery:(id)arg1 andMapRegion:(CDStruct_feeb6407)arg2 andNumberOfResults:(int)arg3 addressesOnly:(BOOL)arg4 andReferer:(id)arg5;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

