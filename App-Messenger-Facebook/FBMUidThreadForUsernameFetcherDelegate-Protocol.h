//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMThread, FBMUidThreadForUsernameFetcher, NSError, NSString;

@protocol FBMUidThreadForUsernameFetcherDelegate <NSObject>
- (void)fetcher:(FBMUidThreadForUsernameFetcher *)arg1 couldNotFetchUidThread:(NSError *)arg2;
- (void)fetcher:(FBMUidThreadForUsernameFetcher *)arg1 didFetchUid:(NSString *)arg2 displayName:(NSString *)arg3 thread:(FBMThread *)arg4;
@end

