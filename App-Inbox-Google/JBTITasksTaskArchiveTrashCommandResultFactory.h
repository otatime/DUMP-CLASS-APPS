//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher, JBTICommonMultiObjectFetcher, JBTICommonSapiSpan_Factory;

@interface JBTITasksTaskArchiveTrashCommandResultFactory : NSObject
{
    JBTICommonMultiObjectFetcher *multiObjectFetcher_;
    ComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher *settingsFetcher_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_wrapCallbackWithJBTTask_withJBTCallback_withJBTCommand_TypeEnum__params;
+ (id)__annotations_wrapTrashCallbackWithJBTTask_withJBTCallback__params;
+ (id)__annotations_wrapArchiveCallbackWithJBTTask_withJBTCallback__params;
+ (void)initialize;
- (void)dealloc;
- (id)getRecurrenceMasterQueryWithJBTId:(id)arg1;
- (BOOL)isExperimentEnabled;
- (BOOL)isRecurrenceInstanceOrExceptionWithJBTTask:(id)arg1;
- (id)wrapCallbackWithJBTTask:(id)arg1 withJBTCallback:(id)arg2 withJBTCommand_TypeEnum:(id)arg3;
- (id)wrapTrashCallbackWithJBTTask:(id)arg1 withJBTCallback:(id)arg2;
- (id)wrapArchiveCallbackWithJBTTask:(id)arg1 withJBTCallback:(id)arg2;
- (id)initWithJBTICommonMultiObjectFetcher:(id)arg1 withComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher:(id)arg2 withJBTICommonSapiSpan_Factory:(id)arg3;

@end
