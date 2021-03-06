//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"

@class ALAssetsLibrary, FBUserSession, NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface RKCameraRollManager : NSObject <RCTBridgeModule>
{
    ALAssetsLibrary *_assetLibrary;
    FBUserSession *_session;
    RCTBridge *_bridge;
}

+ (id)__rct_export__841;
+ (id)__rct_export__450;
+ (void)load;
+ (id)moduleName;
@property(nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)getPhotos:(id)arg1 callback:(CDUnknownBlockType)arg2 errorCallback:(CDUnknownBlockType)arg3;
- (void)callCallback:(CDUnknownBlockType)arg1 withAssets:(id)arg2 hasNextPage:(BOOL)arg3;
- (void)saveImageWithTag:(id)arg1 successCallback:(CDUnknownBlockType)arg2 errorCallback:(CDUnknownBlockType)arg3;
- (id)initWithSession:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

