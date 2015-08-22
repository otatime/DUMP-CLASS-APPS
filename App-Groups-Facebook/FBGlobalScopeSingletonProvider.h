//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBApplicationKeySourceFactory.h"
#import "FBExceptionHandlerFactory.h"
#import "FBSafeModeCheckerFactory.h"

@class NSString;

@interface FBGlobalScopeSingletonProvider : NSObject <FBApplicationKeySourceFactory, FBExceptionHandlerFactory, FBSafeModeCheckerFactory>
{
    id _block;
    struct pair<std::__1::mutex, id> _state;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)safeModeChecker;
- (id)keySource;
- (id)exceptionHandler;
- (id)initWithBlock:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
