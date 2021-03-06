//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FBItemContentSquareViewConfig, NSArray, NSString;

@interface FBCrowdsourcingCategoryPickerMainDataSource : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    FBItemContentSquareViewConfig *_squareViewConfig;
    float _squareViewHeight;
    BOOL _hideTopSection;
    id <FBCrowdsourcingCategoryPickerMainDelegate> _delegate;
    NSArray *_suggestedCategories;
}

@property(nonatomic) BOOL hideTopSection; // @synthesize hideTopSection=_hideTopSection;
@property(copy, nonatomic) NSArray *suggestedCategories; // @synthesize suggestedCategories=_suggestedCategories;
@property(nonatomic) __weak id <FBCrowdsourcingCategoryPickerMainDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_tableView:(id)arg1 cellForSuggestionsSectionItem:(int)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

