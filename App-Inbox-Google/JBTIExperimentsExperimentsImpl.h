//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTExperiments.h"

@class JBTIExperimentsExperimentsProvider, NSString;

@interface JBTIExperimentsExperimentsImpl : NSObject <JBTExperiments>
{
    JBTIExperimentsExperimentsProvider *experimentsProvider_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithJBTIExperimentsExperimentsProvider_;
+ (id)__annotations;
- (void)dealloc;
- (id)getStringWithJBTExperimentId:(id)arg1;
- (long long)getLongWithJBTExperimentId:(id)arg1;
- (BOOL)getBooleanWithJBTExperimentId:(id)arg1;
- (BOOL)existsWithJBTExperimentId:(id)arg1;
- (id)initWithJBTIExperimentsExperimentsProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

