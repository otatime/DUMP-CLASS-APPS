//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNPeopleTableViewDataProvider.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FBWebRTCPhoneButtonStyleExperimentContext, MNPeopleModelController, NSString, UIImage;

@interface MNPeopleTableDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, MNPeopleTableViewDataProvider>
{
    unsigned int _filter;
    MNPeopleModelController *_peopleModelController;
    id <UITableViewDelegate> _tableViewDelegate;
    CDUnknownBlockType _peopleCellCreationBlock;
    CDUnknownBlockType _peopleCellSelectedBlock;
    BOOL _showCallButtons;
    BOOL _showInviteButtons;
    FBWebRTCPhoneButtonStyleExperimentContext *_rtcButtonStyleExperimentContext;
    UIImage *_phoneIconImage;
}

- (void).cxx_destruct;
- (id)_phoneIconImage;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)_showCellLineSeparator:(id)arg1;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)conversationInitiatorIdentifier:(int)arg1;
- (BOOL)isPeopleSearchResults;
- (unsigned int)topFriendsCount;
- (unsigned int)peopleCount;
- (id)resultForIndexPath:(id)arg1;
- (id)titleForHeaderInSection:(int)arg1;
- (int)absoluteRowIndexForIndexPath:(id)arg1;
- (void)representFilter:(unsigned int)arg1;
- (id)initWithPeopleModelController:(id)arg1 tableViewDelegate:(id)arg2 peopleCellCreationBlock:(CDUnknownBlockType)arg3 peopleCellSelectedBlock:(CDUnknownBlockType)arg4 showCallButtons:(BOOL)arg5 showInviteButtons:(BOOL)arg6 experimentManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

