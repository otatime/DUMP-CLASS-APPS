//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class LimitResult, NSMutableArray, NSString;

@interface UrlCheckResult : NSObject <TBase, NSCoding>
{
    LimitResult *__result;
    NSString *__sanitizedUrl;
    NSString *__url;
    short __statusCode;
    NSMutableArray *__redirectTimings;
    NSString *__blockReason;
    BOOL __result_isset;
    BOOL __sanitizedUrl_isset;
    BOOL __url_isset;
    BOOL __statusCode_isset;
    BOOL __redirectTimings_isset;
    BOOL __blockReason_isset;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetBlockReason;
- (BOOL)blockReasonIsSet;
@property(retain, nonatomic, getter=blockReason, setter=setBlockReason:) NSString *blockReason;
- (void)unsetRedirectTimings;
- (BOOL)redirectTimingsIsSet;
@property(retain, nonatomic, getter=redirectTimings, setter=setRedirectTimings:) NSMutableArray *redirectTimings;
- (void)unsetStatusCode;
- (BOOL)statusCodeIsSet;
@property(nonatomic, getter=statusCode, setter=setStatusCode:) short statusCode;
- (void)unsetUrl;
- (BOOL)urlIsSet;
@property(retain, nonatomic, getter=url, setter=setUrl:) NSString *url;
- (void)unsetSanitizedUrl;
- (BOOL)sanitizedUrlIsSet;
@property(retain, nonatomic, getter=sanitizedUrl, setter=setSanitizedUrl:) NSString *sanitizedUrl;
- (void)unsetResult;
- (BOOL)resultIsSet;
@property(retain, nonatomic, getter=result, setter=setResult:) LimitResult *result;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(id)arg1 sanitizedUrl:(id)arg2 url:(id)arg3 statusCode:(short)arg4 redirectTimings:(id)arg5 blockReason:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

