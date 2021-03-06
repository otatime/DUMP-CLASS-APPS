//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMAppInitializedListening.h"
#import "FBSessionClassProvidable.h"

@class MNMessengerPlatformUrlHandler, NSArray, NSString, NSURL;

@interface MNUrlHandler : NSObject <FBSessionClassProvidable, FBMAppInitializedListening>
{
    BOOL _appReady;
    id <FBProvider> _navigationCoordinatorProvider;
    id <FBProvider> _threadNavigationCoordinatorProvider;
    id <FBProvider> _threadSetProvider;
    id <FBProvider> _facebookRedirectionControllerProvider;
    id <FBProvider> _treehouseRedirectionControllerProvider;
    id <FBProvider> _redirectionButtonDisplayCoordinatorProvider;
    id <FBProvider> _platformUrlHandlerProvider;
    id <FBProvider> _voipUrlHandlerProvider;
    id <FBProvider> _sessionProvider;
    id <FBProvider> _mnUrlRedirectHandlerProvider;
    id <FBProvider> _stickeredForwardMessageHandlerProvider;
    id <FBProvider> _messengerPlatformUrlHandlerProvider;
    MNMessengerPlatformUrlHandler *_messengerPlatformUrlHandler;
    NSArray *_handlerExtensions;
    NSURL *_pendingUrl;
    NSString *_urlHandlingUuid;
    NSString *_sourceApplication;
}

@property(retain, nonatomic) MNMessengerPlatformUrlHandler *messengerPlatformUrlHandler; // @synthesize messengerPlatformUrlHandler=_messengerPlatformUrlHandler;
@property(copy, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(copy, nonatomic) NSString *urlHandlingUuid; // @synthesize urlHandlingUuid=_urlHandlingUuid;
@property(copy, nonatomic) NSURL *pendingUrl; // @synthesize pendingUrl=_pendingUrl;
- (void).cxx_destruct;
- (void)applicationDidCompleteSettingUpBackgroundServices;
- (void)applicationDidCompleteSettingUpAllServices;
- (void)_showDifferentUserIdsAlert;
- (BOOL)_hasSameUserIdAsFacebookApp;
- (void)_executeOpenUrl:(id)arg1 sourceApplication:(id)arg2;
- (void)setHandlerExtensions:(id)arg1;
- (BOOL)handleOpenUrl:(id)arg1 sourceApplication:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithThreadSetProvider:(id)arg1 navigationCoordinatorProvider:(id)arg2 threadNavigationCoordinatorProvider:(id)arg3 facebookRedirectionControllerProvider:(id)arg4 redirectionButtonDisplayCoordinatorProvider:(id)arg5 platformUrlHandlerProvider:(id)arg6 voipUrlHandlerProvider:(id)arg7 mnUrlRedirectHandlerProvider:(id)arg8 stickeredForwardMessageHandlerProvider:(id)arg9 messengerPlatformUrlHandlerProvider:(id)arg10 sessionProvider:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

