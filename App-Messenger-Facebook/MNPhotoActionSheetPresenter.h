//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "UIActionSheetDelegate.h"

@class MNNavigationCoordinator, NSString, UIActionSheet;

@interface MNPhotoActionSheetPresenter : NSObject <UIActionSheetDelegate, FBClassProvidable>
{
    UIActionSheet *_photoActionActionSheet;
    MNNavigationCoordinator *_navigationCoordinator;
    unsigned int _forwardActionIndex;
    unsigned int _saveActionIndex;
    id <MNPhotoActionSheetPresenterDelegate> _delegate;
}

@property(nonatomic) __weak id <MNPhotoActionSheetPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)_showAlertController:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3;
- (void)showPhotoActionSheetInView:(id)arg1 fromRect:(struct CGRect)arg2;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

