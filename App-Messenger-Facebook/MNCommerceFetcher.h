//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBUserSession;

@interface MNCommerceFetcher : NSObject
{
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (void)fetchContentForQuery:(id)arg1 responseTTLInSeconds:(unsigned int)arg2 fetchBlock:(CDUnknownBlockType)arg3;
- (void)fetchContentForQuery:(id)arg1 forceServerFetch:(BOOL)arg2 fetchBlock:(CDUnknownBlockType)arg3;
- (id)initWithSession:(id)arg1;

@end

