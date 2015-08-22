//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNMessageFetchRequestHandling.h"

@class NSString;

@interface MNMessageFetchRequestHandlerShim : NSObject <MNMessageFetchRequestHandling>
{
    id <MNMessageFetchRequestHandling> _coreHandler;
    unsigned int _acceptableHandlerOptions;
    id <MNMessageFetchRequestHandling> _nextHandler;
}

- (void).cxx_destruct;
- (void)handleMessageFetchRequest:(id)arg1 currentPendingResponse:(id)arg2 listener:(id)arg3;
- (void)configureWithNextHandler:(id)arg1;
- (id)initWithCoreHandler:(id)arg1 acceptableHandlerOptions:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
