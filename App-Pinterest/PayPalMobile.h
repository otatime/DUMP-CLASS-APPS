//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, PPAppSwitchResponse, PPEnvironmentState, PPRiskComponent;

@interface PayPalMobile : NSObject
{
    PPEnvironmentState *_state;
    PPAppSwitchResponse *_appSwitchResponse;
    PPRiskComponent *_risk;
    NSDictionary *_clientIdsForEnvironments;
    NSString *_preconnectEnvironment;
}

+ (void)setClientId:(id)arg1 forEnvironment:(id)arg2;
+ (void)addEnvironments:(id)arg1;
+ (id)availableEnvironments;
+ (void)clearAllUserData;
+ (id)clientMetadataID;
+ (id)applicationCorrelationIDForEnvironment:(id)arg1;
+ (void)preconnectWithEnvironment:(id)arg1;
+ (void)initializeWithClientIdsForEnvironments:(id)arg1;
+ (id)libraryVersion;
+ (id)sharedInstance;
@property(nonatomic) NSString *preconnectEnvironment; // @synthesize preconnectEnvironment=_preconnectEnvironment;
@property(copy, nonatomic) NSDictionary *clientIdsForEnvironments; // @synthesize clientIdsForEnvironments=_clientIdsForEnvironments;
@property(nonatomic) __weak PPRiskComponent *risk; // @synthesize risk=_risk;
@property(retain, nonatomic) PPAppSwitchResponse *appSwitchResponse; // @synthesize appSwitchResponse=_appSwitchResponse;
@property(retain, nonatomic) PPEnvironmentState *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)createStateForEnvironment:(id)arg1;
- (id)createServiceManagerForCurrentEnvironment;
- (BOOL)hasEnvironmentSet;
- (void)logout;
- (id)init;
- (id)serviceManagerForPayPalTouchForEnvironment:(id)arg1;

@end

