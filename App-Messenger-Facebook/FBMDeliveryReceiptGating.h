//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"

@class FBMNetworkProtocolController, FBUserSession, NSString;

@interface FBMDeliveryReceiptGating : NSObject <FBSessionClassProvidable>
{
    FBMNetworkProtocolController *_networkProtocolController;
    FBUserSession *_session;
    unsigned int _displayDeliveryReceiptWithNewUIState;
    unsigned int _displayDeliveryReceiptWithNewUIStateInInbox;
    unsigned int _sendDeliveryReceiptWithNewPayloadState;
}

- (void).cxx_destruct;
- (void)_checkAllGatingsForDisplayIfNeeded;
- (void)_checkGatingForDisplayInInboxIfNeeded;
- (void)_checkGatingForDisplayIfNeeded;
- (BOOL)shouldDisplayDeliveryReceiptWithNewUIInInbox;
- (BOOL)shouldDisplayDeliveryReceiptWithNewUIForGroupThreadWithSize:(unsigned int)arg1;
- (BOOL)shouldDisplayDeliveryReceiptWithNewUI;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

