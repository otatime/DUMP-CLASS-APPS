//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBServiceNetworkerRequest;

@protocol FBServiceTransactionTokenDelegate <NSObject>
- (void)serviceShouldChangePriorityForRequest:(FBServiceNetworkerRequest *)arg1 newPriority:(int)arg2;
- (void)serviceShouldCancelRequest:(FBServiceNetworkerRequest *)arg1;
@end

