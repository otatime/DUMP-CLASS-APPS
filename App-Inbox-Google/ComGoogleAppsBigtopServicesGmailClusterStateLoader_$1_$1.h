//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopServicesGmailClusterStateLoader_ClusterSuspendedCallback.h"

@class ComGoogleAppsBigtopServicesClustersBigTopCluster, ComGoogleAppsBigtopServicesGmailClusterStateLoader_$1, NSString;

@interface ComGoogleAppsBigtopServicesGmailClusterStateLoader_$1_$1 : NSObject <ComGoogleAppsBigtopServicesGmailClusterStateLoader_ClusterSuspendedCallback>
{
    ComGoogleAppsBigtopServicesGmailClusterStateLoader_$1 *this$0_;
    ComGoogleAppsBigtopServicesClustersBigTopCluster *val$cluster_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopServicesGmailClusterStateLoader_$1:(id)arg1 withComGoogleAppsBigtopServicesClustersBigTopCluster:(id)arg2;
- (void)onResultWithBoolean:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

