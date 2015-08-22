//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMThreadDeleterDelegate.h"
#import "FBSessionClassProvidable.h"

@class FBMDiskThreadDeleter, FBMThreadActionHandlerListenerAnnouncer, FBMThreadMarkService, FBMThreadSet, MNThreadUpdateService, NSMutableArray, NSString;

@interface FBMThreadActionHandler : NSObject <FBMThreadDeleterDelegate, FBSessionClassProvidable>
{
    FBMThreadSet *_threadSet;
    id <FBProvider> _threadDeleterProvider;
    FBMDiskThreadDeleter *_threadDiskDeleter;
    NSMutableArray *_currentlyOperatingNetworkRequesters;
    FBMThreadMarkService *_threadMarkService;
    MNThreadUpdateService *_threadUpdateService;
    FBMThreadActionHandlerListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)threadDeleter:(id)arg1 couldNotDeleteThreadSummary:(id)arg2 withError:(id)arg3;
- (void)threadDeleter:(id)arg1 didDeleteThreadSummary:(id)arg2;
- (void)archiveThreadSummary:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)deleteThreadSummary:(id)arg1;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithThreadSet:(id)arg1 threadDeleterProvider:(id)arg2 threadDiskDeleter:(id)arg3 threadMarkService:(id)arg4 threadUpdateService:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

