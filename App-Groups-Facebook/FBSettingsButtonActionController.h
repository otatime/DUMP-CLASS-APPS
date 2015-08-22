//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class FBUserSession, NSString, UIAlertView;

@interface FBSettingsButtonActionController : NSObject <UIAlertViewDelegate>
{
    FBUserSession *_session;
    UIAlertView *_alertView;
}

@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)performActionForButtonWithKey:(id)arg1;
- (void)_resetDiodeSettings;
- (void)_checkForUpdates;
- (void)_failAssertNow;
- (void)_generateExceptionNow;
- (void)_allocateMemory;
- (void)_generateOOM;
- (void)_fbExitCall;
- (void)_crashNow;
- (void)_checkFailAssertNow;
- (void)_checkCrashNow;
- (void)willDisappear;
- (void)dealloc;
- (id)init;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
