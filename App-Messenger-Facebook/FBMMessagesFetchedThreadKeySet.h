//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMThreadSetObserver.h"
#import "FBSessionClassProvidable.h"

@class FBMThreadSet, NSMutableSet, NSString;

@interface FBMMessagesFetchedThreadKeySet : NSObject <FBMThreadSetObserver, FBSessionClassProvidable>
{
    NSMutableSet *_fetchedMessagesThreadKeys;
    FBMThreadSet *_threadSet;
}

- (void).cxx_destruct;
- (void)threadSetWillClearAllThreads:(id)arg1;
- (void)threadSet:(id)arg1 didEvictThread:(id)arg2 forReason:(unsigned int)arg3;
- (void)threadSet:(id)arg1 didReplaceThreadWithThread:(id)arg2;
- (void)threadSet:(id)arg1 didAddThread:(id)arg2;
- (id)allFetchedMessagesThreadKeys;
- (void)markAllThreadMessagesNotFetched;
- (void)markMessagesNotFetchedForThreadWithKey:(id)arg1;
- (void)markMessagesFetchedForThreadWithKey:(id)arg1;
- (BOOL)areMessagesFetchedForThreadWithKey:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithThreadSet:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

