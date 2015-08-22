//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncClientImplSectionsSectionsFactory.h"

@class ComGoogleAppsBigtopSyncClientImplLivelistElementRankComparator, ComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher, NSString;

@interface ComGoogleAppsBigtopSyncClientImplSectionsTopicViewSectionsFactory : NSObject <ComGoogleAppsBigtopSyncClientImplSectionsSectionsFactory>
{
    id <ComGoogleAppsBigtopSyncClientImplLivelistLiveListImpl_Adaptor> adaptor_;
    ComGoogleAppsBigtopSyncClientImplLivelistElementRankComparator *rankComparator_;
    ComGoogleAppsBigtopSyncClientImplLivelistElementRankComparator *reverseRankComparator_;
    id <TMLTimeService> timeService_;
    ComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher *settingsFetcher_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)createSectionsWithComGoogleAppsBigtopSyncClientImplSectionsSectionManagerImpl:(id)arg1 withLong:(long long)arg2 withComGoogleAppsBigtopSyncClientImplSectionsDefaultSectionsFactory_SweepTypeEnum:(id)arg3;
- (BOOL)onlyTripsInTripsView;
- (id)initWithComGoogleAppsBigtopSyncClientImplLivelistElementRankComparator:(id)arg1 withComGoogleAppsBigtopSyncClientImplLivelistElementRankComparator:(id)arg2 withComGoogleAppsBigtopSyncClientImplLivelistLiveListImpl_Adaptor:(id)arg3 withTMLTimeService:(id)arg4 withComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
