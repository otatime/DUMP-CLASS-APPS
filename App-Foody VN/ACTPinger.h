//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"

@class NSDate, NSMutableData, NSString, NSURLConnection, NSURLRequest, NSURLResponse;

@interface ACTPinger : NSObject <NSURLConnectionDelegate>
{
    BOOL _modifiedForRetry;
    id <ACTPingerDelegate> _delegate;
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NSURLResponse *_response;
    NSMutableData *_receivedData;
    unsigned int _remainingRetryCount;
    NSDate *_staleDate;
}

+ (id)pingerWithRequestString:(id)arg1 retryParameters:(id)arg2;
@property(nonatomic, getter=isModifiedForRetry) BOOL modifiedForRetry; // @synthesize modifiedForRetry=_modifiedForRetry;
@property(retain, nonatomic) NSDate *staleDate; // @synthesize staleDate=_staleDate;
@property(nonatomic) unsigned int remainingRetryCount; // @synthesize remainingRetryCount=_remainingRetryCount;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) id <ACTPingerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)appendRetryParameter;
- (BOOL)shouldRetry;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)handleFailureWithError:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)pingerStore;
- (id)retryQueue;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)ping;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;
- (id)requestString;
- (id)parameters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
