//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"

@class MNComposerExtensionSeenStateStore, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MNComposerExtensionSeenStateManager : NSObject <FBSessionClassProvidable>
{
    MNComposerExtensionSeenStateStore *_extensionSeenStateStore;
    NSDictionary *_cachedExtensionSeenStates;
    NSObject<OS_dispatch_queue> *_serializationQueue;
}

- (void).cxx_destruct;
- (void)_populateCachedExtensionSeenStateFromDiskIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadExtensionSeenStatesWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markExtensionsAsUnseen:(id)arg1;
- (void)markExtensionsAsSeen:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

