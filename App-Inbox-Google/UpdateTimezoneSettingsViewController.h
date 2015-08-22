//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class GBTDropShadow, NSArray, UIImageView;

@interface UpdateTimezoneSettingsViewController : UITableViewController
{
    UIImageView *checkmark_;
    unsigned int updateTimezone_;
    GBTDropShadow *dropShadow_;
    NSArray *rowTitles_;
    id <UpdateTimezoneSettingsViewControllerDelegate> delegate;
}

@property(nonatomic) __weak id <UpdateTimezoneSettingsViewControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)backButtonTapped:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)updateTimezoneSapiEnumForLocalEnum:(unsigned int)arg1;
- (unsigned int)updateTimezoneForSapiEnum:(id)arg1;
- (id)initWithTimezoneOption:(id)arg1;

@end
