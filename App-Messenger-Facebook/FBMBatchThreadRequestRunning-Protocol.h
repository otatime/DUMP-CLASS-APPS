//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMBatchThreadHandlerRequest, FBMBatchThreadHandlerResponse;

@protocol FBMBatchThreadRequestRunning <NSObject>
- (void)handleBatchThreadRequest:(FBMBatchThreadHandlerRequest *)arg1 currentPendingResult:(FBMBatchThreadHandlerResponse *)arg2 listener:(id <FBMThreadRequestListener>)arg3;
@end

