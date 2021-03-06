//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XMPPRosterStorage.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, XMPPJID, XMPPRoster, XMPPUserMemoryStorageObject;

@interface XMPPRosterMemoryStorage : NSObject <XMPPRosterStorage>
{
    XMPPRoster *parent;
    NSObject<OS_dispatch_queue> *parentQueue;
    Class userClass;
    Class resourceClass;
    BOOL isRosterPopulation;
    BOOL isPresencePopulation;
    NSMutableDictionary *roster;
    XMPPJID *myJID;
    XMPPUserMemoryStorageObject *myUser;
}

@property Class resourceClass; // @synthesize resourceClass;
@property Class userClass; // @synthesize userClass;
- (void).cxx_destruct;
- (void)clearAllUsersAndResourcesForXMPPStream:(id)arg1;
- (void)clearAllResourcesForXMPPStream:(id)arg1;
- (void)setPhoto:(id)arg1 forUserWithJID:(id)arg2 xmppStream:(id)arg3;
- (BOOL)userExistsWithJID:(id)arg1 xmppStream:(id)arg2;
- (void)handlePresence:(id)arg1 xmppStream:(id)arg2;
- (void)handleRosterItem:(id)arg1 xmppStream:(id)arg2;
- (void)endRosterPopulationForXMPPStream:(id)arg1;
- (void)beginRosterPopulationForXMPPStream:(id)arg1;
- (id)sortedResources:(BOOL)arg1;
- (id)unsortedUnavailableUsers;
- (id)unsortedAvailableUsers;
- (id)unsortedUsers;
- (id)sortedUnavailableUsersByName;
- (id)sortedAvailableUsersByName;
- (id)sortedUsersByAvailabilityName;
- (id)sortedUsersByName;
- (id)resourceForJID:(id)arg1;
- (id)userForJID:(id)arg1;
- (id)myResource;
- (id)myUser;
- (id)getAllUsers;
- (id)_sortedResources:(BOOL)arg1;
- (id)_sortedUnavailableUsersByName;
- (id)_sortedAvailableUsersByName;
- (id)_sortedUsersByAvailabilityName;
- (id)_sortedUsersByName;
- (id)_unsortedUnavailableUsers;
- (id)_unsortedAvailableUsers;
- (id)_unsortedUsers;
- (id)_resourceForJID:(id)arg1;
- (id)_userForJID:(id)arg1;
- (id)multicastDelegate;
@property(readonly) NSObject<OS_dispatch_queue> *parentQueue;
@property(readonly) XMPPRoster *parent;
- (void)dealloc;
- (BOOL)configureWithParent:(id)arg1 queue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

