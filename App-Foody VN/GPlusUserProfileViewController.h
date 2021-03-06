//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "CollectionDetailViewControllerDelegate.h"
#import "MKMapViewDelegate.h"
#import "MultipleSelectListDelegate.h"
#import "TextInputDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "UserCheckinViewCell1Delegate.h"
#import "UserReviewViewCell1Delegate.h"

@class CityModel, GradientView, MKMapView, NSArray, NSString, Property, UIScrollView, UITableView, UIView, User;

@interface GPlusUserProfileViewController : BaseViewController <CollectionDetailViewControllerDelegate, MultipleSelectListDelegate, TextInputDelegate, UIPickerViewDataSource, UIPickerViewDelegate, UserReviewViewCell1Delegate, UserCheckinViewCell1Delegate, MKMapViewDelegate>
{
    unsigned int loadingSesssion;
    int selectedHeaderMenuIndex;
    int startHeaderMenuIndex;
    unsigned int reviewViewType;
    unsigned int checkinViewType;
    unsigned int photoViewType;
    unsigned int friendType;
    BOOL isLoadingContent;
    BOOL isChangeUserProfile;
    NSString *selectedUserFollowId;
    BOOL isFollow;
    BOOL isRefreshContent;
    GradientView *gradientView;
    BOOL _showFavoriteCollection;
    NSString *userId;
    User *userProfile;
    NSArray *headerMenuList;
    Property *selectedHeaderMenu;
    UIScrollView *headerMenuScrollView;
    id <ListLoaderProtocol> dataListLoader;
    NSArray *resultList;
    MKMapView *mapView;
    UITableView *_contentTableView;
    unsigned int _followType;
    UIView *_headerView;
    CityModel *_selectedCityFilter;
    UIView *_pickerContainer;
    NSArray *_genderList;
    NSString *_birthday;
    NSArray *_marriageList;
    Property *_genderProp;
    Property *_maritalProp;
}

@property(retain, nonatomic) Property *maritalProp; // @synthesize maritalProp=_maritalProp;
@property(retain, nonatomic) Property *genderProp; // @synthesize genderProp=_genderProp;
@property(retain, nonatomic) NSArray *marriageList; // @synthesize marriageList=_marriageList;
@property(copy, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSArray *genderList; // @synthesize genderList=_genderList;
@property(retain, nonatomic) UIView *pickerContainer; // @synthesize pickerContainer=_pickerContainer;
@property(retain, nonatomic) CityModel *selectedCityFilter; // @synthesize selectedCityFilter=_selectedCityFilter;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) unsigned int followType; // @synthesize followType=_followType;
@property(nonatomic) BOOL showFavoriteCollection; // @synthesize showFavoriteCollection=_showFavoriteCollection;
@property(nonatomic) __weak UITableView *contentTableView; // @synthesize contentTableView=_contentTableView;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView;
@property(retain, nonatomic) NSArray *resultList; // @synthesize resultList;
@property(retain, nonatomic) id <ListLoaderProtocol> dataListLoader; // @synthesize dataListLoader;
@property(retain, nonatomic) UIScrollView *headerMenuScrollView; // @synthesize headerMenuScrollView;
@property(retain, nonatomic) Property *selectedHeaderMenu; // @synthesize selectedHeaderMenu;
@property(retain, nonatomic) NSArray *headerMenuList; // @synthesize headerMenuList;
@property(retain, nonatomic) User *userProfile; // @synthesize userProfile;
@property(copy, nonatomic) NSString *userId; // @synthesize userId;
- (void).cxx_destruct;
- (void)UserCheckinViewCell1:(id)arg1 clickShowAllPhoto:(id)arg2;
- (void)UserReviewViewCell1:(id)arg1 clickShowAllPhoto:(id)arg2;
- (void)statusBarHit:(id)arg1;
- (void)refreshFollowTabWithCurrentUser:(id)arg1;
- (void)userFollowWithType:(unsigned int)arg1 userId:(id)arg2;
- (void)userBeginFollow;
- (void)userBeginUnfollow;
- (void)didTouchUserFollowBtn:(id)arg1;
- (void)didTouchUserUnfollowBtn:(id)arg1;
- (CDStruct_feeb6407)regionFromLocations;
- (void)showRestaurantDetailForId:(id)arg1;
- (void)didTouchShowRestaurantButton:(id)arg1;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)updateCurrentRegionWithRestaurantList:(id)arg1 more:(BOOL)arg2;
- (void)clearMapViewAnnotation:(id)arg1;
- (CDStruct_feeb6407)defaultRegionForLocation:(id)arg1;
- (void)showMapLocation:(id)arg1;
- (void)userDidConfirmMakeFriend:(id)arg1;
- (void)didTouchConfirmFriendButton:(id)arg1;
- (void)didTouchCancelSelectPicker:(id)arg1;
- (void)didTouchDoneSelectPicker:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (float)pickerView:(id)arg1 widthForComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)showPickerSelectorWithTag:(int)arg1 selectedIndex:(int)arg2;
- (void)userProfileDidChanged;
- (void)changeUserInfoWithInfo:(id)arg1;
- (void)didCancelTextInput:(id)arg1;
- (void)viewController:(id)arg1 didFinishInputWithText:(id)arg2;
- (void)didDoneMultipleSelectList:(id)arg1;
- (void)didCancelMultipleSelectList;
- (void)didTouchChangeCityButton:(id)arg1;
- (void)CollectionDetailViewControllerDidDelete:(id)arg1 withList:(id)arg2;
- (void)changeCoverandUserImage;
- (void)doTapChangeCoverImage:(id)arg1;
- (void)didTouchReviewRatingLabel:(id)arg1;
- (void)didTouchResHeaderView:(id)arg1;
- (void)didTouchUserThumbnail:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)refreshContentForTableView;
- (void)loadMoreContentForTableView;
- (id)userInfoCellForIndexPath:(id)arg1;
- (id)userFavReviewCellForIndexPath:(id)arg1;
- (id)userFriendCellForIndexPath:(id)arg1;
- (id)userListCellForIndexPath:(id)arg1;
- (id)userPhotoCellForIndexPath:(id)arg1;
- (id)userCheckInCellForIndexPath:(id)arg1;
- (id)userPlaceCellForIndexPath:(id)arg1;
- (id)userReviewCellForIndexPath:(id)arg1;
- (void)didTouchEditProfile:(id)arg1;
- (void)didTouchUserPhotoButton:(id)arg1;
- (void)didTouchPhotoListButton:(id)arg1;
- (void)didTouchPhotoGroupButton:(id)arg1;
- (void)didTouchCheckinLocationButton:(id)arg1;
- (void)didTouchchangeUserButtonType:(id)arg1;
- (void)didTouchCheckinListButton:(id)arg1;
- (void)didTouchReviewLocationButton:(id)arg1;
- (void)didTouchReviewListButton:(id)arg1;
- (void)didTouchMenuButton:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setMenuButtonSelectedWithTag:(int)arg1 forHeaderScrollView:(id)arg2;
- (void)resetMenuButtonForScrollView:(id)arg1;
- (void)didReceivedRestaurantUpdateEvent:(id)arg1;
- (void)didReceivedUserProfileChangedEvent:(id)arg1;
- (void)userDidTouchFollowButton;
- (void)userDidTouchMakeFriendButton;
- (void)didTouchFollowBtn:(id)arg1;
- (void)didTouchUnfollowBtn:(id)arg1;
- (void)didTouchSettingUserProfile:(id)arg1;
- (void)didTouchMakeFriendButton:(id)arg1;
- (void)didTouchViewLevelUser:(id)arg1;
- (void)objectImageDownloadDidFinish;
- (void)objectImageDownloadDidPartialFinish;
- (void)loadMoreTableDataForCurrentMenu;
- (void)loadTableDataForCurrentMenu:(BOOL)arg1;
- (void)loadDataForScreen:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)didTapUserPhoto:(id)arg1;
- (void)setFollowButtonStatus;
- (void)setFriendButtonStatus;
- (void)initilizeHeaderView;
- (void)initializeUIControls:(BOOL)arg1;
- (void)trackPageView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

