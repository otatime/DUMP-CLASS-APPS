//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBContainerViewController.h"

#import "FBClassProvidable.h"
#import "MNDismissableViewController.h"
#import "MNEditGroupPicturePickerDelegate.h"
#import "MNGroupThreadCreatorDelegate.h"
#import "MNPeoplePickerViewControllerDelegate.h"
#import "MNSimpleNewGroupViewDelegate.h"
#import "UITextFieldDelegate.h"

@class FBAnalytics, FBMPinnedGroupsManager, FBUserSession, MNContactSuggestions, MNContactsRetrieverSimpleLogger, MNEditGroupPicturePicker, MNGroupClustersContactSuggestions, MNGroupClustersContactsRetrieverLogger, MNGroupCreationExperimentGating, MNGroupThreadCreator, MNNavigationBarController, MNPeoplePickerViewController, MNProgressBarController, MNSimpleNewGroupView, MNSoundController, NSArray, NSString, UIAlertView, UIBarButtonItem, UIImage;

@interface MNSimpleNewGroupViewController : FBContainerViewController <MNEditGroupPicturePickerDelegate, MNPeoplePickerViewControllerDelegate, MNSimpleNewGroupViewDelegate, MNGroupThreadCreatorDelegate, UITextFieldDelegate, FBClassProvidable, MNDismissableViewController>
{
    FBUserSession *_session;
    FBAnalytics *_analytics;
    MNPeoplePickerViewController *_peoplePickerViewController;
    MNSimpleNewGroupView *_simpleNewGroupView;
    MNGroupThreadCreator *_groupCreator;
    MNEditGroupPicturePicker *_groupPicturePicker;
    FBMPinnedGroupsManager *_pinnedGroupsManager;
    MNSoundController *_soundController;
    id <MNAuthenticationManager> _authManager;
    NSArray *_pickedUsers;
    NSString *_suggestedName;
    unsigned int _entryPoint;
    id <FBProvider> _groupThreadCreatorProvider;
    UIBarButtonItem *_createButtonItem;
    MNNavigationBarController *_navigationBarController;
    MNProgressBarController *_progressBarController;
    id _creatingGroupProgressTitleId;
    id _waitingConnectionProgressTitleId;
    MNContactSuggestions *_topAndFavoritesContactSuggestions;
    MNGroupClustersContactSuggestions *_groupClustersContactSuggestions;
    MNContactsRetrieverSimpleLogger *_contactsRetrieversSimpleLogger;
    MNGroupClustersContactsRetrieverLogger *_groupClustersContactsRetrieverLogger;
    BOOL _alreadyAppearedOnce;
    MNGroupCreationExperimentGating *_groupCreationExperimentGating;
    CDUnknownBlockType _dismissBlock;
    id <MNSimpleNewGroupViewControllerDelegate> _delegate;
    UIAlertView *_alertView;
    NSString *_groupName;
    UIImage *_profileImage;
    NSArray *_memberUserIds;
    unsigned int _numberOfSuggestionSections;
    NSString *_suggestionSections;
}

@property(copy, nonatomic) NSString *suggestionSections; // @synthesize suggestionSections=_suggestionSections;
@property(nonatomic) unsigned int numberOfSuggestionSections; // @synthesize numberOfSuggestionSections=_numberOfSuggestionSections;
@property(copy, nonatomic) NSArray *memberUserIds; // @synthesize memberUserIds=_memberUserIds;
@property(retain, nonatomic) UIImage *profileImage; // @synthesize profileImage=_profileImage;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) __weak id <MNSimpleNewGroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
- (void).cxx_destruct;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)_cancelRequestAndLog;
- (void)didDismiss;
- (BOOL)shouldDismiss;
- (int)dismissButtonPosition;
- (int)dismissButtonItem;
- (void)_updateCreateButtonState;
- (void)_showCreationFailureAlert;
- (void)groupThreadCreator:(id)arg1 didFailWithError:(id)arg2;
- (void)groupThreadCreator:(id)arg1 didFinishWithThread:(id)arg2;
- (void)groupThreadCreator:(id)arg1 didUpdateProgress:(double)arg2;
- (void)groupThreadCreatorWillStartRequest:(id)arg1;
- (void)_textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)_analyticsKeysForSectionTitles:(id)arg1;
- (void)_cancelPendingRequest;
- (void)_updateGrayOutOptionsAnimated:(BOOL)arg1;
- (void)_dismissKeyboard;
- (void)editGroupPicturePickerDidCancel:(id)arg1;
- (void)editGroupPicturePickerDidChooseToRemoveImage:(id)arg1;
- (void)editGroupPicturePicker:(id)arg1 didPickImage:(id)arg2;
- (void)simpleNewGroupViewDidSelectProfileImage:(id)arg1 fromSourceView:(id)arg2;
- (void)peoplePicker:(id)arg1 didFetchSections:(id)arg2;
- (void)peoplePickerTokenFieldWillBecomeResponder:(id)arg1;
- (void)peoplePicker:(id)arg1 didChangePickedUsers:(id)arg2;
- (id)analyticsModuleForPeoplePicker:(id)arg1;
- (void)_updateProgress:(double)arg1;
- (void)_setShowsProgressIndicator:(BOOL)arg1;
- (void)_showNamingErrorAlert;
- (void)_showNotEnoughMembersAlert;
- (BOOL)_hasEnoughMembers;
- (BOOL)_hasValidThreadName;
- (BOOL)_validateInput;
- (void)_didSelectCreate;
- (int)preferredInterfaceOrientationForPresentation;
- (void)_setUpNavigationBar;
- (void)configureWithPickedUsers:(id)arg1 suggestedName:(id)arg2 entryPoint:(unsigned int)arg3;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

