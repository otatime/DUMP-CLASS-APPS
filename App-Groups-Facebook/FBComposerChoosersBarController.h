//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBComposerChoosersBarDataSource.h"
#import "FBComposerCompositionStateChangedListener.h"

@class FBActivitySuggestionManager, FBComposerChoosersBar, FBComposerChoosersBarItem, FBComposerCompositionState, FBPrefetchPlacesActivityIndicatorView, FBUserSession, NSArray, NSMutableDictionary, NSString;

@interface FBComposerChoosersBarController : NSObject <FBComposerChoosersBarDataSource, FBComposerCompositionStateChangedListener>
{
    FBUserSession *_session;
    NSMutableDictionary *_viewedTooltips;
    id <FBLocationPickerControllerListener> _listener;
    FBComposerCompositionState *_currentCompositionState;
    BOOL _enableAlbums;
    BOOL _shouldShowItemsThatAreContainedInPostCompositionStep;
    BOOL _disablePhotoPlaceNux;
    FBComposerChoosersBar *_choosersBar;
    FBActivitySuggestionManager *_activitySuggestionManager;
    FBComposerChoosersBarItem *_userItem;
    FBComposerChoosersBarItem *_placeItem;
    FBComposerChoosersBarItem *_mediaItem;
    FBComposerChoosersBarItem *_albumItem;
    FBComposerChoosersBarItem *_postScheduleDateItem;
    FBComposerChoosersBarItem *_activityItem;
    FBComposerChoosersBarItem *_questionAndAnswerItem;
    FBComposerChoosersBarItem *_postOptionsItem;
    FBComposerChoosersBarItem *_eventDateItem;
    FBComposerChoosersBarItem *_sharedLinkItem;
    FBComposerChoosersBarItem *_targetingItem;
    NSArray *_chooserItems;
    NSArray *_chooserButtons;
    FBPrefetchPlacesActivityIndicatorView *_prefetchPlacesActivityIndicator;
}

@property(retain, nonatomic) FBPrefetchPlacesActivityIndicatorView *prefetchPlacesActivityIndicator; // @synthesize prefetchPlacesActivityIndicator=_prefetchPlacesActivityIndicator;
@property(copy, nonatomic) NSArray *chooserButtons; // @synthesize chooserButtons=_chooserButtons;
@property(copy, nonatomic) NSArray *chooserItems; // @synthesize chooserItems=_chooserItems;
@property(retain, nonatomic) FBComposerChoosersBarItem *targetingItem; // @synthesize targetingItem=_targetingItem;
@property(retain, nonatomic) FBComposerChoosersBarItem *sharedLinkItem; // @synthesize sharedLinkItem=_sharedLinkItem;
@property(retain, nonatomic) FBComposerChoosersBarItem *eventDateItem; // @synthesize eventDateItem=_eventDateItem;
@property(retain, nonatomic) FBComposerChoosersBarItem *postOptionsItem; // @synthesize postOptionsItem=_postOptionsItem;
@property(retain, nonatomic) FBComposerChoosersBarItem *questionAndAnswerItem; // @synthesize questionAndAnswerItem=_questionAndAnswerItem;
@property(retain, nonatomic) FBComposerChoosersBarItem *activityItem; // @synthesize activityItem=_activityItem;
@property(retain, nonatomic) FBComposerChoosersBarItem *postScheduleDateItem; // @synthesize postScheduleDateItem=_postScheduleDateItem;
@property(retain, nonatomic) FBComposerChoosersBarItem *albumItem; // @synthesize albumItem=_albumItem;
@property(retain, nonatomic) FBComposerChoosersBarItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) FBComposerChoosersBarItem *placeItem; // @synthesize placeItem=_placeItem;
@property(retain, nonatomic) FBComposerChoosersBarItem *userItem; // @synthesize userItem=_userItem;
@property(retain, nonatomic) FBActivitySuggestionManager *activitySuggestionManager; // @synthesize activitySuggestionManager=_activitySuggestionManager;
@property(nonatomic) BOOL disablePhotoPlaceNux; // @synthesize disablePhotoPlaceNux=_disablePhotoPlaceNux;
@property(retain, nonatomic) FBComposerChoosersBar *choosersBar; // @synthesize choosersBar=_choosersBar;
- (void).cxx_destruct;
- (void)_matchContentSuggestion:(id)arg1 hasActivityContentSuggestion:(char *)arg2 hasLocationContentSuggestion:(char *)arg3;
- (void)prefetchPlacesDidChangeToState:(unsigned int)arg1;
- (id)choosersBar:(id)arg1 chooserBarItemAtIndex:(int)arg2;
- (int)numberOfChoosersInChoosersBar:(id)arg1;
- (id)_chooserViewForChooserBarButton:(int)arg1;
- (void)_logHPANuxOutcome:(id)arg1 outcome:(int)arg2 cacheNuxResponseOnClient:(BOOL)arg3;
- (BOOL)tooltipViewedForButton:(int)arg1;
- (void)setTooltipViewedForButton:(int)arg1;
- (id)buttonKeyForChoosersBarButton:(int)arg1;
- (void)enqueueTooltips:(id)arg1;
- (BOOL)hasCheckInPlace;
- (BOOL)_shouldDisplayNetworkConnectionSensitiveTooltips;
- (void)_reloadSelection;
- (void)_refresh;
- (void)hideAccessoryViewForButton:(int)arg1;
- (void)showAccessoryViewForButton:(int)arg1;
- (void)addAccessoryView:(id)arg1 toButton:(int)arg2;
- (void)addBadgeForButton:(int)arg1 badgeCount:(int)arg2;
- (void)removeBadgeForButton:(int)arg1;
- (int)choosersBarButtonAtIndex:(int)arg1;
- (void)choosersBarButton:(int)arg1 setSelected:(BOOL)arg2;
- (int)itemIndexForChoosersBarButton:(int)arg1;
- (void)_rebuildItems;
- (id)_itemWithGlyphName:(unsigned int)arg1 accessibilityString:(id)arg2 accessibilityIdentifier:(id)arg3;
- (void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2;
- (void)dealloc;
- (id)initWithSession:(id)arg1 listener:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
