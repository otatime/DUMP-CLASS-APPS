//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol MNComposerKeyboardPresentingTrayDelegate <NSObject>
- (void)composerKeyboardPresentingTrayWillDismissKeyboard:(id <MNComposerKeyboardPresentingTray>)arg1 withKeyboardDismissalBlock:(void (^)(void))arg2;
- (void)composerKeyboardPresentingTrayWillPresentKeyboard:(id <MNComposerKeyboardPresentingTray>)arg1 withKeyboardPresentationBlock:(void (^)(void))arg2;
@end

