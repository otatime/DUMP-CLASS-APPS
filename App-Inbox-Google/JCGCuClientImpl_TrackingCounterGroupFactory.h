//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiMetricsCounterGroup_Factory.h"

@class NSString;

@interface JCGCuClientImpl_TrackingCounterGroupFactory : NSObject <ComGoogleCumulusApiMetricsCounterGroup_Factory>
{
    id <ComGoogleCumulusApiMetricsCounterGroup_Factory> factory_;
    id <JavaUtilSet> counterGroups_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)flushTrackedInstancesNow;
- (id)getAndClearTrackedInstances;
- (id)createWithComGoogleCumulusCommonMetricsProto_ComponentEnum:(id)arg1 withInt:(int)arg2;
- (id)initWithComGoogleCumulusApiMetricsCounterGroup_Factory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
