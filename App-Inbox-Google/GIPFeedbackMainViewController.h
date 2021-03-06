//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class GIPFeedbackCollectedData, NSMutableArray, NSNumber, NSString, UIColor, UILabel, UIPickerView, UITextView;

@interface GIPFeedbackMainViewController : UITableViewController <UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate, UITextViewDelegate>
{
    GIPFeedbackCollectedData *data_;
    UITextView *descriptionTextView_;
    UILabel *ghostText_;
    BOOL shouldSendSystemLogs_;
    BOOL shouldSendScreenshot_;
    BOOL shouldSendUserAccountInfo_;
    BOOL showEmptyDescriptionAlert_;
    UIColor *navigationBarTintColor_;
    UIColor *backgroundColor_;
    BOOL allowMultilineInputInDescription_;
    NSMutableArray *tableSections_;
    id <GIPFeedbackSubmissionDelegate> submissionDelegate_;
    BOOL useStandardNavigationBackButton_;
    UIPickerView *userPicker_;
    UIColor *previousNavigationBarTintColor_;
    NSNumber *modalBottomMargin_;
}

+ (id)controllerWithCollectedData:(id)arg1;
@property(retain, nonatomic) NSNumber *modalBottomMargin; // @synthesize modalBottomMargin=modalBottomMargin_;
@property(nonatomic) id <GIPFeedbackSubmissionDelegate> submissionDelegate; // @synthesize submissionDelegate=submissionDelegate_;
@property(copy, nonatomic) NSMutableArray *tableSections; // @synthesize tableSections=tableSections_;
@property(nonatomic) BOOL showEmptyDescriptionAlert; // @synthesize showEmptyDescriptionAlert=showEmptyDescriptionAlert_;
@property(nonatomic) BOOL useStandardNavigationBackButton; // @synthesize useStandardNavigationBackButton=useStandardNavigationBackButton_;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=backgroundColor_;
@property(retain, nonatomic) UIColor *previousNavigationBarTintColor; // @synthesize previousNavigationBarTintColor=previousNavigationBarTintColor_;
@property(retain, nonatomic) UIColor *navigationBarTintColor; // @synthesize navigationBarTintColor=navigationBarTintColor_;
@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=descriptionTextView_;
@property(retain, nonatomic) UIPickerView *userPicker; // @synthesize userPicker=userPicker_;
@property(readonly, nonatomic) GIPFeedbackCollectedData *data; // @synthesize data=data_;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)willHideKeyboard:(id)arg1;
- (void)willShowKeyboard:(id)arg1;
- (BOOL)isPresentedAsModalForm;
- (id)safePresentingViewController;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)removeKeyboardNotifications;
- (void)addKeyboardNotifications;
- (void)loadView;
- (id)privacySection;
- (id)feedbackSection;
- (void)loadButtons;
- (void)loadToolbar;
- (void)backButtonDidTap:(id)arg1;
- (void)submitButtonDidTap:(id)arg1;
- (void)previewButtonDidTap:(id)arg1;
- (id)sendButton;
- (void)submitFeedback;
- (id)dataWithPrivateInfoStripped;
@property(nonatomic) BOOL sendUserAccountInfo;
@property(nonatomic) BOOL sendSystemData;
@property(nonatomic) BOOL sendScreenshot;
- (void)setReportType:(int)arg1;
- (int)reportType;
- (void)setCrashReportDatas:(id)arg1;
- (id)crashReportDatas;
- (void)setScreenshot:(id)arg1;
- (id)screenshot;
- (void)setObfuscatedGaiaID:(id)arg1;
- (id)obfuscatedGaiaID;
- (void)setCategoryTag:(id)arg1;
- (id)categoryTag;
- (void)displayPrivacyAlert;
- (void)dealloc;
- (id)initWithCollectedData:(id)arg1 allowMultilineInputInDescription:(BOOL)arg2;
- (id)initWithCollectedData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

