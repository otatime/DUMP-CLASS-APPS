//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBHttpRequestStatus.h"

@class NSHTTPURLResponse, NSString, NSURLRequest;

@interface FBHttpRequestStatus : NSObject <FBHttpRequestStatus>
{
    unsigned int _expectedBytesUp;
    unsigned int _expectedBytesDownUncompressed;
    unsigned int _attempts;
    unsigned int _connectionType;
    unsigned int _bytesUp;
    unsigned int _bytesDownUncompressed;
    NSString *_protocolEngineUsed;
    NSURLRequest *_httpRequest;
    NSHTTPURLResponse *_httpResponse;
    double _requestAddTime;
    double _requestBeginTime;
    double _requestEndTime;
    double _responseBeginTime;
    double _responseEndTime;
    double _rawDownloadBandwidth;
    double _rawUploadBandwidth;
}

@property(readonly, nonatomic) NSHTTPURLResponse *httpResponse; // @synthesize httpResponse=_httpResponse;
@property(readonly, copy, nonatomic) NSURLRequest *httpRequest; // @synthesize httpRequest=_httpRequest;
@property(readonly, nonatomic) unsigned int connectionType; // @synthesize connectionType=_connectionType;
@property(readonly, nonatomic) double requestAddTime; // @synthesize requestAddTime=_requestAddTime;
@property(readonly, nonatomic) unsigned int attempts; // @synthesize attempts=_attempts;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL downloadComplete;
@property(readonly, nonatomic) BOOL uploadComplete;
@property(readonly, nonatomic) float downloadProgress;
@property(readonly, nonatomic) float uploadProgress;
@property(readonly, nonatomic) unsigned int uploadBandwidth;
@property(readonly, nonatomic) unsigned int downloadBandwidth;
@property(readonly, nonatomic) double rawUploadBandwidth; // @synthesize rawUploadBandwidth=_rawUploadBandwidth;
@property(readonly, nonatomic) double rawDownloadBandwidth; // @synthesize rawDownloadBandwidth=_rawDownloadBandwidth;
@property(readonly, copy, nonatomic) NSString *protocolEngineUsed; // @synthesize protocolEngineUsed=_protocolEngineUsed;
@property(readonly, nonatomic) unsigned int bytesDownUncompressed; // @synthesize bytesDownUncompressed=_bytesDownUncompressed;
@property(readonly, nonatomic) unsigned int bytesUp; // @synthesize bytesUp=_bytesUp;
@property(readonly, nonatomic) double responseEndTime; // @synthesize responseEndTime=_responseEndTime;
@property(readonly, nonatomic) double responseBeginTime; // @synthesize responseBeginTime=_responseBeginTime;
@property(readonly, nonatomic) double requestEndTime; // @synthesize requestEndTime=_requestEndTime;
@property(readonly, nonatomic) double requestBeginTime; // @synthesize requestBeginTime=_requestBeginTime;
- (id)initWithAttempts:(unsigned int)arg1 requestAdd:(double)arg2 requestBegin:(double)arg3 requestEnd:(double)arg4 responseBegin:(double)arg5 responseEnd:(double)arg6 bytesUp:(unsigned int)arg7 expectedBytesUp:(unsigned int)arg8 bytesDown:(unsigned int)arg9 expectedBytesDown:(unsigned int)arg10 protocolEngineUsed:(id)arg11 connectionType:(unsigned int)arg12 rawDownloadBandwidth:(double)arg13 rawUploadBandwidth:(double)arg14 request:(id)arg15 response:(id)arg16;
- (id)initWithAttempts:(unsigned int)arg1 requestAdd:(double)arg2 request:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

