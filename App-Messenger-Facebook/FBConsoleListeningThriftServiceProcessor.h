//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TProcessor.h"

@class NSDictionary, NSString;

@interface FBConsoleListeningThriftServiceProcessor : NSObject <TProcessor>
{
    id <FBConsoleListeningThriftService> mService;
    NSDictionary *mMethodMap;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)process_logMessages_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_identify_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (BOOL)processOnInputProtocol:(id)arg1 outputProtocol:(id)arg2;
- (id)service;
- (id)initWithListeningThriftService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

