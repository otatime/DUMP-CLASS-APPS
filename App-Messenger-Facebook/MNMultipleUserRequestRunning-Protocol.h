//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNMultipleUserHandlerRequest, MNMultipleUserResponse;

@protocol MNMultipleUserRequestRunning <NSObject>
- (void)handleMultipleUserRequest:(MNMultipleUserHandlerRequest *)arg1 currentPendingResult:(MNMultipleUserResponse *)arg2 listener:(id <MNUserRequestListener>)arg3;
@end

