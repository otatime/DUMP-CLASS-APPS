//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FBUserSession, NSObject<OS_dispatch_queue>;

@protocol FBMemSuggestedPeopleAdditionalSectionFetchSource
- (void)fetchSuggestedPeopleAsync:(FBUserSession *)arg1 withCallbackQueue:(NSObject<OS_dispatch_queue> *)arg2 withCachedResponseBlock:(void (^)(NSDictionary *, BOOL, NSDate *))arg3 withDownloadedResponseBlock:(void (^)(NSDictionary *, NSError *))arg4;
@end
