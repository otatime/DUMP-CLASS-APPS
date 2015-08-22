//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBNetworkerRequestDelegate.h"

@class FBCurrentCountryManager, FBSimpleNetworkerRequest, FBUserSession, NSString;

@interface MNAddContactRequester : NSObject <FBNetworkerRequestDelegate>
{
    id <FBPhoneNumber> _phoneNumber;
    id <MNAddContactRequesterDelegate> _delegate;
    FBUserSession *_session;
    FBSimpleNetworkerRequest *_request;
    FBCurrentCountryManager *_currentCountryManager;
}

@property(retain, nonatomic) FBCurrentCountryManager *currentCountryManager; // @synthesize currentCountryManager=_currentCountryManager;
@property(retain, nonatomic) FBSimpleNetworkerRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <MNAddContactRequesterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <FBPhoneNumber> phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)send;
- (void)dealloc;
- (id)initWithSession:(id)arg1 phoneNumber:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

