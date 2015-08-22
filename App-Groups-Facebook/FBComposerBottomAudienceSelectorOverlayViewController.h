//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FBComposerPrivacySetting, FBImageDownloader, FBSoundController, FBTypedNSArrayOfFBComposerPrivacySetting, NSString, UIImageView, UITableViewController, UIView;

@interface FBComposerBottomAudienceSelectorOverlayViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UIView *_containerView;
    UIImageView *_backgroundView;
    UIView *_highlightView;
    UITableViewController *_tableViewController;
    FBImageDownloader *_imageDownloader;
    FBSoundController *_soundController;
    FBTypedNSArrayOfFBComposerPrivacySetting *_availablePrivacySettings;
    FBComposerPrivacySetting *_selectedPrivacySetting;
    struct CGRect _highlightViewFrame;
    id <FBComposerBottomAudienceSelectorOverlayViewControllerDelegate> _delegate;
    int _selectedIndex;
}

@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <FBComposerBottomAudienceSelectorOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)hideAudienceSelectorOverlayAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAudienceSelectorContentOffset:(float)arg1;
- (void)showAudienceSelectorOverlayAnimated:(BOOL)arg1;
- (void)_hideOverlayWindow;
- (void)_updateSelectedIndex;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (id)initWithImageDownloader:(id)arg1 soundController:(id)arg2 availablePrivacySettings:(id)arg3 selectedPrivacySetting:(id)arg4 highlightViewFrame:(struct CGRect)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
