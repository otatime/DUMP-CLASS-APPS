//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FBResponseProcessor, NSData, NSObject<OS_dispatch_queue>;

@protocol FBDataDeserializing
- (void)deserialize:(NSData *)arg1 responseProcessor:(FBResponseProcessor *)arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3 completionCallback:(void (^)(id))arg4 failureCallback:(void (^)(NSError *))arg5;
@end
