//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CBLCreateBoardViewControllerDelegate.h"
#import "CBLRemoteModelCollectionDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CBLRemoteModelCollection, NSArray, NSString, UITableView;

@interface CBLBoardSelectorViewController : UIViewController <CBLRemoteModelCollectionDelegate, CBLCreateBoardViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    BOOL _hideSecretBoards;
    id <CBLBoardSelectorViewControllerDelegate> _delegate;
    UITableView *_tableView;
    CBLRemoteModelCollection *_boardsCollection;
    CBLRemoteModelCollection *_secretBoardsCollection;
    NSArray *_boards;
}

@property(retain, nonatomic) NSArray *boards; // @synthesize boards=_boards;
@property(retain, nonatomic) CBLRemoteModelCollection *secretBoardsCollection; // @synthesize secretBoardsCollection=_secretBoardsCollection;
@property(retain, nonatomic) CBLRemoteModelCollection *boardsCollection; // @synthesize boardsCollection=_boardsCollection;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) BOOL hideSecretBoards; // @synthesize hideSecretBoards=_hideSecretBoards;
@property(nonatomic) __weak id <CBLBoardSelectorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)remoteModelCollectionDidClear:(id)arg1;
- (void)remoteModelCollectionDidUpdateContent:(id)arg1;
- (void)boardWasCreated:(id)arg1;
- (void)didTapCreateBoard;
- (void)sortBoards;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

