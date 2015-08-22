//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNSuggestedContactsRetriever.h"

@class FBSyncStore, FBUserSession, MNUserSettings, NSString;

@interface MNTopContactsAndGroupsRetriever : NSObject <FBClassProvidable, MNSuggestedContactsRetriever>
{
    FBUserSession *_session;
    FBSyncStore *_syncStore;
    MNUserSettings *_userSettings;
    id <MNContactSuggestionsDelegate> _delegate;
}

@property(nonatomic) __weak id <MNContactSuggestionsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)_hasMinimumTimePassed;
- (void)_fetchTopFriendsWithoutCoefficient;
- (void)_fetchUsersWithPersonIDs:(id)arg1;
- (void)_getConversationContactsFromResults:(id)arg1;
- (void)startRetrievingSuggestedContacts;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

