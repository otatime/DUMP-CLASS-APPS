//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBCLEventSource.h"

@class UIApplication;

@interface FBCLApplicationEventSource : FBCLEventSource
{
    BOOL _started;
    UIApplication *_application;
}

- (void).cxx_destruct;
- (void)stop;
- (void)_triggerDebugNotification;
- (void)_applicationWillTerminateNotification;
- (void)_applicationWillEnterForegroundNotificationIdle;
- (void)_applicationWillEnterForegroundNotification;
- (void)_applicationDidEnterBackgroundNotification;
- (void)start;
- (void)dealloc;
- (id)initWithEventChannel:(id)arg1;
- (id)initWithEventChannel:(id)arg1 application:(id)arg2;

@end
