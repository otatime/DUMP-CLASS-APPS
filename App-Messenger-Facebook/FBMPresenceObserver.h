//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "MNMQTTPersonSyncEventObserver.h"

@class MNMQTTPersonSyncEventHandler, NSString;

@interface FBMPresenceObserver : NSObject <MNMQTTPersonSyncEventObserver, FBSessionClassProvidable>
{
    BOOL _presenceLoaded;
    MNMQTTPersonSyncEventHandler *_handler;
}

@property(retain, nonatomic) MNMQTTPersonSyncEventHandler *handler; // @synthesize handler=_handler;
@property(nonatomic) BOOL presenceLoaded; // @synthesize presenceLoaded=_presenceLoaded;
- (void)didReceievePresenceUpdateWithValues:(id)arg1 wasFull:(BOOL)arg2;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

