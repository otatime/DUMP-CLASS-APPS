//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

@interface CBLExperimentGroupsViewController : CBLBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <CBLExperimentGroupsViewControllerDelegate> _delegate;
    NSString *_experimentName;
    NSArray *_groups;
    NSString *_originalGroup;
    NSString *_currentGroup;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *currentGroup; // @synthesize currentGroup=_currentGroup;
@property(retain, nonatomic) NSString *originalGroup; // @synthesize originalGroup=_originalGroup;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(readonly, copy, nonatomic) NSString *experimentName; // @synthesize experimentName=_experimentName;
@property(nonatomic) id <CBLExperimentGroupsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)originalGroupExists;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithExperiment:(id)arg1 andGroup:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

