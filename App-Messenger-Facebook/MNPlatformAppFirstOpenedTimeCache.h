//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"

@class MNPlatformAppFirstOpenedTimeCacheListenerAnnouncer, MNUserSettings, NSString;

@interface MNPlatformAppFirstOpenedTimeCache : NSObject <FBSessionClassProvidable>
{
    MNUserSettings *_userSettings;
    MNPlatformAppFirstOpenedTimeCacheListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)updateCacheWithAppList:(id)arg1;
- (id)firstOpenedTimeForAppId:(id)arg1;
- (void)setFirstOpenedTime:(id)arg1 forAppId:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithUserSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

