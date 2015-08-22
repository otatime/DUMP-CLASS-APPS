//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewController.h"

#import "CBLRemoteModelCollectionDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CBLRemoteModelCollection, NSString, UIImageView, UITableView;

@interface CBLPlaceCategoriesViewController : CBLBaseViewController <UITableViewDataSource, UITableViewDelegate, CBLRemoteModelCollectionDelegate>
{
    id <CBLPlaceCategoriesViewControllerDelegate> _delegate;
    UIImageView *_shadowView;
    UITableView *_tableView;
    CBLRemoteModelCollection *_categories;
}

@property(retain, nonatomic) CBLRemoteModelCollection *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) __weak id <CBLPlaceCategoriesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)remoteModelCollectionDidClear:(id)arg1;
- (void)remoteModelCollectionDidUpdateContent:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
