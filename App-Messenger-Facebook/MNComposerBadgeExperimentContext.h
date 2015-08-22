//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface MNComposerBadgeExperimentContext : FBExperimentContext
{
    BOOL _showBadgeInComposer;
    BOOL _showBadgeInMoreTab;
    BOOL _badgeVisible;
    double _badgeExpirationInterval;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)experimentName;
+ (id)parameterConfigurations;
@property(nonatomic) BOOL badgeVisible; // @synthesize badgeVisible=_badgeVisible;
@property(readonly, nonatomic) double badgeExpirationInterval; // @synthesize badgeExpirationInterval=_badgeExpirationInterval;
@property(readonly, nonatomic) BOOL showBadgeInMoreTab; // @synthesize showBadgeInMoreTab=_showBadgeInMoreTab;
@property(readonly, nonatomic) BOOL showBadgeInComposer; // @synthesize showBadgeInComposer=_showBadgeInComposer;

@end

