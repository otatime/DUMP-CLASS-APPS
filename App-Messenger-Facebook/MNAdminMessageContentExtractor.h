//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"

@class FBExperimentManager, FBMLogMessageParser, FBMMessageAttachments, MNGroupCreationExperimentGating, NSString;

@interface MNAdminMessageContentExtractor : NSObject <FBSessionClassProvidable>
{
    FBMLogMessageParser *_logMessageParser;
    FBMMessageAttachments *_messageAttachments;
    id <MNAuthenticationManager> _authenticationManager;
    FBExperimentManager *_experimentManager;
    id <FBProvider> _groupCreationExperimentProvider;
    MNGroupCreationExperimentGating *_groupCreationExperimentGating;
}

- (void).cxx_destruct;
- (id)_groupCreationExperimentGating;
- (id)_missedCallCallToAction:(BOOL)arg1;
- (id)_callToActionForCallLog:(id)arg1 message:(id)arg2;
- (id)_iconImageFromCallLog:(id)arg1;
- (id)_iconImageForMessage:(id)arg1;
- (id)_adminTextWithColor:(id)arg1 icon:(id)arg2 text:(id)arg3 callToAction:(id)arg4;
- (id)adminTextForMessage:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

