//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBExperimentPersistentStore : NSObject
{
    id <FBExperimentManagerPolicy> _policy;
}

- (void).cxx_destruct;
- (void)persistExperimentOverrideData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadOverridesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)persistExperimentCatalog:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadExperimentsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithPolicy:(id)arg1;

@end
