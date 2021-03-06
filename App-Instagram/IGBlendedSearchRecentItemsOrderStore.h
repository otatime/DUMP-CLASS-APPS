//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableOrderedSet;

@interface IGBlendedSearchRecentItemsOrderStore : NSObject
{
    BOOL _needsToBeArchived;
    NSMutableOrderedSet *_mutableRecentItems;
    NSArray *_itemControllers;
}

+ (id)sharedStore;
@property(nonatomic) BOOL needsToBeArchived; // @synthesize needsToBeArchived=_needsToBeArchived;
@property(readonly, nonatomic) NSArray *itemControllers; // @synthesize itemControllers=_itemControllers;
- (void).cxx_destruct;
- (void)archiveIfNeeded;
- (void)saveRecentItems:(id)arg1;
- (id)itemControllerForItem:(id)arg1;
- (id)restoreRecentItems;
- (id)itemControllerForItemType:(id)arg1;
- (void)clearHistory;
- (id)recentItems;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableRecentItems; // @synthesize mutableRecentItems=_mutableRecentItems;
- (void)addRecentItem:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

@end

