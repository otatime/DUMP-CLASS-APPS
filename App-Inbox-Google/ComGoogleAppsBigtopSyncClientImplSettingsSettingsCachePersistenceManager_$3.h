//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Listener.h"

@class ComGoogleAppsBigtopSyncClientImplSettingsSettingsCachePersistenceManager, NSString;

@interface ComGoogleAppsBigtopSyncClientImplSettingsSettingsCachePersistenceManager_$3 : NSObject <ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Listener>
{
    ComGoogleAppsBigtopSyncClientImplSettingsSettingsCachePersistenceManager *this$0_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopSyncClientImplSettingsSettingsCachePersistenceManager:(id)arg1;
- (void)onErrorWithComGoogleAppsBigtopSyncClientImplProducersElementProducer:(id)arg1 withJBTError:(id)arg2;
- (void)onUpdateWithComGoogleAppsBigtopSyncClientImplProducersElementProducer:(id)arg1 withComGoogleAppsBigtopSyncClientImplProducersElementProducer_ChangeList:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
