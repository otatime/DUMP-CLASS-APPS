//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface MNPendingRequestsExperimentContext : FBExperimentContext
{
    BOOL _enabled;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)experimentName;
+ (id)parameterConfigurations;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;

@end

