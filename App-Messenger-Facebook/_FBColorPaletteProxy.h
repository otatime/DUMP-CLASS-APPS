//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBColorPaletteConfig;

@interface _FBColorPaletteProxy : NSObject
{
    Class _configProvider;
    FBColorPaletteConfig *_config;
    id _observer;
    SEL _replaceBlueGreyWithPlainGreySelector;
}

+ (id)newWithConfigProvider:(Class)arg1;
- (void).cxx_destruct;
- (void)replaceBlueGreyWithPlainGrey;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)dealloc;
- (void)_setupObservers;
- (id)_initWithConfigProvider:(Class)arg1;

@end
