//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGNewsTableViewController.h"

#import "IGGenericMegaphoneViewDelegate.h"
#import "IGNotificationMegaphoneViewDelegate.h"
#import "IGRealtimeOperationDelegate.h"

@class IGGenericMegaphoneView, IGNewsDataSourceSection, IGNotificationMegaphoneView, IGNuxTapOnCameraView, IGRealtimeManager, NSDictionary, NSString;

@interface IGNewsInboxTableViewController : IGNewsTableViewController <IGNotificationMegaphoneViewDelegate, IGGenericMegaphoneViewDelegate, IGRealtimeOperationDelegate>
{
    BOOL _inboxIsDirty;
    BOOL _hasLoggedFetchTimeOnce;
    IGRealtimeManager *_realtimeManager;
    IGNuxTapOnCameraView *_noMediaNux;
    IGNotificationMegaphoneView *_notificationMegaphoneView;
    IGGenericMegaphoneView *_genericMegaphoneView;
    NSDictionary *_serverMegaphoneData;
    IGNewsDataSourceSection *_megaphoneSection;
    IGNewsDataSourceSection *_friendRequestSection;
    IGNewsDataSourceSection *_storiesNewSection;
    IGNewsDataSourceSection *_storiesOldSection;
    double _lastMediaPostTime;
}

@property(nonatomic) BOOL hasLoggedFetchTimeOnce; // @synthesize hasLoggedFetchTimeOnce=_hasLoggedFetchTimeOnce;
@property(retain, nonatomic) IGNewsDataSourceSection *storiesOldSection; // @synthesize storiesOldSection=_storiesOldSection;
@property(retain, nonatomic) IGNewsDataSourceSection *storiesNewSection; // @synthesize storiesNewSection=_storiesNewSection;
@property(retain, nonatomic) IGNewsDataSourceSection *friendRequestSection; // @synthesize friendRequestSection=_friendRequestSection;
@property(retain, nonatomic) IGNewsDataSourceSection *megaphoneSection; // @synthesize megaphoneSection=_megaphoneSection;
@property(retain, nonatomic) NSDictionary *serverMegaphoneData; // @synthesize serverMegaphoneData=_serverMegaphoneData;
@property(retain, nonatomic) IGGenericMegaphoneView *genericMegaphoneView; // @synthesize genericMegaphoneView=_genericMegaphoneView;
@property(retain, nonatomic) IGNotificationMegaphoneView *notificationMegaphoneView; // @synthesize notificationMegaphoneView=_notificationMegaphoneView;
@property(nonatomic) double lastMediaPostTime; // @synthesize lastMediaPostTime=_lastMediaPostTime;
@property(retain, nonatomic) IGNuxTapOnCameraView *noMediaNux; // @synthesize noMediaNux=_noMediaNux;
@property(retain, nonatomic) IGRealtimeManager *realtimeManager; // @synthesize realtimeManager=_realtimeManager;
@property(nonatomic) BOOL inboxIsDirty; // @synthesize inboxIsDirty=_inboxIsDirty;
- (void).cxx_destruct;
- (void)updateForInsertWithRectBlock:(CDUnknownBlockType)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (void)updateInboxStoryTimestamps;
- (BOOL)addStory:(id)arg1;
- (unsigned int)subscriptionStatus;
- (id)pkForRealtimeOperation:(id)arg1;
- (void)handleRealtimeRefreshRequest;
- (void)handleRealtimeOperation:(id)arg1;
- (void)dismissNoMediaNux;
- (void)showNuxIfAppropriate;
- (id)newEmptyFeedView;
- (void)megaphone:(id)arg1 didOpenURL:(id)arg2;
- (void)megaphoneDidDismiss:(id)arg1;
- (void)pushMegaphoneDidDismiss;
- (void)showMegaphoneIfAppropriate;
- (int)segment;
- (void)onFriendStatusChanged:(id)arg1;
- (void)onFetchFailed:(id)arg1;
- (void)onDataReceived:(id)arg1;
- (void)setSectionsWithMegaphoneStories:(id)arg1 friendRequestStories:(id)arg2 newStories:(id)arg3 oldStories:(id)arg4 megaphone:(id)arg5;
- (void)downloadInboxWithContinuationToken:(id)arg1;
- (id)latestInboxStoryTimestamp;
- (void)fetchInboxWithForce:(BOOL)arg1;
- (void)reloadDataFromPullToRefresh;
- (void)fetchData;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
