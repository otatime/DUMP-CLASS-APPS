//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NRMAScopedMeasurement.h"

@class NRMAThreadInfo, NSString;

@interface NRMAScopedHTTPErrorMeasurement : NRMAScopedMeasurement
{
    NSString *type;
    NSString *httpMethod;
    long long startTime;
    long long endTime;
    NSString *uri;
    int statusCode;
    NSString *rootURL;
    NSString *wanType;
    NRMAThreadInfo *threadInfo;
}

- (void).cxx_destruct;
- (id)JSONObject;
- (id)initWithMeasurement:(id)arg1;

@end

