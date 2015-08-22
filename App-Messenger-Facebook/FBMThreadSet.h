//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMNetworkProtocolChangeListener.h"
#import "FBRequestDelegate.h"
#import "FBSessionClassProvidable.h"

@class FBMNetworkProtocolController, FBMThreadParticipantFilter, FBMThreadSetObserverAnnouncer, FBObjectToSetMap, NSMutableDictionary, NSString;

@interface FBMThreadSet : NSObject <FBRequestDelegate, FBMNetworkProtocolChangeListener, FBSessionClassProvidable>
{
    long long _muteUntil;
    BOOL _hasUnseenThreads;
    unsigned int _numberOfUnreadPendingRequests;
    unsigned int _numberOfOtherThreads;
    id <FBMThreadSetInitialUpdateDelegate> _initialUpdateDelegate;
    NSMutableDictionary *_threadsByFbId;
    NSMutableDictionary *_threadFbIdBySha1;
    NSMutableDictionary *_threadFbIdByUserId;
    FBObjectToSetMap *_threadsByMailboxKey;
    FBMThreadParticipantFilter *_threadParticipantFilter;
    id <FBProvider> _authenticationManagerProvider;
    FBMNetworkProtocolController *_networkProtocolController;
    id <FBMNetworkProtocolChangeListener> _networkProtocolChangeListenerDispatcher;
    FBMThreadSetObserverAnnouncer *_announcer;
    unsigned long long _threadlistSyncActionId;
    long long _lastVisibleActionId;
}

@property(retain, nonatomic) FBMThreadSetObserverAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(retain, nonatomic) id <FBMNetworkProtocolChangeListener> networkProtocolChangeListenerDispatcher; // @synthesize networkProtocolChangeListenerDispatcher=_networkProtocolChangeListenerDispatcher;
@property(retain, nonatomic) FBMNetworkProtocolController *networkProtocolController; // @synthesize networkProtocolController=_networkProtocolController;
@property(retain, nonatomic) id <FBProvider> authenticationManagerProvider; // @synthesize authenticationManagerProvider=_authenticationManagerProvider;
@property(retain, nonatomic) FBMThreadParticipantFilter *threadParticipantFilter; // @synthesize threadParticipantFilter=_threadParticipantFilter;
@property(retain, nonatomic) FBObjectToSetMap *threadsByMailboxKey; // @synthesize threadsByMailboxKey=_threadsByMailboxKey;
@property(retain, nonatomic) NSMutableDictionary *threadFbIdByUserId; // @synthesize threadFbIdByUserId=_threadFbIdByUserId;
@property(retain, nonatomic) NSMutableDictionary *threadFbIdBySha1; // @synthesize threadFbIdBySha1=_threadFbIdBySha1;
@property(retain, nonatomic) NSMutableDictionary *threadsByFbId; // @synthesize threadsByFbId=_threadsByFbId;
@property(nonatomic) __weak id <FBMThreadSetInitialUpdateDelegate> initialUpdateDelegate; // @synthesize initialUpdateDelegate=_initialUpdateDelegate;
@property(nonatomic) long long lastVisibleActionId; // @synthesize lastVisibleActionId=_lastVisibleActionId;
@property(nonatomic) BOOL hasUnseenThreads; // @synthesize hasUnseenThreads=_hasUnseenThreads;
@property(nonatomic) unsigned int numberOfOtherThreads; // @synthesize numberOfOtherThreads=_numberOfOtherThreads;
@property(nonatomic) unsigned int numberOfUnreadPendingRequests; // @synthesize numberOfUnreadPendingRequests=_numberOfUnreadPendingRequests;
@property(nonatomic) unsigned long long threadlistSyncActionId; // @synthesize threadlistSyncActionId=_threadlistSyncActionId;
@property(nonatomic) long long muteUntil; // @synthesize muteUntil=_muteUntil;
- (void).cxx_destruct;
- (void)networkProtocolDidChange:(unsigned int)arg1;
- (void)removeThreadSetObserver:(id)arg1;
- (void)addThreadSetObserver:(id)arg1;
- (BOOL)hasMutedThreads;
- (void)moveThread:(id)arg1 fromMailbox:(unsigned int)arg2 toMailbox:(unsigned int)arg3;
- (long long)lastTimestampForMailbox:(unsigned int)arg1;
- (long long)sinceTimestampForMailbox:(unsigned int)arg1;
- (id)threadsListByTimestampForMailbox:(unsigned int)arg1;
- (void)markAllThreadsAsDirty;
- (id)allThreadsIncludingArchived:(BOOL)arg1;
- (id)threadsListForMailbox:(unsigned int)arg1 unread:(BOOL)arg2;
- (id)getThreadByUserId:(id)arg1;
- (id)getThreadByFbId:(id)arg1;
- (id)getThreadByThreadKey:(id)arg1;
- (int)numThreads;
- (void)clearThreads;
- (void)_removeThreadFromAllIndexes:(id)arg1;
- (void)removeAllThreadsForMailbox:(unsigned int)arg1 withReason:(unsigned int)arg2;
- (void)removeThreadWithFbId:(id)arg1 withReason:(unsigned int)arg2;
- (void)removeThread:(id)arg1 fromMailbox:(unsigned int)arg2;
- (void)addThread:(id)arg1 toMailbox:(unsigned int)arg2;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;
- (id)initWithThreadParticipantFilter:(id)arg1 authenticationManagerProvider:(id)arg2 networkProtocolController:(id)arg3;
- (id)getThreadBySyncThreadKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

