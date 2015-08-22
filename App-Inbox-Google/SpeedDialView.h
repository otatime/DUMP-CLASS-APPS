//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIToolbarDelegate.h"

@class NSString, SpeedDialCell, UITableView;

@interface SpeedDialView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, UIToolbarDelegate>
{
    UIView *scrimView_;
    SpeedDialCell *composeCell_;
    SpeedDialCell *inviteCell_;
    SpeedDialCell *taskCell_;
    UITableView *contactsTableView_;
    BOOL collapsed_;
    double startTime_;
    double endTime_;
    BOOL performingAnimation_;
    BOOL needReloadData_;
    float speedDialViewBottomOffset_;
    id <SpeedDialViewDelegate> _delegate;
    id <SpeedDialViewDataSource> _dataSource;
}

@property(nonatomic) __weak id <SpeedDialViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SpeedDialViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float speedDialViewBottomOffset; // @synthesize speedDialViewBottomOffset=speedDialViewBottomOffset_;
- (void).cxx_destruct;
- (void)swipeGesture:(id)arg1;
- (void)tapGesture:(id)arg1;
- (void)dismiss;
- (void)task;
- (void)compose;
- (void)createSubviews;
- (int)positionForBar:(id)arg1;
- (int)numberOfAdditionalRows;
- (BOOL)isInviteRowIndex:(int)arg1;
- (BOOL)isTaskRowIndex:(int)arg1;
- (BOOL)isComposeRowIndex:(int)arg1;
- (id)inviteCell;
- (id)taskCell;
- (id)composeCell;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)animationCompletion;
- (void)updateTableLayoutAnimated:(BOOL)arg1;
- (void)updateContentInsets;
- (void)updateCollapsedStateAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) BOOL showInviteItem;
- (struct CGRect)createTaskButtonRectInView:(id)arg1;
- (void)setCollapsed:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
