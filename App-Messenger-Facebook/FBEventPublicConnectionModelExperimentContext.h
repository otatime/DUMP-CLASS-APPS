//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBEventPublicConnectionModelExperimentContext : FBExperimentContext
{
    BOOL _isTestGroup;
    unsigned int _connectionModel;
}

+ (id)parameterConfigurations;
+ (id)experimentName;
@property(nonatomic) unsigned int connectionModel; // @synthesize connectionModel=_connectionModel;
@property(nonatomic) BOOL isTestGroup; // @synthesize isTestGroup=_isTestGroup;

@end

