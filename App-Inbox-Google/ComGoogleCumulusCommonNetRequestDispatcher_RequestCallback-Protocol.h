//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleCumulusCommonErrorProto_ErrorInfo;

@protocol ComGoogleCumulusCommonNetRequestDispatcher_RequestCallback <NSObject, JavaObject>
- (void)onAbort;
- (void)onFailureWithComGoogleCumulusCommonErrorProto_ErrorInfo:(ComGoogleCumulusCommonErrorProto_ErrorInfo *)arg1;
- (void)onSuccessWithId:(id)arg1;
@end
