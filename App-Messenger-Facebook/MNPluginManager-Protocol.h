//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNPlugin, NSString;

@protocol MNPluginManager <NSObject>
- (void)enumeratePluginsUsingBlock:(void (^)(NSString *, MNPlugin *, char *))arg1;
- (MNPlugin *)pluginWithIdentifier:(NSString *)arg1;
@end

