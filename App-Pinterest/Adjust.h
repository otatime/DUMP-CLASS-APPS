//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Adjust : NSObject
{
    id <ADJActivityHandler> _activityHandler;
    id <ADJLogger> _logger;
}

+ (id)getInstance;
+ (void)setOfflineMode:(BOOL)arg1;
+ (void)setDeviceToken:(id)arg1;
+ (void)appWillOpenUrl:(id)arg1;
+ (BOOL)isEnabled;
+ (void)setEnabled:(BOOL)arg1;
+ (void)trackSubsessionEnd;
+ (void)trackSubsessionStart;
+ (void)trackEvent:(id)arg1;
+ (void)appDidLaunch:(id)arg1;
@property(retain, nonatomic) id <ADJLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <ADJActivityHandler> activityHandler; // @synthesize activityHandler=_activityHandler;
- (void).cxx_destruct;
- (BOOL)checkActivityHandler;
- (void)setOfflineMode:(BOOL)arg1;
- (void)setDeviceToken:(id)arg1;
- (void)appWillOpenUrl:(id)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (void)trackSubsessionEnd;
- (void)trackSubsessionStart;
- (void)trackEvent:(id)arg1;
- (void)appDidLaunch:(id)arg1;
- (id)init;

@end

