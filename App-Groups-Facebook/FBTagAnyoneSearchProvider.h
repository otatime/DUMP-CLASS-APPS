//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBUserSession, NSString;

@interface FBTagAnyoneSearchProvider : NSObject
{
    NSString *_actorOverrideFBID;
    NSString *_searchContext;
    FBUserSession *_session;
}

@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)searchForAvatarsWithText:(id)arg1 fetchLimit:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithSession:(id)arg1 actorOverrideFBID:(id)arg2 searchContext:(id)arg3;
- (id)init;

@end
