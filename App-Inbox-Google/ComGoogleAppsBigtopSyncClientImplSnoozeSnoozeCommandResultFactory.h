//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopSyncClientImplSnoozeSnoozePresetsImpl, JBTICommonSapiSpan_Factory;

@interface ComGoogleAppsBigtopSyncClientImplSnoozeSnoozeCommandResultFactory : NSObject
{
    ComGoogleAppsBigtopSyncClientImplSnoozeSnoozePresetsImpl *snoozePresets_;
    id <TMLTimeService> timeService_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_NO_SUGGESTION_;
+ (id)__annotations_maybeSuggestSnoozePresetWithJavaUtilList_withJBTSnoozeConfig_;
+ (id)__annotations_wrapCallbackWithJBTSnoozeConfig_withJBTCallback__params;
+ (id)__annotations_initWithComGoogleAppsBigtopSyncClientImplSnoozeSnoozePresetsImpl_withTMLTimeService_withJBTICommonSapiSpan_Factory_;
+ (id)__annotations;
+ (void)initialize;
- (void)dealloc;
- (int)getSecondsAfterMidnightWithLong:(long long)arg1;
- (id)maybeSuggestSnoozePresetWithJavaUtilList:(id)arg1 withJBTSnoozeConfig:(id)arg2;
- (id)wrapCallbackWithJBTSnoozeConfig:(id)arg1 withJBTCallback:(id)arg2;
- (id)initWithComGoogleAppsBigtopSyncClientImplSnoozeSnoozePresetsImpl:(id)arg1 withTMLTimeService:(id)arg2 withJBTICommonSapiSpan_Factory:(id)arg3;

@end
