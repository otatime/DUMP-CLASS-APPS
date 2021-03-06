//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Yozio : NSObject
{
}

+ (void)saveMetaDataLocallyWithMetaData:(id)arg1 andFileName:(id)arg2;
+ (id)getMetaDataFromResponse:(id)arg1;
+ (id)filterYozioSpecificParamsForDeepLink:(id)arg1;
+ (id)getYozioEventQueue;
+ (void)trackCustomEventWithName:(id)arg1 andValue:(double)arg2;
+ (void)trackPayment:(double)arg1;
+ (void)trackSignup;
+ (void)trackInstall;
+ (void)initYozioDirectory;
+ (BOOL)isYozioKeyFormat:(id)arg1;
+ (void)validateKeys;
+ (void)log:(id)arg1;
+ (id)appKey;
+ (id)getMetaDataAsUrlParameterString:(id)arg1;
+ (id)getLastDeeplinkMetaDataAsUrlParameterString;
+ (id)getNewInstallMetaDataAsUrlParameterString;
+ (id)getMetaDataFromLocal:(id)arg1;
+ (id)getLastDeeplinkMetaDataAsHash;
+ (id)getNewInstallMetaDataAsHash;
+ (id)getMetaDataFromDeeplink:(id)arg1;
+ (void)trackDeeplink:(id)arg1;
+ (void)initializeWithAppKey:(id)arg1 secretKey:(id)arg2 newInstallMetaDataCallback:(CDUnknownBlockType)arg3;

@end

