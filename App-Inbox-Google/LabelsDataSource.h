//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GOOSideViewItemDataSource.h"
#import "JBTEventListener.h"

@class GOOSideViewController, NSArray, NSMutableDictionary, NSString;

@interface LabelsDataSource : NSObject <JBTEventListener, GOOSideViewItemDataSource>
{
    id <LabelsDataSourceDelegate> delegate_;
    id <JBTClusterConfigList> clusterList_;
    NSArray *navigationItemLists_;
    NSArray *navigationHeaders_;
    NSMutableDictionary *navigationTypeToItem_;
    GOOSideViewController *sideNavView_;
}

+ (id)defaultSelectedItem;
+ (void)initialize;
- (void).cxx_destruct;
- (id)sideViewContainer:(id)arg1 sectionAtIndex:(int)arg2;
- (id)sideViewContainer:(id)arg1 itemAtIndexPath:(id)arg2;
- (int)sideViewContainer:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfItemSectionsInSideViewContainer:(id)arg1;
- (void)onEventWithJBTEvent:(id)arg1;
- (void)labelsDidChange;
- (id)emptySectionHeader;
- (int)lastSection;
- (id)indexPathForNavigationItem:(id)arg1;
- (id)sideNavigationItemAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
