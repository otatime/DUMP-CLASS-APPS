//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ComGoogleCumulusSyncClientForwardSyncTracker_IssuedToken : NSObject
{
    BOOL finished_;
    NSString *token_;
}

- (void)dealloc;
- (id)getToken;
- (BOOL)isFinished;
- (void)finish;
- (id)description;
- (id)initWithNSString:(id)arg1;

@end

