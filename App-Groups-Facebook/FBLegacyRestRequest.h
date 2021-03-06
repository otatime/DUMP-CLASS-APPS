//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBFacebookAPIRequest.h"

@class NSDictionary, NSString;

@interface FBLegacyRestRequest : FBFacebookAPIRequest
{
    NSString *_method;
    NSString *_httpMethod;
    NSDictionary *_parameters;
    BOOL _signedRequest;
    BOOL _shouldCompressHTTPPostBody;
    BOOL _shouldCompressNSDataInMultipartForm;
    CDUnknownBlockType _responseHandlerFactory;
}

@property(nonatomic) BOOL shouldCompressNSDataInMultipartForm; // @synthesize shouldCompressNSDataInMultipartForm=_shouldCompressNSDataInMultipartForm;
@property(nonatomic) BOOL shouldCompressHTTPPostBody; // @synthesize shouldCompressHTTPPostBody=_shouldCompressHTTPPostBody;
@property(nonatomic, getter=isSignedRequest) BOOL signedRequest; // @synthesize signedRequest=_signedRequest;
- (void)setResponseHandlerFactory:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)responseHandlerFactory;
- (void).cxx_destruct;
- (id)methodForSignature;
- (unsigned int)compressionMethod;
- (BOOL)useMultipartForm;
- (id)parameters;
- (id)relativePath;
- (id)host;
- (id)httpMethod;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithMethod:(id)arg1 parameters:(id)arg2 httpMethod:(id)arg3 friendlyName:(id)arg4 callerClass:(Class)arg5;
- (id)initWithMethod:(id)arg1 parameters:(id)arg2 httpMethod:(id)arg3;

@end

