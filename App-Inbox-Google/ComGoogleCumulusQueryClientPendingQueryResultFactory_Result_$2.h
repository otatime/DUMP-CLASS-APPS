//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusSyncClientObjectManager_LoadObjectsCallback.h"

@class ComGoogleCumulusQueryClientPendingQueryResultFactory_Result, ComGoogleCumulusQueryQueryProto_Query, NSString;

@interface ComGoogleCumulusQueryClientPendingQueryResultFactory_Result_$2 : NSObject <ComGoogleCumulusSyncClientObjectManager_LoadObjectsCallback>
{
    ComGoogleCumulusQueryClientPendingQueryResultFactory_Result *this$0_;
    BOOL localLoadComplete_;
    BOOL dispatchAfterStoreLoad_;
    ComGoogleCumulusQueryQueryProto_Query *val$query_;
    id <ComGoogleCumulusApiMetricsSpan> val$loadSpan_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusQueryClientPendingQueryResultFactory_Result:(id)arg1 withComGoogleCumulusQueryQueryProto_Query:(id)arg2 withComGoogleCumulusApiMetricsSpan:(id)arg3;
- (void)onLoadWithComGoogleCumulusSyncClientObjectManager_ObjectGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
