//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MNAppDelegateConfiguration : NSObject
{
    id <MNKeysConfigurationProviding> _keysConfigurationProvider;
    NSArray *_configurationModules;
    NSString *_flytrapCategoryID;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *flytrapCategoryID; // @synthesize flytrapCategoryID=_flytrapCategoryID;
@property(copy, nonatomic) NSArray *configurationModules; // @synthesize configurationModules=_configurationModules;
@property(retain, nonatomic) id <MNKeysConfigurationProviding> keysConfigurationProvider; // @synthesize keysConfigurationProvider=_keysConfigurationProvider;
- (void).cxx_destruct;

@end

