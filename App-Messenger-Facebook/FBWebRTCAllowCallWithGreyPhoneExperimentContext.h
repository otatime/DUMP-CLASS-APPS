//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@class NSString;

@interface FBWebRTCAllowCallWithGreyPhoneExperimentContext : FBExperimentContext
{
    NSString *_initiate_call_override_reason_ids;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, copy, nonatomic) NSString *initiate_call_override_reason_ids; // @synthesize initiate_call_override_reason_ids=_initiate_call_override_reason_ids;
- (void).cxx_destruct;

@end

