//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CBLRepinToastManager : NSObject
{
}

+ (id)sharedManager;
- (void)showNotification:(id)arg1;
- (void)showToastForPin:(id)arg1 board:(id)arg2;
- (void)showToastForPin:(id)arg1 interest:(id)arg2;
- (void)showPinSuccessNotificationWithPin:(id)arg1 interest:(id)arg2;
- (void)showPinSuccessNotificationWithPin:(id)arg1 board:(id)arg2;

@end

