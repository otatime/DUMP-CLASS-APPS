//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBInAppBeeperConfig;

@interface FBInAppBeeperConfigBuilder : NSObject
{
    FBInAppBeeperConfig *_config;
}

- (void).cxx_destruct;
- (id)getConfig;
- (id)withBackgroundBlur:(BOOL)arg1;
- (id)withStatusBarStyle:(int)arg1;
- (id)withPriority:(int)arg1;
- (id)withDismissalDelay:(double)arg1;
- (id)init;

@end
