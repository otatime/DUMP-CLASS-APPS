//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusSyncClientSyncMarkerImpl_GroupMarkerFactory.h"

@class ComGoogleCumulusCommonConfigConfiguration, NSString;

@interface ComGoogleCumulusFrameworkConfigClientSyncerBundle_$13_$1 : NSObject <ComGoogleCumulusSyncClientSyncMarkerImpl_GroupMarkerFactory>
{
    ComGoogleCumulusCommonConfigConfiguration *val$config_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusCommonConfigConfiguration:(id)arg1;
- (id)createWithBoolean:(BOOL)arg1 withComGoogleCumulusSyncSyncProto_StoredSubscription:(id)arg2 withComGoogleCumulusApiPluginSweepFilter_EvictionPhaseEnum:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
