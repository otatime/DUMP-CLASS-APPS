//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBUserSession, NSString;

@interface FBSearchActivityLogger : NSObject
{
    FBUserSession *_session;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
- (void)createActivityLogStoryForSuggestion:(id)arg1 userInput:(id)arg2;
- (id)init;
- (id)initWithSession:(id)arg1 analyticsModule:(id)arg2;

@end

