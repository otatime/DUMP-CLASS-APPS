//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNComposerOverflowExtension, NSArray;

@protocol MNComposerExtensionProviding <NSObject>
- (id <MNComposerExtensionOverflowStrategy>)overflowStrategyWithExtension:(MNComposerOverflowExtension *)arg1;
- (void)removeListener:(id <MNComposerExtensionProviderListener>)arg1;
- (void)addListener:(id <MNComposerExtensionProviderListener>)arg1;
- (NSArray *)unopenedExtensions;
- (NSArray *)availableExtensions;
@end

