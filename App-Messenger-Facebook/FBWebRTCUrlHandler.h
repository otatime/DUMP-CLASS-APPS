//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"

@class NSString;

@interface FBWebRTCUrlHandler : NSObject <FBSessionClassProvidable>
{
}

- (void)startVoipCallWithUser:(id)arg1 trigger:(id)arg2;
- (id)parseTriggerFromUrl:(id)arg1;
- (id)parseUserIdFromUrl:(id)arg1;
- (void)openURL:(id)arg1 sourceApplication:(id)arg2;
- (BOOL)canOpenURL:(id)arg1 sourceApplication:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

