//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSOrderedSet;

@interface FBNuxCatalog : NSObject
{
    NSDictionary *_catalogEntries;
    NSMutableDictionary *_nuxPresenterMap;
    NSOrderedSet *_serverEligibleNuxIDs;
    NSDictionary *_triggerIDServerEligibleNuxIDsMap;
    NSMutableDictionary *_eligibilityOverrides;
    struct Mutex _lock;
}

+ (id)_catalogEntriesFromNuxConfigurations:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateTriggerIDServerEligibleNuxIDsMap;
- (id)_allRecordListsForNuxID:(id)arg1 event:(id)arg2;
- (id)_recordListForNuxID:(id)arg1 event:(id)arg2 versionID:(id)arg3;
- (id)_catalogEntryByNuxID:(id)arg1;
- (id)debugDescription;
- (void)overrideServerEligibility:(BOOL)arg1 forNuxWithID:(id)arg2;
- (id)overriddenEligibilityForNuxID:(id)arg1;
- (id)nuxPresenterForNuxID:(id)arg1;
- (id)eligibleNuxIDsForTriggerID:(id)arg1 withTriggerContext:(id)arg2;
- (BOOL)isServerEligibleNuxID:(id)arg1;
- (void)updateWithServerEligibleNuxIDs:(id)arg1;
- (void)unregisterNuxPresenter:(id)arg1;
- (void)registerNuxPresenter:(id)arg1;
- (id)configurationProfile;
@property(readonly, nonatomic) NSArray *nuxIDs;
@property(readonly, nonatomic) unsigned int count;
- (BOOL)_eventWithLastEventTime:(id)arg1 occurredWithinTimeInterval:(double)arg2;
- (id)_lastOccurrenceTimeForEvent:(id)arg1 nuxID:(id)arg2 versionID:(id)arg3;
- (BOOL)nuxWithID:(id)arg1 versionID:(id)arg2 hadEvent:(id)arg3 withinTimeInterval:(double)arg4;
- (id)nuxNameForNuxID:(id)arg1;
- (id)lastOccurrenceTimeForEvent:(id)arg1 nuxID:(id)arg2 versionID:(id)arg3;
- (unsigned int)occurrenceCountForEvent:(id)arg1 nuxID:(id)arg2 versionID:(id)arg3;
- (id)archivedCatalogEntries;
- (void)removeViewRecordsForEvent:(id)arg1 nuxID:(id)arg2 versionID:(id)arg3;
- (void)recordEvent:(id)arg1 nuxID:(id)arg2 timestamp:(id)arg3 versionID:(id)arg4;
- (id)initWithConfigurationProfile:(id)arg1;
- (id)initWithCatalogEntries:(id)arg1;

@end

