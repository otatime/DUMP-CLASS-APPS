//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActionSheet.h"

#import "UIActionSheetDelegate.h"

@class NSString;

@interface PPActionSheet : UIActionSheet <UIActionSheetDelegate>
{
    CDUnknownBlockType _willPresentActionSheetBlock;
    CDUnknownBlockType _didPresentActionSheetBlock;
    CDUnknownBlockType _clickedButtonAtIndexBlock;
    CDUnknownBlockType _willDismissWithButtonIndexBlock;
    CDUnknownBlockType _didDismissWithButtonIndexBlock;
    CDUnknownBlockType _cancelBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType didDismissWithButtonIndexBlock; // @synthesize didDismissWithButtonIndexBlock=_didDismissWithButtonIndexBlock;
@property(copy, nonatomic) CDUnknownBlockType willDismissWithButtonIndexBlock; // @synthesize willDismissWithButtonIndexBlock=_willDismissWithButtonIndexBlock;
@property(copy, nonatomic) CDUnknownBlockType clickedButtonAtIndexBlock; // @synthesize clickedButtonAtIndexBlock=_clickedButtonAtIndexBlock;
@property(copy, nonatomic) CDUnknownBlockType didPresentActionSheetBlock; // @synthesize didPresentActionSheetBlock=_didPresentActionSheetBlock;
@property(copy, nonatomic) CDUnknownBlockType willPresentActionSheetBlock; // @synthesize willPresentActionSheetBlock=_willPresentActionSheetBlock;
- (void).cxx_destruct;
- (void)didPresentActionSheet:(id)arg1;
- (void)willPresentActionSheet:(id)arg1;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)initWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

