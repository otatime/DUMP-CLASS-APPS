//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNMessageDetectedDataHandlerProvidingPluginService.h"

@class MNMessageDetectedDataHandlingManager, NSString;

@interface MNMessageDetectedDataHandlerProvidingPluginServiceImpl : NSObject <MNMessageDetectedDataHandlerProvidingPluginService>
{
    MNMessageDetectedDataHandlingManager *_messageDetectedDataHandlingManager;
}

- (void).cxx_destruct;
- (void)unregisterHandlerProvider:(id)arg1;
- (void)registerHandlerProvider:(id)arg1;
- (id)initWithMessageDetectedDataHandlingManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
