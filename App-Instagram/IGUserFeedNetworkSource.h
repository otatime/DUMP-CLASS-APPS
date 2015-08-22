//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedNetworkSource.h"

@class IGUser;

@interface IGUserFeedNetworkSource : IGFeedNetworkSource
{
    BOOL _isAppColdStartEventSource;
    BOOL _hasLoggedOnce;
    IGUser *_user;
}

@property(nonatomic) BOOL hasLoggedOnce; // @synthesize hasLoggedOnce=_hasLoggedOnce;
@property(nonatomic) BOOL isAppColdStartEventSource; // @synthesize isAppColdStartEventSource=_isAppColdStartEventSource;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)loadEntriesFromResponse:(id)arg1 clearOut:(BOOL)arg2;
- (void)handleAuthorizationError:(id)arg1;
- (void)onNewItemAvailable:(id)arg1;
- (id)initWithUser:(id)arg1;
- (void)dealloc;

@end
