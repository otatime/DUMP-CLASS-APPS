//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface UIViewController (FBKeyboardNotifications)
- (BOOL)fb_isApplicationPresentingModally:(id)arg1;
- (BOOL)_fb_isModal:(id)arg1;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)fb_keyboardWillHide:(id)arg1;
- (void)fb_keyboardWillShow:(id)arg1;
- (void)fb_unobserveKeyboardNotifications;
- (void)fb_observeKeyboardNotifications;
@end

