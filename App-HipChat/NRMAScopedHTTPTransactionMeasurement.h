//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NRMAScopedMeasurement.h"

@class NRMAThreadInfo, NSDictionary, NSString;

@interface NRMAScopedHTTPTransactionMeasurement : NRMAScopedMeasurement
{
    unsigned int statusCode;
    int errorCode;
    NSString *carrier;
    long long bytesReceived;
    long long bytesSent;
    NSString *type;
    NSString *uri;
    NSString *httpMethod;
    long long startTime;
    long long endTime;
    NSString *wanType;
    NSString *cross_process_data;
    NSString *rootURL;
    NSDictionary *custom_params;
    NRMAThreadInfo *threadInfo;
}

- (void).cxx_destruct;
- (id)JSONObject;
- (id)initWithMeasurement:(id)arg1;

@end

