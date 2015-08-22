//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "FBPopoverControllerDelegate.h"

@class FBPopoverController, NSDate, NSIndexPath, NSString, UIDatePicker;

@interface FBComposerPostOptionsPickerViewController : UITableViewController <FBPopoverControllerDelegate>
{
    unsigned int _currentlySelectedOptionType;
    FBPopoverController *_fbpopoverController;
    NSDate *_date;
    UIDatePicker *_datePicker;
    id <FBComposerPostOptionsPickerViewControllerDelegate> _delegate;
    unsigned int _allowedPostContentTypeOptions;
    NSIndexPath *_selectedOptionIndexPath;
}

@property(copy, nonatomic) NSIndexPath *selectedOptionIndexPath; // @synthesize selectedOptionIndexPath=_selectedOptionIndexPath;
@property(nonatomic) unsigned int allowedPostContentTypeOptions; // @synthesize allowedPostContentTypeOptions=_allowedPostContentTypeOptions;
@property(nonatomic) __weak id <FBComposerPostOptionsPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)datePickerWasChanged:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (unsigned int)postOptionsTypeForIndexPath:(id)arg1;
- (id)indexPathForPostOptionsType:(unsigned int)arg1;
- (id)choosersBarScheduleCell;
- (void)didTapDone:(id)arg1;
- (void)didTapCancel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)cellsForCurrentState;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithPostContentType:(unsigned int)arg1 andDate:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (id)init;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
