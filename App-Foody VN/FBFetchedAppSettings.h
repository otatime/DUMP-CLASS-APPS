//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface FBFetchedAppSettings : NSObject
{
    BOOL _supportsImplicitSdkLogging;
    BOOL _supportsSystemAuth;
    BOOL _enableLoginTooltip;
    NSString *_serverAppName;
    NSString *_appID;
    NSString *_loginTooltipContent;
    NSDictionary *_dialogConfigs;
    unsigned int _appEventsFeatureOptions;
}

@property unsigned int appEventsFeatureOptions; // @synthesize appEventsFeatureOptions=_appEventsFeatureOptions;
@property(copy, nonatomic) NSDictionary *dialogConfigs; // @synthesize dialogConfigs=_dialogConfigs;
@property(copy, nonatomic) NSString *loginTooltipContent; // @synthesize loginTooltipContent=_loginTooltipContent;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property BOOL enableLoginTooltip; // @synthesize enableLoginTooltip=_enableLoginTooltip;
@property BOOL supportsSystemAuth; // @synthesize supportsSystemAuth=_supportsSystemAuth;
@property BOOL supportsImplicitSdkLogging; // @synthesize supportsImplicitSdkLogging=_supportsImplicitSdkLogging;
@property(copy, nonatomic) NSString *serverAppName; // @synthesize serverAppName=_serverAppName;
- (BOOL)doesAppLogImplicitPurchaseEvents;
- (BOOL)shouldAccessAdvertisingID;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 appEventsFeatureOptions:(unsigned int)arg2;
- (id)init;

@end
