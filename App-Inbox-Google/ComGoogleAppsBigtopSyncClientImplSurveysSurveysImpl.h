//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncClientApiSurveysSurveys.h"

@class ComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher, ComGoogleAppsBigtopSyncClientImplSettingsSettingsSaver, JBTCBigTopCommonEnums_CodebaseEnum, JBTICommonSapiSpan_Factory, NSString;

@interface ComGoogleAppsBigtopSyncClientImplSurveysSurveysImpl : NSObject <ComGoogleAppsBigtopSyncClientApiSurveysSurveys>
{
    id <ComGoogleCumulusCommonUtilClock> clock_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    ComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher *settingsFetcher_;
    ComGoogleAppsBigtopSyncClientImplSettingsSettingsSaver *settingsSaver_;
    id <JBTUserLocaleHelper> userLocaleHelper_;
    JBTCBigTopCommonEnums_CodebaseEnum *codebase_;
    long long minMsSinceOnboarding_;
    long long minMsSinceLastOffered_;
    NSString *buildLabel_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_markProductSurveySeenWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_getProductSurveyUrlWithJBTCallback_withJBTSpan__params;
+ (void)initialize;
- (void)dealloc;
- (id)buildProductSurveyUrlWithNSString:(id)arg1 withInt:(int)arg2;
- (void)markProductSurveySeenWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (void)getProductSurveyUrlWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (void)shouldShowProductSurveyWithJBTCallback:(id)arg1;
- (id)initWithComGoogleCumulusCommonUtilClock:(id)arg1 withJBTICommonSapiSpan_Factory:(id)arg2 withComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher:(id)arg3 withComGoogleAppsBigtopSyncClientImplSettingsSettingsSaver:(id)arg4 withJBTUserLocaleHelper:(id)arg5 withJBTCBigTopCommonEnums_CodebaseEnum:(id)arg6 withLong:(long long)arg7 withLong:(long long)arg8 withNSString:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
