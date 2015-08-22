//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBCrashCounter, FBExceptionHandler, FBPreferences;

@interface FBApplicationTerminationTracker : NSObject
{
    double _minStartupDuration;
    FBCrashCounter *_crashCounter;
    FBExceptionHandler *_exceptionHandler;
    FBPreferences *_preferences;
}

- (void).cxx_destruct;
- (void)_willTerminate;
- (void)_didEnterBackground;
- (void)_willEnterForeground;
- (void)_setApplicationState:(int)arg1;
- (void)startupCompleted;
- (void)startupBegan;
- (void)dealloc;
- (id)initWithMinStartupDuration:(double)arg1 exceptionHandler:(id)arg2 preferences:(id)arg3;
- (id)initWithMinStartupDuration:(double)arg1 exceptionHandler:(id)arg2;
- (id)init;

@end
