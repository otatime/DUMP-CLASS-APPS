//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "MNInboxAppearanceEventListener.h"
#import "MNQuickPromotionBannerToastPresenterDelegate.h"

@class FBUserSession, MNQuickPromotionBannerToastPresenter, MNSentimentSurveryNuxPresenter, NSString;

@interface MNInboxTopBannerCoordinator : NSObject <MNQuickPromotionBannerToastPresenterDelegate, FBSessionClassProvidable, MNInboxAppearanceEventListener>
{
    FBUserSession *_session;
    MNQuickPromotionBannerToastPresenter *_quickPromotionBannerToastPresenter;
    MNSentimentSurveryNuxPresenter *_sentimentSurveyNuxPresenter;
    int _numberOfTimesInboxAppeared;
}

- (void).cxx_destruct;
- (void)_inboxViewDidDisappear;
- (BOOL)_userReturnedToInbox;
- (void)_showSurveyIfNeeded;
- (void)_showQPBannerIfNeeded;
- (void)_showNewBannerIfNeeded;
- (void)quickPromotionBannerToastPresenter:(id)arg1 didUnloadPromotion:(id)arg2;
- (void)quickPromotionBannerToastPresenterDidChangeVisibility:(id)arg1;
- (void)inboxViewAppearanceStateDidChangeTo:(unsigned int)arg1;
- (void)inboxDidFailToLoadThreadListDataModel;
- (void)inboxDidLoadThreadListDataModel;
- (void)inboxDidDisplayThreadList;
- (void)configureWithToastPresenter:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1 sentimentSurveyNuxPresenter:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
