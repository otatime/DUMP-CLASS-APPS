//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"

@class FBMThreadBasedCacheManager, NSString;

@interface MNTincanThreadIndicator : NSObject <FBSessionClassProvidable>
{
    FBMThreadBasedCacheManager *_tincanThreads;
    BOOL _tincanAvailable;
}

- (void).cxx_destruct;
- (BOOL)isTincanAvailable;
- (BOOL)isTincanThreadWithKey:(id)arg1;
- (void)markTincanThreadWithKey:(id)arg1;
- (void)dealloc;
- (id)initWithThreadSet:(id)arg1 userSession:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

