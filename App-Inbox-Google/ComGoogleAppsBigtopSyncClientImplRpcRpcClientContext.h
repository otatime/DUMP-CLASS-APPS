//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopSyncClientImplRpcRpcProto_Status, NSString;

@interface ComGoogleAppsBigtopSyncClientImplRpcRpcClientContext : NSObject
{
    BOOL isDispatched_;
    NSString *requestSpanId_;
    ComGoogleAppsBigtopSyncClientImplRpcRpcProto_Status *responseStatus_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_responseStatus_;
+ (id)getProvider;
+ (id)create;
- (void)dealloc;
- (id)getRequestSpanId;
- (id)setRequestSpanIdWithNSString:(id)arg1;
- (id)getErrorMessage;
- (id)getErrorCode;
- (BOOL)isCompleted;
- (BOOL)isOk;
- (void)completeWithComGoogleAppsBigtopSyncClientImplRpcRpcProto_Status:(id)arg1;
- (void)setDispatched;
- (void)checkIsError;
- (void)checkIsCompleted;
- (id)init;

@end

