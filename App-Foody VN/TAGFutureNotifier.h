//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TAGContainerOpenerNotifier.h"

@class TAGContainerFutureImpl;

@interface TAGFutureNotifier : NSObject <TAGContainerOpenerNotifier>
{
    TAGContainerFutureImpl *_future;
}

@property(retain) TAGContainerFutureImpl *future; // @synthesize future=_future;
- (void).cxx_destruct;
- (void)containerAvailable:(id)arg1;

@end
