//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "UIActionSheetDelegate.h"

@class FBMThreadSet, NSMutableArray, NSString, UIActionSheet;

@interface FBMCannedMessagePicker : NSObject <UIActionSheetDelegate, FBClassProvidable>
{
    FBMThreadSet *_threadSet;
    id <FBMCannedMessagePickerDelegate> _delegate;
    UIActionSheet *_cannedMessagePickerSheet;
    NSMutableArray *_actionSheetButtons;
}

@property(retain, nonatomic) NSMutableArray *actionSheetButtons; // @synthesize actionSheetButtons=_actionSheetButtons;
@property(retain, nonatomic) UIActionSheet *cannedMessagePickerSheet; // @synthesize cannedMessagePickerSheet=_cannedMessagePickerSheet;
@property(nonatomic) __weak id <FBMCannedMessagePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)dismissIfVisible;
- (void)showInView:(id)arg1 fromSourceView:(id)arg2;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

