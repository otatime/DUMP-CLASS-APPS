//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopServicesGmailClusterThrottlingHelper, ComGoogleCumulusQueryQueryProto_Query, JBTCClusterIdentifier, JBTCGmailLocalResultHelper;

@interface ComGoogleAppsBigtopServicesGmailGmailSingleClusterInclusionQueryRunner : NSObject
{
    ComGoogleAppsBigtopServicesGmailClusterThrottlingHelper *clusterThrottlingHelper_;
    id <ComGoogleCumulusApiPluginMultiPassQueryRunner> multiPassQueryRunner_;
    ComGoogleCumulusQueryQueryProto_Query *query_;
    id <ComGoogleCumulusCommonIndexIndexIterable> rootIterable_;
    id <ComGoogleCumulusApiTypeObjectIndex> index_;
    JBTCClusterIdentifier *clusterIdentifier_;
    JBTCGmailLocalResultHelper *localResultHelper_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_executeWithComGoogleCumulusCommonCollectImmutableList_;
+ (id)__annotations_executeForInboxClusterExpansion;
+ (id)__annotations_execute;
- (void)dealloc;
- (id)executeWithComGoogleCumulusCommonCollectImmutableList:(id)arg1;
- (id)executeForInboxClusterExpansion;
- (id)execute;
- (id)initWithComGoogleAppsBigtopServicesGmailClusterThrottlingHelper:(id)arg1 withComGoogleCumulusApiPluginMultiPassQueryRunner:(id)arg2 withComGoogleCumulusCommonIndexIndexIterable:(id)arg3 withComGoogleCumulusApiTypeObjectIndex:(id)arg4 withComGoogleCumulusQueryQueryProto_Query:(id)arg5 withJBTCClusterIdentifier:(id)arg6 withJBTCGmailLocalResultHelper:(id)arg7;

@end

