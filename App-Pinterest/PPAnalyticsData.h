//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString;

@interface PPAnalyticsData : NSObject
{
    BOOL _isSession;
    BOOL _isOmniture;
    NSString *_trackingImpressionID;
    NSDictionary *_params;
    NSString *_deviceID;
    NSDate *_impressionDate;
    NSString *_sessionID;
}

+ (id)newOmnitureSessionID;
+ (id)omnitureImpressionWithID:(id)arg1 withParams:(id)arg2 withDeviceID:(id)arg3 withSessionID:(id)arg4;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSDate *impressionDate; // @synthesize impressionDate=_impressionDate;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(nonatomic) BOOL isOmniture; // @synthesize isOmniture=_isOmniture;
@property(nonatomic) BOOL isSession; // @synthesize isSession=_isSession;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *trackingImpressionID; // @synthesize trackingImpressionID=_trackingImpressionID;
- (void).cxx_destruct;
- (id)userAgent;
- (id)omnitureTrackingURLString;
- (id)trackingURLString;
- (id)trackingURL;
- (id)description;
- (id)init;
- (id)initWithImpressionID:(id)arg1 withParams:(id)arg2;

@end

