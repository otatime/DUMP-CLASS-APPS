//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GCDWebServerBodyReader.h"

@class NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface GCDWebServerResponse : NSObject <GCDWebServerBodyReader>
{
    NSString *_type;
    unsigned int _length;
    int _status;
    unsigned int _maxAge;
    NSDate *_lastModified;
    NSString *_eTag;
    NSMutableDictionary *_headers;
    BOOL _chunked;
    BOOL _gzipped;
    BOOL _opened;
    NSMutableArray *_encoders;
    id <GCDWebServerBodyReader> _reader;
}

+ (id)response;
+ (id)responseWithRedirect:(id)arg1 permanent:(BOOL)arg2;
+ (id)responseWithStatusCode:(int)arg1;
@property(readonly, nonatomic) NSDictionary *additionalHeaders; // @synthesize additionalHeaders=_headers;
@property(nonatomic, getter=isGZipContentEncodingEnabled) BOOL gzipContentEncodingEnabled; // @synthesize gzipContentEncodingEnabled=_gzipped;
@property(copy, nonatomic) NSString *eTag; // @synthesize eTag=_eTag;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModified;
@property(nonatomic) unsigned int cacheControlMaxAge; // @synthesize cacheControlMaxAge=_maxAge;
@property(nonatomic) int statusCode; // @synthesize statusCode=_status;
@property(nonatomic) unsigned int contentLength; // @synthesize contentLength=_length;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_type;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)performClose;
- (void)performReadDataWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)performOpen:(id *)arg1;
- (void)prepareForReading;
- (void)close;
- (id)readData:(id *)arg1;
- (BOOL)open:(id *)arg1;
@property(readonly, nonatomic) BOOL usesChunkedTransferEncoding;
- (BOOL)hasBody;
- (void)setValue:(id)arg1 forAdditionalHeader:(id)arg2;
- (id)init;
- (id)initWithRedirect:(id)arg1 permanent:(BOOL)arg2;
- (id)initWithStatusCode:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
