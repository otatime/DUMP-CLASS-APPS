//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusApiBatchStatus_StateEnum, NSString;

@interface ComGoogleCumulusApiBatchStatus : NSObject
{
    NSString *batchId_;
    ComGoogleCumulusApiBatchStatus_StateEnum *state_;
    id <JavaUtilList> affectedObjects_;
    id <ComGoogleCumulusApiMetricsSpan> span_;
}

- (void)dealloc;
- (id)getSpan;
- (id)getState;
- (id)getBatchId;
- (id)getAffectedObjects;
- (id)description;
- (id)initWithNSString:(id)arg1 withComGoogleCumulusApiBatchStatus_StateEnum:(id)arg2 withJavaUtilList:(id)arg3 withComGoogleCumulusApiMetricsSpan:(id)arg4;

@end

