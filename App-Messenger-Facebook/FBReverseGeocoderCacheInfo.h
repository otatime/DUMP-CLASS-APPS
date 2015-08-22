//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, FBPlacemark;

@interface FBReverseGeocoderCacheInfo : NSObject
{
    CLLocation *_location;
    FBPlacemark *_placemark;
    long long _timestamp;
}

+ (id)infoWithLocation:(id)arg1 placemark:(id)arg2 timestamp:(long long)arg3;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) FBPlacemark *placemark; // @synthesize placemark=_placemark;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void)dealloc;

@end

