//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTViewManager.h"

#import "RCTInvalidating.h"

@class NSString, RCTTouchHandler, RKModalFullscreenHost;

@interface RKModalFullscreenViewManager : RCTViewManager <RCTInvalidating>
{
    RKModalFullscreenHost *_modalHost;
    RCTTouchHandler *_touchHandler;
}

+ (id)__rct_export__641;
+ (id)__rct_export__590;
+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) RKModalFullscreenHost *modalHost; // @synthesize modalHost=_modalHost;
- (void).cxx_destruct;
- (void)close;
- (void)open;
- (void)setBridge:(id)arg1;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)invalidate;
- (id)view;
- (id)initWithModalHost:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
