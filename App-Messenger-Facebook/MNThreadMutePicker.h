//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "UIActionSheetDelegate.h"

@class FBUserSession, MNSoundController, NSArray, NSString, UIActionSheet;

@interface MNThreadMutePicker : NSObject <UIActionSheetDelegate, FBClassProvidable>
{
    FBUserSession *_session;
    NSArray *_actionSheetButtons;
    id <MNThreadMutePickerDelegate> _delegate;
    UIActionSheet *_actionSheet;
    MNSoundController *_soundController;
    long long _currentMuteType;
}

@property(retain, nonatomic) MNSoundController *soundController; // @synthesize soundController=_soundController;
@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) long long currentMuteType; // @synthesize currentMuteType=_currentMuteType;
@property(nonatomic) __weak id <MNThreadMutePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_displayStringsForActionSheetButtons:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (BOOL)isVisible;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)showFromRect:(struct CGRect)arg1 inView:(id)arg2 thread:(id)arg3;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
