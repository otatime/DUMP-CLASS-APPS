//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBContactImporterAddressBookReaderDelegate.h"
#import "FBContactImporterNetworkerDelegate.h"

@class FBContactImporterAddressBookReader, FBContactImporterNetworker, FBContactImporterRevampModelListenerAnnouncer, FBUserSession, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface FBContactImporterRevampModel : NSObject <FBContactImporterAddressBookReaderDelegate, FBContactImporterNetworkerDelegate>
{
    FBUserSession *_session;
    FBContactImporterAddressBookReader *_addressBookReader;
    FBContactImporterNetworker *_networker;
    NSArray *_abContacts;
    NSMutableSet *_matchedFaceBookUserIDs;
    NSMutableArray *_friendableContacts;
    NSArray *_invitableContacts;
    NSArray *_pymk;
    int _contactImporterFlow;
    NSMutableDictionary *_ciFBPersonForFBID;
    NSMutableSet *_ciFBPersonForContacts;
    NSMutableSet *_ciFBPersonForPYMK;
    NSDictionary *_recordIDToContactsDict;
    NSString *_requestSessionID;
    FBContactImporterRevampModelListenerAnnouncer *_announcer;
    BOOL _protectedDataAvailable;
    int _modelStage;
}

@property BOOL protectedDataAvailable; // @synthesize protectedDataAvailable=_protectedDataAvailable;
@property(readonly) int modelStage; // @synthesize modelStage=_modelStage;
@property(readonly, copy, nonatomic) NSSet *ciFBPersonForPYMK; // @synthesize ciFBPersonForPYMK=_ciFBPersonForPYMK;
@property(readonly, copy, nonatomic) NSSet *ciFBPersonForContacts; // @synthesize ciFBPersonForContacts=_ciFBPersonForContacts;
@property(readonly, copy, nonatomic) NSDictionary *ciFBPersonForFBID; // @synthesize ciFBPersonForFBID=_ciFBPersonForFBID;
@property(readonly, copy) NSArray *pymk; // @synthesize pymk=_pymk;
@property(readonly, copy) NSArray *invitableContacts; // @synthesize invitableContacts=_invitableContacts;
@property(readonly, copy) NSArray *friendableContacts; // @synthesize friendableContacts=_friendableContacts;
- (void).cxx_destruct;
- (id)analyticsModule;
- (id)_buildRecordIDToContactsMap:(id)arg1;
- (void)contactImporterNetworkerDidFail:(id)arg1 withPYMKError:(id)arg2;
- (void)contactImporterNetworkerDidFinish:(id)arg1 withPYMKResponse:(id)arg2;
- (void)contactImporterNetworkerDidPartialFail:(id)arg1 withError:(id)arg2 forBatchAtIndex:(unsigned int)arg3;
- (void)contactImporterNetworkerDidPartialFinish:(id)arg1 forContactRange:(struct _NSRange)arg2 forBatchAtIndex:(unsigned int)arg3;
- (void)contactImporterNetworkerDidPartialFinish:(id)arg1 withFriendableResponse:(id)arg2 forBatchAtIndex:(unsigned int)arg3;
- (void)contactImporterNetworkerDidFail:(id)arg1 withError:(id)arg2;
- (void)contactImporterNetworkerDidFinish:(id)arg1 withFriendableResponse:(id)arg2 invitableResponse:(id)arg3;
- (void)didAddressBookReadSucceedWithContacts:(id)arg1;
- (void)didAddressBookReadFailWithError:(id)arg1;
- (void)loadWithRequestSessionID:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithSession:(id)arg1 contactImporterFlow:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
