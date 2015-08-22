//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBComposerAccessibilityPayload, FBComposerPostCompositionRailItemAction, FBComposerPostCompositionRailItemIcon;

@interface FBComposerPostCompositionRailItemBuilder : NSObject
{
    FBComposerPostCompositionRailItemIcon *_icon;
    FBComposerPostCompositionRailItemAction *_action;
    FBComposerAccessibilityPayload *_accessibilityPayload;
}

+ (id)composerPostCompositionRailItemFromExistingComposerPostCompositionRailItem:(id)arg1;
+ (id)composerPostCompositionRailItem;
- (void).cxx_destruct;
- (id)withAccessibilityPayload:(id)arg1;
- (id)withAction:(id)arg1;
- (id)withIcon:(id)arg1;
- (id)build;

@end

