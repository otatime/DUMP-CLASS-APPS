//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DaggerInternalFactory.h"

@class ComGoogleAppsBigtopSyncClientImplSurveysSurveysModule, NSString;

@interface ComGoogleAppsBigtopSyncClientImplSurveysSurveysModule_ProvideSurveysImplFactory : NSObject <DaggerInternalFactory>
{
    ComGoogleAppsBigtopSyncClientImplSurveysSurveysModule *module_;
    id <JavaxInjectProvider> clockProvider_;
    id <JavaxInjectProvider> sapiSpanFactoryProvider_;
    id <JavaxInjectProvider> settingsFetcherProvider_;
    id <JavaxInjectProvider> settingsSaverProvider_;
    id <JavaxInjectProvider> userLocaleHelperProvider_;
    id <JavaxInjectProvider> applicationInfoProvider_;
    id <JavaxInjectProvider> buildLabelProvider_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createWithComGoogleAppsBigtopSyncClientImplSurveysSurveysModule:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4 withJavaxInjectProvider:(id)arg5 withJavaxInjectProvider:(id)arg6 withJavaxInjectProvider:(id)arg7 withJavaxInjectProvider:(id)arg8;
- (void)dealloc;
- (id)get;
- (id)initWithComGoogleAppsBigtopSyncClientImplSurveysSurveysModule:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4 withJavaxInjectProvider:(id)arg5 withJavaxInjectProvider:(id)arg6 withJavaxInjectProvider:(id)arg7 withJavaxInjectProvider:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
