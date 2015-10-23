//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "OAuthDelegate.h"
#import "PhotoEditProtocol.h"
#import "RestaurantReviewProtocol.h"
#import "TextInputDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class DraftReview, NSArray, NSMutableArray, NSString, NSTimer, Property, RatingModel, Restaurant, SSTextView, UIButton, UIImageView, UIScrollView, UISegmentedControl, UITextField, UIView;

@interface ReviewPostViewController : BaseViewController <UIAlertViewDelegate, RestaurantReviewProtocol, UITextViewDelegate, UITextFieldDelegate, TextInputDelegate, OAuthDelegate, PhotoEditProtocol>
{
    BOOL shouldCheckSavedReview;
    NSTimer *saveTimer;
    BOOL showingTextInput;
    unsigned int deletingPhotoIndex;
    BOOL autoShowFullScreenPhoto;
    BOOL shouldAutoSaveReview;
    UIScrollView *contentScrollView;
    UIScrollView *reviewPhotoScrollView;
    UIButton *restaurantSelectButton;
    UIView *reviewContainer;
    UITextField *reviewTitleTextField;
    UIImageView *redLineSeparator;
    SSTextView *reviewDetailTextField;
    UIView *accessoryView;
    UIButton *ratingAddButton;
    UISegmentedControl *moreReviewOption;
    UIButton *facebookSyncButton;
    UIView *syndicationContainer;
    UIButton *cancelButton;
    UIButton *postButton;
    NSMutableArray *reviewPhotos;
    Property *NoOfPersonProp;
    Property *expenseProp;
    Property *comebackProp;
    Restaurant *reviewRestaurant;
    RatingModel *reviewRatingModel;
    NSString *reviewTitle;
    NSString *reviewText;
    DraftReview *savedDraftReview;
    NSArray *pickerValues;
    int _personCountIndex;
    int _expenseIndex;
    int _comebackIndex;
}

@property(nonatomic) int comebackIndex; // @synthesize comebackIndex=_comebackIndex;
@property(nonatomic) int expenseIndex; // @synthesize expenseIndex=_expenseIndex;
@property(nonatomic) int personCountIndex; // @synthesize personCountIndex=_personCountIndex;
@property(retain, nonatomic) NSArray *pickerValues; // @synthesize pickerValues;
@property(retain, nonatomic) DraftReview *savedDraftReview; // @synthesize savedDraftReview;
@property(retain, nonatomic) NSTimer *saveTimer; // @synthesize saveTimer;
@property(copy, nonatomic) NSString *reviewText; // @synthesize reviewText;
@property(copy, nonatomic) NSString *reviewTitle; // @synthesize reviewTitle;
@property(retain, nonatomic) RatingModel *reviewRatingModel; // @synthesize reviewRatingModel;
@property(retain, nonatomic) Restaurant *reviewRestaurant; // @synthesize reviewRestaurant;
@property(retain, nonatomic) Property *comebackProp; // @synthesize comebackProp;
@property(retain, nonatomic) Property *expenseProp; // @synthesize expenseProp;
@property(retain, nonatomic) Property *NoOfPersonProp; // @synthesize NoOfPersonProp;
@property(retain, nonatomic) NSMutableArray *reviewPhotos; // @synthesize reviewPhotos;
@property(nonatomic) __weak UIButton *postButton; // @synthesize postButton;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton;
@property(nonatomic) __weak UIView *syndicationContainer; // @synthesize syndicationContainer;
@property(nonatomic) __weak UIButton *facebookSyncButton; // @synthesize facebookSyncButton;
@property(nonatomic) __weak UISegmentedControl *moreReviewOption; // @synthesize moreReviewOption;
@property(nonatomic) __weak UIButton *ratingAddButton; // @synthesize ratingAddButton;
@property(nonatomic) __weak UIView *accessoryView; // @synthesize accessoryView;
@property(nonatomic) __weak SSTextView *reviewDetailTextField; // @synthesize reviewDetailTextField;
@property(nonatomic) __weak UIImageView *redLineSeparator; // @synthesize redLineSeparator;
@property(nonatomic) __weak UITextField *reviewTitleTextField; // @synthesize reviewTitleTextField;
@property(nonatomic) __weak UIView *reviewContainer; // @synthesize reviewContainer;
@property(nonatomic) __weak UIButton *restaurantSelectButton; // @synthesize restaurantSelectButton;
@property(nonatomic) __weak UIScrollView *reviewPhotoScrollView; // @synthesize reviewPhotoScrollView;
@property(nonatomic) __weak UIScrollView *contentScrollView; // @synthesize contentScrollView;
- (void).cxx_destruct;
- (void)objectImageDownloadDidFinish;
- (void)didFinishEditingPhoto;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (void)didCancelSelectPickerWithTag:(int)arg1;
- (void)didFinishSelectPickerWithItemAtIndex:(int)arg1 withTag:(int)arg2;
- (void)didTouchMoreReviewOption:(id)arg1;
- (void)didReceivedUserProfileChangedEvent:(id)arg1;
- (void)OAuthProcessDidFinishForUser:(id)arg1;
- (void)connectUserFacebookAccount;
- (void)didTouchSyndicationButton:(id)arg1;
- (void)didCancelTextInput:(id)arg1;
- (void)viewController:(id)arg1 didFinishInputWithText:(id)arg2;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)loadSavedDraftReview;
- (void)checkSavedDraftReviewForRestaurantId:(id)arg1;
- (void)checkAndSaveDraftReview:(id)arg1;
- (void)didSuggestedNewRestaurant:(id)arg1;
- (void)doPostRestaurantReviewForUser;
- (void)didTouchReviewPostButton:(id)arg1;
- (void)didTouchCancelPostReviewButton:(id)arg1;
- (void)resignTextViewKeyboard:(id)arg1;
- (void)resignTextFieldKeyboard:(id)arg1;
- (void)showFullScreenTagScreenForPhotoIndex:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showFullScreenTagScreenForPhotoIndex:(int)arg1;
- (void)didTouchReviewPhotoButton:(id)arg1;
- (void)didSelectRating:(id)arg1;
- (void)didSelectRestaurant:(id)arg1;
- (void)didTouchSelectReviewRestaurant:(id)arg1;
- (void)saveCurrentPhotoList;
- (void)userDidSelectImages:(id)arg1;
- (void)userDidSelectImage:(id)arg1;
- (int)maximumSelectPhotos;
- (void)didTouchTakeMorePicture:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)doDeleteReviewPhotoAtIndex:(int)arg1;
- (void)didTouchReviewPhotoDeleteButton:(id)arg1;
- (void)didTouchAddRatingButton:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (id)getDetailTextInputHeader;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)setFacebookSyndicationButton;
- (void)setSocialSyndicationContainer;
- (void)setRestaurantRatingFrame;
- (void)setSelectRestaurantFrame;
- (id)addHelperLabelForReviewPhotoFrame;
- (void)setReviewPhotoFrame;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)addDoneButtonForTextField:(id)arg1;
- (void)trackPageView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setResReviewRatingModel:(id)arg1;
- (void)setReviewRestaurantModel:(id)arg1;
- (void)addReviewUploadPhotos:(id)arg1;
- (void)addReviewUploadPhoto:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
