//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBReachabilityListener.h"
#import "RCTBridgeModule.h"

@class FBReachabilityAnnouncer, NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface RKReachability : NSObject <FBReachabilityListener, RCTBridgeModule>
{
    FBReachabilityAnnouncer *_reachabilityAnnouncer;
    RCTBridge *_bridge;
}

+ (id)__rct_export__582;
+ (id)__rct_export__511;
+ (id)__rct_export__460;
+ (void)load;
+ (id)moduleName;
@property(nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)reachabilityStateChangedTo:(unsigned int)arg1 from:(unsigned int)arg2;
- (void)getCurrentReachability:(CDUnknownBlockType)arg1 withErrorCallback:(CDUnknownBlockType)arg2;
- (void)stopObserving;
- (void)startObserving;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

