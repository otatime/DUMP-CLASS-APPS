//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTViewManager.h"

@class FBUserSession;

@interface FBInlineVideoPlayerManager : RCTViewManager
{
    FBUserSession *_session;
}

+ (id)getPropConfigView_videoID;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)set_videoID:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (id)view;
- (id)initWithSession:(id)arg1;
- (id)init;

@end
