//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLCollectionViewController.h"

#import "CBLBlockUserViewControllerDelegate.h"
#import "CBLDraggableCollectionViewDataSource.h"
#import "CBLEditProfileViewControllerDelegate.h"
#import "CBLPresentedViewControllerDelegate.h"
#import "CBLProfileHeaderDelegate.h"
#import "CBLProfileStatsTitleViewDelegate.h"
#import "CBLSearchControllerManagerDelegate.h"
#import "CBLSettingsViewControllerDelegate.h"
#import "CBLShareExtensionEducationModalViewDelegate.h"
#import "CBLShareObjectActivityViewDelegate.h"
#import "CBLSharePinViewControllerDelegate.h"
#import "CBLViewControllerPresenter.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class CBLDraggableCollectionViewHelper, CBLExperience, CBLProfileHeader, CBLSearchControllerManager, CBLTrayHeaderView, CBLUser, NSIndexPath, NSMutableArray, NSString, NSTimer, NSUserActivity, UIPopoverController;

@interface CBLProfileViewController : CBLCollectionViewController <CBLEditProfileViewControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, CBLSettingsViewControllerDelegate, CBLPresentedViewControllerDelegate, CBLProfileHeaderDelegate, CBLBlockUserViewControllerDelegate, UIActionSheetDelegate, CBLProfileStatsTitleViewDelegate, CBLDraggableCollectionViewDataSource, CBLSearchControllerManagerDelegate, CBLShareObjectActivityViewDelegate, CBLSharePinViewControllerDelegate, CBLShareExtensionEducationModalViewDelegate, CBLViewControllerPresenter>
{
    BOOL _viewActive;
    BOOL _boardsFeedWillLoad;
    CBLUser *_user;
    CBLProfileHeader *_profileHeaderView;
    CBLTrayHeaderView *_secretBoardsHeader;
    UIPopoverController *_editPicturePopover;
    NSMutableArray *_orderedBoards;
    NSIndexPath *_hiddenCellIndex;
    CBLDraggableCollectionViewHelper *_draggableHelper;
    CBLSearchControllerManager *_searchControllerManager;
    CBLExperience *_experience;
    NSTimer *_takeoverCardTimer;
    NSUserActivity *_profileActivity;
}

+ (void)presentHost:(id)arg1 withPath:(id)arg2 withParameters:(id)arg3 usingPresenterDelegate:(id)arg4 deferingToControllerDelegate:(id)arg5;
@property(retain, nonatomic) NSUserActivity *profileActivity; // @synthesize profileActivity=_profileActivity;
@property(nonatomic) BOOL boardsFeedWillLoad; // @synthesize boardsFeedWillLoad=_boardsFeedWillLoad;
@property(nonatomic) BOOL viewActive; // @synthesize viewActive=_viewActive;
@property(retain, nonatomic) NSTimer *takeoverCardTimer; // @synthesize takeoverCardTimer=_takeoverCardTimer;
@property(retain, nonatomic) CBLExperience *experience; // @synthesize experience=_experience;
@property(retain, nonatomic) CBLSearchControllerManager *searchControllerManager; // @synthesize searchControllerManager=_searchControllerManager;
@property(retain, nonatomic) CBLDraggableCollectionViewHelper *draggableHelper; // @synthesize draggableHelper=_draggableHelper;
@property(retain, nonatomic) NSIndexPath *hiddenCellIndex; // @synthesize hiddenCellIndex=_hiddenCellIndex;
@property(retain, nonatomic) NSMutableArray *orderedBoards; // @synthesize orderedBoards=_orderedBoards;
@property(retain, nonatomic) UIPopoverController *editPicturePopover; // @synthesize editPicturePopover=_editPicturePopover;
@property(retain, nonatomic) CBLTrayHeaderView *secretBoardsHeader; // @synthesize secretBoardsHeader=_secretBoardsHeader;
@property(retain, nonatomic) CBLProfileHeader *profileHeaderView; // @synthesize profileHeaderView=_profileHeaderView;
@property(retain, nonatomic) CBLUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)shareExtensionModalViewDidAnimateOut:(id)arg1;
- (void)CBLSharePinActivitiesViewDidTapCopyLink:(id)arg1;
- (void)CBLSharePinActivitiesViewDidTapSaveImage:(id)arg1;
- (void)showActivitySheet;
- (void)CBLSharePinActivitiesViewDidTapOther:(id)arg1;
- (void)CBLSharePinActivitiesViewDidTapSMS:(id)arg1;
- (void)CBLSharePinActivitiesViewDidTapEmail:(id)arg1;
- (void)CBLSharePinActivitiesViewDidTapLine:(id)arg1;
- (void)CBLSharePinActivitiesViewDidTapFBMessenger:(id)arg1;
- (void)CBLSharePinActivitiesViewDidTapWhatsApp:(id)arg1;
- (void)CBLSharePinActivitiesViewDidTapTwitter:(id)arg1;
- (void)CBLSharePinActivitiesViewDidTapFacebook:(id)arg1;
- (void)CBLSharePinActivitiesViewDidTapClose:(id)arg1;
- (void)CBLSharePinViewControllerDidTapClose:(id)arg1;
- (id)profileFlagItemWithPosition:(int)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)profileSendItemWithPosition:(int)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)profileCreateItemWithPosition:(int)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)profileSettingButtonItemWithPosition:(int)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)profileSearchButtonItemWithPosition:(int)arg1 target:(id)arg2 action:(SEL)arg3;
- (BOOL)navigationBarHasBottomSeparator;
- (id)barTintColor;
- (void)remoteModelCollectionDidUpdateContent:(id)arg1;
- (void)cblViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)cblTraitCollectionDidChange:(id)arg1;
- (BOOL)isCreateCellAtIndexPath:(id)arg1;
- (id)localLayoutAttributes;
- (void)sendButtonPressed;
- (void)createButtonPressed:(id)arg1;
- (void)accountButtonPressed;
- (void)unblockButtonPressed;
- (void)followUnfollowButtonPressed:(id)arg1;
- (void)didTapOnInviteFriends:(id)arg1;
- (struct CGRect)profileHeaderFrame;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)createNavigationLeftBarButtonItems;
- (id)createNavigationRightBarButtonItems;
- (void)setNavigationButtons;
- (void)setHeaderView:(id)arg1;
- (void)showsNavigationBarBottomSeparator:(BOOL)arg1;
- (BOOL)contentAvailable;
- (void)presentEditPictureImagePickerWithSource:(int)arg1 delegate:(id)arg2 frame:(struct CGRect)arg3 view:(id)arg4;
- (void)CBLSettingsViewControllerDidEditProfilePhoto:(id)arg1;
- (void)CBLSettingsViewControllerDidClose:(id)arg1 loadUserDetail:(BOOL)arg2;
- (void)blockUserViewControllerDidFinish:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)showShareExtensionPartialTakeoverEducation:(id)arg1;
- (void)showHomeFeedHelper;
- (void)showHomeFeedHelperIfNeeded;
- (void)handleNonUserGuideExperience:(id)arg1;
- (int)displayTypeForUserGuide:(int)arg1;
- (int)experiencePlacement;
- (id)userGuideContext;
- (BOOL)experienceEnabled;
- (void)editProfileIsUploading:(id)arg1;
- (void)editProfileWantsToEditPicture:(id)arg1;
- (void)editProfileClosed:(id)arg1;
- (void)presentedViewControllerShouldBeDismissed:(id)arg1;
- (void)collectionView:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)backgroundColorForSection:(int)arg1;
- (struct UIEdgeInsets)collectionViewLayout:(id)arg1 insetsForSection:(int)arg2;
- (id)collectionViewLayout:(id)arg1 headerViewForSection:(int)arg2;
- (struct CGSize)collectionViewLayout:(id)arg1 sizeForHeaderInSection:(int)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (unsigned int)secretBoardCount;
- (unsigned int)publicBoardCount;
- (int)adjustedIndexWithPath:(id)arg1;
- (id)modelAtIndexPath:(id)arg1;
- (id)displayOptionsForBoardAtIndex:(id)arg1;
- (void)boardCellEditPressed:(id)arg1;
- (void)statsTitleViewTitleTapped;
- (void)statsTitleViewProfileImageTapped;
- (void)statsBackButtonTapped:(id)arg1;
- (void)searchControllerManagerDidCancel:(id)arg1;
- (void)CBLSearchControllerManagerDidEndEditing:(id)arg1;
- (void)findYourPinsButtonTapped;
- (void)profileHeaderProfileImageTapped:(id)arg1;
- (void)profileHeaderShopButtonTapped;
- (void)profileHeaderImpressumButtonTapped;
- (void)profileHeaderWebsiteTapped;
- (void)configureController:(id)arg1 withType:(int)arg2;
- (void)profileHeaderFlagButtonTapped;
- (void)profileHeaderFollowingTapped;
- (void)profileHeaderFollowersTapped;
- (void)profileHeaderLikesTapped;
- (void)profileHeaderPinsTapped;
- (void)profileHeaderEditProfileTapped;
- (void)renderContentsForUser;
- (void)loadContent;
- (void)loadUserDetails;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)buildNavigationTitle;
- (id)initWithUser:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

