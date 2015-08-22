//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAvatarPickerController.h"

#import "FBComposerCompositionStateChangedListener.h"
#import "FBComposerPostChannelContributorsToggleControllerDelegate.h"

@class FBComposerPostChannelContributorsToggleController, FBComposerTaggingLogger, FBFetchedWithAdditionalSuggestionsDataSource, NSDictionary, NSMutableDictionary, NSString;

@interface FBComposerPhotosAvatarPickerController : FBAvatarPickerController <FBComposerPostChannelContributorsToggleControllerDelegate, FBComposerCompositionStateChangedListener>
{
    FBComposerTaggingLogger *_logger;
    NSMutableDictionary *_editCountsForLogging;
    FBComposerPostChannelContributorsToggleController *_contributorsToggleController;
    BOOL _isContributorsToggleOn;
    BOOL _isContributorsToggleAllowed;
    BOOL _loggedOnLoad;
    BOOL _useSkipButton;
    BOOL _delegateResponseTowillShowCellatIndexPath;
    NSDictionary *_updatedTags;
    NSDictionary *_originalTags;
}

+ (id)composerPhotosAvatarPickerControllerWithSession:(id)arg1 taggableCollection:(id)arg2 compositionID:(id)arg3 initialSelection:(id)arg4 showSearchField:(BOOL)arg5 showSuggestedFriends:(BOOL)arg6 showAllFriends:(BOOL)arg7 photoTags:(id)arg8;
@property(copy, nonatomic) NSDictionary *originalTags; // @synthesize originalTags=_originalTags;
@property(copy, nonatomic) NSDictionary *updatedTags; // @synthesize updatedTags=_updatedTags;
- (void).cxx_destruct;
- (void)_updateContributorsToggleView;
- (id)_extrasForLoggingPhotoTags:(id)arg1;
- (id)_extrasForLoggingSelectionAndRanking;
- (void)_logEvent:(id)arg1 forPhotoTags:(id)arg2;
- (void)_removePerson:(id)arg1 fromSelectedAvatars:(id)arg2;
- (void)_updateDoneButton;
- (void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2;
- (void)didToggleChangeAllowedState:(BOOL)arg1;
- (void)didToggleChangeStateWithToggleOn:(BOOL)arg1;
- (id)analyticsModule;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updatePhotoTagsFromSelectedAvatars;
- (void)didTapDone;
- (void)didTapCancel;
- (void)viewDidLoad;
- (void)logSectionLoaded:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (void)didUnselectAvatar:(id)arg1 atIndexPath:(id)arg2;
- (void)didSelectAvatar:(id)arg1 atIndexPath:(id)arg2;
- (void)_commonInitWithPhotoTags:(id)arg1 andLogger:(id)arg2 andTitle:(id)arg3;
@property(nonatomic) __weak id <FBComposerPhotosAvatarPickerControllerDelegate> delegate; // @dynamic delegate;
- (id)initWithSession:(id)arg1 logger:(id)arg2 photoTags:(id)arg3 title:(id)arg4 useSkipButton:(BOOL)arg5 configuration:(id)arg6;
- (id)initWithSession:(id)arg1 logger:(id)arg2 photoTags:(id)arg3 configuration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) FBFetchedWithAdditionalSuggestionsDataSource *fetchedResultsDataSource; // @dynamic fetchedResultsDataSource;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
