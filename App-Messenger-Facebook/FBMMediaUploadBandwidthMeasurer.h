//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface FBMMediaUploadBandwidthMeasurer : NSObject
{
    NSDate *_firstProgressEventTime;
    unsigned int _firstProgressEventBytesTransferred;
    unsigned int _totalBytes;
    double _measuredBandwidthKbps;
    NSString *_contextIdentifier;
    unsigned int _status;
}

@property(readonly, nonatomic) unsigned int status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *contextIdentifier; // @synthesize contextIdentifier=_contextIdentifier;
- (void).cxx_destruct;
- (struct FBMUploadBandwidthMeasurement)currentMeasurementStatus;
- (void)updateProgress:(double)arg1 currentTime:(id)arg2;
- (id)initWithIdentifier:(id)arg1 totalBytes:(unsigned int)arg2;

@end

