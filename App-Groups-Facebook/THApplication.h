//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBApplication.h"

#import "FBApplicationSendEventHookable.h"
#import "FBZeroRatedApplicationProtocol.h"
#import "ZRURLCheckerDelegate.h"

@class NSMutableSet, NSString, ZRURLChecker;

@interface THApplication : FBApplication <ZRURLCheckerDelegate, FBApplicationSendEventHookable, FBZeroRatedApplicationProtocol>
{
    NSMutableSet *_eventListeners;
    ZRURLChecker *_urlChecker;
}

+ (id)fencePrefKeyForURL:(id)arg1;
+ (id)sharedApplication;
- (void).cxx_destruct;
- (void)sendEvent:(id)arg1;
- (void)removeEventListener:(id)arg1;
- (void)addEventListener:(id)arg1;
- (BOOL)urlChecker:(id)arg1 didVerifyCanOpenURL:(id)arg2;
- (BOOL)openURL:(id)arg1 withZRTariffedUxSentry:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
