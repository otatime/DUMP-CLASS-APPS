//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBConsoleControlThriftService.h"
#import "NSNetServiceDelegate.h"

@class NSMutableSet, NSString;

@interface FBConsoleControlThriftService : NSObject <NSNetServiceDelegate, FBConsoleControlThriftService>
{
    NSMutableSet *_pendingListenerConnections;
}

+ (id)targetInfo;
- (void).cxx_destruct;
- (void)_cleanupPendingListenerConnection:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)connectBackTo:(id)arg1;
- (void)setTagLevel:(id)arg1 level:(int)arg2;
- (id)getTagStatuses:(id)arg1;
- (id)getTags;
- (id)getTargetInfo;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

