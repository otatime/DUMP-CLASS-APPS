//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@protocol MNUserNetworkRequesting <NSObject>
- (void)configureAndBeginFetchUsers:(NSSet *)arg1 withCompleteBlock:(void (^)(NSDictionary *))arg2 errorBlock:(void (^)(NSError *))arg3;
@end
