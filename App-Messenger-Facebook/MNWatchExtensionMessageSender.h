//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"

@class FBMSendKitMessageSender, NSString;

@interface MNWatchExtensionMessageSender : NSObject <FBSessionClassProvidable>
{
    id <MNAuthenticationManager> _authManager;
    FBMSendKitMessageSender *_sendKitMessageSender;
}

- (void).cxx_destruct;
- (void)sendMessage:(id)arg1 toThread:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

