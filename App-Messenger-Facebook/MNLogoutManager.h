//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBRequestDelegate.h"

@class FBAPISessionStore, FBExceptionHandler, FBFacebook, FBMImageViewDownloader, FBMMQTTConnectionManager, FBMPushKitRegistrar, FBMRequest, FBMSPDataStore, FBMStickerPurchaseManager, FBMThreadSet, FBMessagingStore, FBPreviouslySyncedContactsStore, FBUserSession, MNAudioCache, MNNonDiscardingBlobStore, MNUserSettings, NSHTTPCookieStorage, NSString, NSUserDefaults, OrcaPersistManager, OrcaPushRegistrar;

@interface MNLogoutManager : NSObject <FBRequestDelegate>
{
    BOOL _isTornDown;
    id <OrcaLogoutHandler> _logoutHandler;
    FBFacebook *_facebook;
    FBAPISessionStore *_apiSessionStore;
    FBMThreadSet *_threads;
    OrcaPersistManager *_persistManager;
    FBMessagingStore *_messagingStore;
    MNUserSettings *_userSettings;
    OrcaPushRegistrar *_pushRegistrar;
    FBMPushKitRegistrar *_pushkitRegistrar;
    FBExceptionHandler *_exceptionHandler;
    NSHTTPCookieStorage *_httpCookieStorage;
    FBMImageViewDownloader *_imageViewDownloader;
    FBMStickerPurchaseManager *_stickerPurchaseManager;
    FBUserSession *_session;
    FBMMQTTConnectionManager *_connectionManager;
    FBPreviouslySyncedContactsStore *_previouslySyncedContactsStore;
    FBMRequest *_logoutRequest;
    NSUserDefaults *_userDefaults;
    CDUnknownBlockType _logoutFinishedBlock;
    FBMSPDataStore *_spDataStore;
    MNAudioCache *_audioCache;
    id <FBMPaymentsBridge> _paymentsBridge;
    MNNonDiscardingBlobStore *_blobStore;
}

@property(retain, nonatomic) MNNonDiscardingBlobStore *blobStore; // @synthesize blobStore=_blobStore;
@property(retain, nonatomic) id <FBMPaymentsBridge> paymentsBridge; // @synthesize paymentsBridge=_paymentsBridge;
@property(retain, nonatomic) MNAudioCache *audioCache; // @synthesize audioCache=_audioCache;
@property(retain, nonatomic) FBMSPDataStore *spDataStore; // @synthesize spDataStore=_spDataStore;
@property(copy, nonatomic) CDUnknownBlockType logoutFinishedBlock; // @synthesize logoutFinishedBlock=_logoutFinishedBlock;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) FBMRequest *logoutRequest; // @synthesize logoutRequest=_logoutRequest;
@property(retain, nonatomic) FBPreviouslySyncedContactsStore *previouslySyncedContactsStore; // @synthesize previouslySyncedContactsStore=_previouslySyncedContactsStore;
@property(retain, nonatomic) FBMMQTTConnectionManager *connectionManager; // @synthesize connectionManager=_connectionManager;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FBMStickerPurchaseManager *stickerPurchaseManager; // @synthesize stickerPurchaseManager=_stickerPurchaseManager;
@property(retain, nonatomic) FBMImageViewDownloader *imageViewDownloader; // @synthesize imageViewDownloader=_imageViewDownloader;
@property(retain, nonatomic) NSHTTPCookieStorage *httpCookieStorage; // @synthesize httpCookieStorage=_httpCookieStorage;
@property(retain, nonatomic) FBExceptionHandler *exceptionHandler; // @synthesize exceptionHandler=_exceptionHandler;
@property(retain, nonatomic) FBMPushKitRegistrar *pushkitRegistrar; // @synthesize pushkitRegistrar=_pushkitRegistrar;
@property(retain, nonatomic) OrcaPushRegistrar *pushRegistrar; // @synthesize pushRegistrar=_pushRegistrar;
@property(retain, nonatomic) MNUserSettings *userSettings; // @synthesize userSettings=_userSettings;
@property(retain, nonatomic) FBMessagingStore *messagingStore; // @synthesize messagingStore=_messagingStore;
@property(retain, nonatomic) OrcaPersistManager *persistManager; // @synthesize persistManager=_persistManager;
@property(retain, nonatomic) FBMThreadSet *threads; // @synthesize threads=_threads;
@property(retain, nonatomic) FBAPISessionStore *apiSessionStore; // @synthesize apiSessionStore=_apiSessionStore;
@property(retain, nonatomic) FBFacebook *facebook; // @synthesize facebook=_facebook;
@property(retain, nonatomic) id <OrcaLogoutHandler> logoutHandler; // @synthesize logoutHandler=_logoutHandler;
- (void).cxx_destruct;
- (void)requestLoading:(id)arg1;
- (void)_completeLogout;
- (void)logoutIsUserInitiated:(BOOL)arg1 WithFinishedBlock:(CDUnknownBlockType)arg2;
- (id)initWithLogoutHandler:(id)arg1 providerMapData:(id)arg2;
- (void)_tearDown;
- (void)dealloc;
- (id)initWithOrcaLogoutHandler:(id)arg1 facebook:(id)arg2 apiSessionStore:(id)arg3 threads:(id)arg4 persistManager:(id)arg5 messagingStore:(id)arg6 userSettings:(id)arg7 pushRegistrar:(id)arg8 pushkitRegistrar:(id)arg9 exceptionHandler:(id)arg10 httpCookieStorage:(id)arg11 imageViewDownloader:(id)arg12 stickerPurchaseManager:(id)arg13 session:(id)arg14 connectionManager:(id)arg15 previouslySyncedContactsStore:(id)arg16 userDefaults:(id)arg17 spDataStore:(id)arg18 audioCache:(id)arg19 paymentsBridge:(id)arg20 blobStore:(id)arg21;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

