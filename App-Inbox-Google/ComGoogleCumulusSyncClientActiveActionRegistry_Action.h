//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JCGCuWorkUtil_CancellableRunnable, NSString;

@interface ComGoogleCumulusSyncClientActiveActionRegistry_Action : NSObject
{
    JCGCuWorkUtil_CancellableRunnable *timeoutTask_;
    NSString *id__;
}

- (void)dealloc;
- (id)description;
- (id)getId;
- (id)getTimeoutTask;
- (id)initWithComGoogleCumulusSyncClientActiveActionRegistry:(id)arg1 withNSString:(id)arg2 withJCGCuWorkUtil_CancellableRunnable:(id)arg3;

@end
