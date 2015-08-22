//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBStreamAnalytics, FBUserSession, NSString;

@interface FBGraphQLPagedDownloadRequestBuilderParameters : NSObject
{
    FBUserSession *_userSession;
    NSString *_targetID;
    NSString *_cursor;
    unsigned int _loadType;
    unsigned int _refreshMode;
    id <FBStreamScenePathProviding> _scenePathProvider;
    unsigned int _loadFetchLimit;
    FBStreamAnalytics *_streamAnalytics;
    NSString *_actorFBID;
}

@property(copy, nonatomic) NSString *actorFBID; // @synthesize actorFBID=_actorFBID;
@property(readonly, nonatomic) FBStreamAnalytics *streamAnalytics; // @synthesize streamAnalytics=_streamAnalytics;
@property(readonly, nonatomic) unsigned int loadFetchLimit; // @synthesize loadFetchLimit=_loadFetchLimit;
@property(readonly, nonatomic) id <FBStreamScenePathProviding> scenePathProvider; // @synthesize scenePathProvider=_scenePathProvider;
@property(readonly, nonatomic) unsigned int refreshMode; // @synthesize refreshMode=_refreshMode;
@property(readonly, nonatomic) unsigned int loadType; // @synthesize loadType=_loadType;
@property(readonly, copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(readonly, copy, nonatomic) NSString *targetID; // @synthesize targetID=_targetID;
@property(readonly, nonatomic) FBUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)init;
- (id)initWithUserSession:(id)arg1 targetID:(id)arg2 cursor:(id)arg3 loadType:(unsigned int)arg4 refreshMode:(unsigned int)arg5 scenePathProvider:(id)arg6 loadFetchLimit:(unsigned int)arg7 streamAnalytics:(id)arg8;

@end
