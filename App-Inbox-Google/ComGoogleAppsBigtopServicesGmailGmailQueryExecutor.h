//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTCQueryExecutor.h"

@class ComGoogleAppsBigtopServicesGmailClusterThrottlingHelper, JBTCClusterIdentifier, JBTCGmailLocalResultHelper;

@interface ComGoogleAppsBigtopServicesGmailGmailQueryExecutor : JBTCQueryExecutor
{
    ComGoogleAppsBigtopServicesGmailClusterThrottlingHelper *clusterThrottlingHelper_;
    JBTCClusterIdentifier *clusterIdentifier_;
    JBTCGmailLocalResultHelper *localResultHelper_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_executeWithComGoogleCumulusApiPluginQueryRunnerFactory_withComGoogleCumulusCommonIndexIndexIterable_withComGoogleCumulusApiTypeObjectIndex_withComGoogleCumulusQueryQueryProto_Query_withComGoogleCumulusApiPluginQueryProcessor_Callback_;
- (void)dealloc;
- (id)maybeAddRankRestrictWithComGoogleCumulusQueryQueryProto_Query:(id)arg1 withComGoogleCumulusCommonIndexIndexIterable:(id)arg2;
- (id)executeWithComGoogleCumulusApiPluginQueryRunnerFactory:(id)arg1 withComGoogleCumulusCommonIndexIndexIterable:(id)arg2 withComGoogleCumulusApiTypeObjectIndex:(id)arg3 withComGoogleCumulusQueryQueryProto_Query:(id)arg4 withComGoogleCumulusApiPluginQueryProcessor_Callback:(id)arg5;
- (id)initWithComGoogleAppsBigtopServicesGmailTimeAdaptor:(id)arg1 withJBTCClusterIdentifier:(id)arg2 withJBTCGmailLocalResultHelper:(id)arg3;

@end
