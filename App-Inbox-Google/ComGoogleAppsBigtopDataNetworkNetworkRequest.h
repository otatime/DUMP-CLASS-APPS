//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopDataNetworkNetworkRequest_PriorityEnum;

@interface ComGoogleAppsBigtopDataNetworkNetworkRequest : NSObject
{
    int serialId_;
    id payload_;
    ComGoogleAppsBigtopDataNetworkNetworkRequest_PriorityEnum *priority_;
    id <ComGoogleAppsBigtopDataNetworkRetryConfig> retryConfig_;
    int attemptNumber_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (id)copyWithAttemptNumberWithInt:(int)arg1;
- (int)getAttemptNumber;
- (id)getRetryConfig;
- (id)getPriority;
- (id)getPayload;
- (int)getSerialId;
- (id)initWithId:(id)arg1;
- (id)initWithId:(id)arg1 withComGoogleAppsBigtopDataNetworkNetworkRequest_PriorityEnum:(id)arg2;
- (id)initWithId:(id)arg1 withComGoogleAppsBigtopDataNetworkNetworkRequest_PriorityEnum:(id)arg2 withComGoogleAppsBigtopDataNetworkRetryConfig:(id)arg3;
- (id)initWithInt:(int)arg1 withId:(id)arg2 withComGoogleAppsBigtopDataNetworkNetworkRequest_PriorityEnum:(id)arg3 withComGoogleAppsBigtopDataNetworkRetryConfig:(id)arg4 withInt:(int)arg5;

@end
