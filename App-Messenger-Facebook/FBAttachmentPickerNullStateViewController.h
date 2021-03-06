//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBComponentScrollEventListener.h"
#import "FBComponentTableViewDataSourceCellConfigProvider.h"

@class FBAttachmentPickerComponentContext, FBAttachmentPickerInputData, FBComponentTableViewDataSource, FBLoadingIndicatorView, FBScenePath, FBSearchResultsActivityListenerAnnouncer, FBUserSession, NSArray, NSString, UITableView;

@interface FBAttachmentPickerNullStateViewController : UIViewController <FBComponentScrollEventListener, FBComponentTableViewDataSourceCellConfigProvider>
{
    FBUserSession *_session;
    unsigned int _resultType;
    FBScenePath *_scenePath;
    FBAttachmentPickerInputData *_inputData;
    FBSearchResultsActivityListenerAnnouncer *_resultsAnnouncer;
    UITableView *_tableView;
    FBComponentTableViewDataSource *_tableViewDataSource;
    FBAttachmentPickerComponentContext *_context;
    FBLoadingIndicatorView *_tailLoadingIndicatorView;
    NSArray *_categoryEdges;
    CDUnknownBlockType _pendingEnqueueChangesetBlock;
    BOOL _isLoading;
    id <FBAttachmentPickerNullStateViewControllerDelegate> _delegate;
    CDUnknownBlockType _didScrollBlock;
}

@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) CDUnknownBlockType didScrollBlock; // @synthesize didScrollBlock=_didScrollBlock;
@property(nonatomic) __weak id <FBAttachmentPickerNullStateViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1;
- (void)scrollViewDidScroll:(struct FBScrollViewState)arg1;
- (void)_createTableViewDataSource;
- (void)_enqueuePendingChangeSet;
- (void)addCategoryEdges:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSession:(id)arg1 resultType:(unsigned int)arg2 inputData:(id)arg3 resultsAnnouncer:(id)arg4 scenePath:(id)arg5;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

