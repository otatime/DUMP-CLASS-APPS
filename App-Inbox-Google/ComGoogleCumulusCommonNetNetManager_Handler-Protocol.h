//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleCumulusCommonErrorProto_ErrorInfo, ComGoogleCumulusCommonNetStateProto_NetStateEnum, JavaLangInteger;

@protocol ComGoogleCumulusCommonNetNetManager_Handler <NSObject, JavaObject>
- (void)onNetworkStateChangedWithComGoogleCumulusCommonNetStateProto_NetStateEnum:(ComGoogleCumulusCommonNetStateProto_NetStateEnum *)arg1 withJavaLangInteger:(JavaLangInteger *)arg2 withComGoogleCumulusCommonErrorProto_ErrorInfo:(ComGoogleCumulusCommonErrorProto_ErrorInfo *)arg3;
- (void)onRequestAborted;
- (void)onRequestCompleted;
- (void)onResponseWithId:(id)arg1;
- (void)onPushWithId:(id)arg1;
@end
