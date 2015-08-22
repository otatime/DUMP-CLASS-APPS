//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBNetworkerRequestDelegate.h"

@class FBGraphBatchParticipatingRequest, FBMUserFetchedListeningAnnouncer, FBSimpleNetworkerRequest, FBUserSession, MNSimpleSingleThreadFetcher, NSArray, NSString, UIImage;

@interface MNGroupThreadCreator : NSObject <FBNetworkerRequestDelegate, FBClassProvidable>
{
    FBUserSession *_session;
    MNSimpleSingleThreadFetcher *_simpleThreadFetcher;
    NSString *_name;
    NSArray *_recipientFBIDs;
    UIImage *_profileImage;
    FBGraphBatchParticipatingRequest *_createGroupRequest;
    FBGraphBatchParticipatingRequest *_setProfileImageRequest;
    FBGraphBatchParticipatingRequest *_pinGroupRequest;
    FBSimpleNetworkerRequest *_request;
    FBMUserFetchedListeningAnnouncer *_userFetchedAnnouncer;
    id <MNGroupThreadCreatorDelegate> _delegate;
}

@property(nonatomic) __weak id <MNGroupThreadCreatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setOffThreadStoreRequestAfterSuccessfulThreadCreation:(id)arg1;
- (void)_didFailWithError:(id)arg1;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)_didSucceedAndFetchedThread:(id)arg1;
- (void)networkerRequest:(id)arg1 didStartWithStatus:(id)arg2;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (double)_uploadTimeRatio;
- (void)networkerRequest:(id)arg1 didUpdateDownloadProgress:(float)arg2 complete:(BOOL)arg3;
- (void)networkerRequest:(id)arg1 didUpdateUploadProgress:(float)arg2 complete:(BOOL)arg3;
- (void)_handlePinGroupResponse:(id)arg1;
- (void)_handleSetProfileImageResponse:(id)arg1;
- (BOOL)_handleCreateThreadResponse:(id)arg1 error:(id *)arg2;
- (void)_clearRequest;
- (void)cancel;
- (void)createGroupThreadWithName:(id)arg1 recipientFBIDs:(id)arg2 profileImage:(id)arg3;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithSession:(id)arg1 simpleThreadFetcher:(id)arg2 userFetchedListeningAnnouncer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

