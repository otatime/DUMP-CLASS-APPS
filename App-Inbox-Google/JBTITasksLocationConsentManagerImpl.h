//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTLocationConsentManager.h"

@class ComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher, ComGoogleAppsBigtopSyncClientImplSettingsSettingsSaver, JBTICommonSapiSpan_Factory, NSString;

@interface JBTITasksLocationConsentManagerImpl : NSObject <JBTLocationConsentManager>
{
    ComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher *settingsFetcher_;
    ComGoogleAppsBigtopSyncClientImplSettingsSettingsSaver *settingsSaver_;
    id <JBTLocationHelper> locationHelper_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_checkCountryAndUpdateStatusWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_locationAccessAllowedWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_setLocationOptInStatusWithJavaLangBoolean_withJBTCallback_withJBTSpan__params;
+ (id)__annotations_getLocationOptInStatusWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_setKoreaLocationTOSStatusWithJBTLocationConsentManager_KoreaLocationTOSStatusEnum_withJBTCallback_withJBTSpan__params;
+ (id)__annotations_getKoreaLocationTOSStatusWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_initWithComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher_withComGoogleAppsBigtopSyncClientImplSettingsSettingsSaver_withJBTLocationHelper_withJBTICommonSapiSpan_Factory_;
+ (id)__annotations;
+ (void)initialize;
- (void)dealloc;
- (void)checkCountryAndUpdateStatusWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (id)getKoreaTOSStatusFromIntWithJavaLangInteger:(id)arg1;
- (BOOL)locationAccessAllowedFromSettingsWithJavaUtilMap:(id)arg1;
- (void)locationAccessAllowedWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (void)setLocationOptInStatusWithJavaLangBoolean:(id)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3;
- (void)getLocationOptInStatusWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (void)setKoreaLocationTOSStatusWithJBTLocationConsentManager_KoreaLocationTOSStatusEnum:(id)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3;
- (void)getKoreaLocationTOSStatusWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (id)initWithComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher:(id)arg1 withComGoogleAppsBigtopSyncClientImplSettingsSettingsSaver:(id)arg2 withJBTLocationHelper:(id)arg3 withJBTICommonSapiSpan_Factory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

