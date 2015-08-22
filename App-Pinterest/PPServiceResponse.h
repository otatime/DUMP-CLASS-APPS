//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSError, NSString;

@interface PPServiceResponse : NSObject
{
    BOOL _success;
    int _statusCode;
    NSString *_debugId;
    NSDate *_timestamp;
    NSError *_error;
    NSDictionary *_serverResponse;
}

+ (id)responseForRequest:(id)arg1 body:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *serverResponse; // @synthesize serverResponse=_serverResponse;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *debugId; // @synthesize debugId=_debugId;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) BOOL success; // @synthesize success=_success;
- (void).cxx_destruct;
- (BOOL)parse:(id)arg1;
- (id)initWithHttpStatus:(int)arg1 body:(id)arg2;

@end

