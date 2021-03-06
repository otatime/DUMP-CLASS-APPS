//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "FBFormElementDelegate.h"

@class FBForm, FBFormElementViewRecycler, NSString, UINavigationController;

@interface FBFormViewController : UITableViewController <FBFormElementDelegate>
{
    FBFormElementViewRecycler *_recycler;
    FBForm *_form;
}

@property(readonly, nonatomic) FBForm *form; // @synthesize form=_form;
- (void).cxx_destruct;
- (id)formSectionWithSection:(int)arg1;
- (id)_elementAtIndexPath:(id)arg1;
- (void)didUpdateFormElement:(id)arg1;
@property(readonly, nonatomic) UINavigationController *navController;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)indexPathForFormElement:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

