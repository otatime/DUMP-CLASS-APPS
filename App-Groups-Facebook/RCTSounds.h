//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"

@class NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface RCTSounds : NSObject <RCTBridgeModule>
{
}

+ (id)__rct_export__20713;
+ (id)__rct_export__18512;
+ (id)__rct_export__1709;
+ (id)__rct_export__1636;
+ (id)__rct_export__1335;
+ (id)__rct_export__1204;
+ (id)__rct_export__1123;
+ (id)__rct_export__1012;
+ (void)load;
+ (id)moduleName;
- (void)play:(id)arg1;
- (void)pause:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setVolume:(id)arg1 atPercent:(double)arg2;
- (void)setCurrentTime:(id)arg1 atSeconds:(double)arg2;
- (void)getState:(id)arg1 properties:(struct NSArray *)arg2 callback:(CDUnknownBlockType)arg3;
- (void)deallocLongFormAudio:(id)arg1;
- (void)useLongFormAudio:(id)arg1;
- (void)preloadFiles:(struct NSArray *)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
