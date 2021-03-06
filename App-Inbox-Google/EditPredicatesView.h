//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PredicateCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSIndexPath, NSMutableArray, NSString, UITableView;

@interface EditPredicatesView : UIView <PredicateCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    BOOL addMatchingMessages_;
    NSIndexPath *editedPath_;
    id <JBTClusterFilter_Builder> filter_;
    NSMutableArray *originalPredicates_;
    NSMutableArray *predicates_;
    UIView *shadowView_;
    id <EditPredicatesViewDelegate> _delegate;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <EditPredicatesViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)indexPathForPredicateCell:(id)arg1;
- (BOOL)isPredicateEmpty:(id)arg1;
- (id)nonEmptyPredicates;
- (void)updateFilter;
- (id)unusedPredicates;
- (void)showFilterTypeSelectorWithCompletionHandler:(CDUnknownBlockType)arg1 withTriggeringView:(id)arg2;
- (id)predicateCellForTableView:(id)arg1 withPredicate:(id)arg2;
- (id)defaultCellForTableView:(id)arg1 withTitle:(id)arg2 accessoryType:(int)arg3 textColor:(id)arg4;
- (void)addPredicateWithType:(id)arg1;
- (void)createSubviews;
- (void)predicateCellDidTapPredicateTypeSelector:(id)arg1;
- (void)editableCellDidClear:(id)arg1;
- (void)editableCellDidEndEditingInputText:(id)arg1;
- (void)editableCellDidDelete:(id)arg1;
- (void)editableCellDidChangeInputText:(id)arg1;
- (void)editableCellDidBeginEditingInputText:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)resignFirstResponder;
@property(nonatomic) BOOL shadowHidden; // @dynamic shadowHidden;
@property(readonly, nonatomic) BOOL isModified;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateActivePredicateWithText:(id)arg1;
- (struct CGPoint)bottomOfActivePredicate;
- (id)initWithFilter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

