//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GlobalMuter, NSError;

@protocol GlobalMuterDelegate <NSObject>
- (void)globalMuter:(GlobalMuter *)arg1 couldNotMuteAllWithError:(NSError *)arg2;
- (void)globalMuterDidMuteAll:(GlobalMuter *)arg1;
@end

