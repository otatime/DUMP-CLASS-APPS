//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "MNServiceControllable.h"

@class FBMMQTTManager, NSString;

@interface FBMMQTTConnectStateTrackerService : NSObject <FBSessionClassProvidable, MNServiceControllable>
{
    FBMMQTTManager *_mqttManager;
    int _currentConnectState;
}

@property int currentConnectState; // @synthesize currentConnectState=_currentConnectState;
- (void).cxx_destruct;
- (void)onMQTTConnectedChanged:(id)arg1;
- (void)handleIdle;
- (void)stop;
- (void)start:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

