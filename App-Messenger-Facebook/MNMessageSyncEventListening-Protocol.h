//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol MNMessageSyncEventListening <NSObject>
- (void)messageDidSyncViaThreadFetch:(NSString *)arg1 messageId:(NSString *)arg2;
- (void)messageDidSyncViaSyncProtocol:(NSString *)arg1 messageId:(NSString *)arg2;
@end

