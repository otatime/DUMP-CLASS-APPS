//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBComposerAccessibilityPayload, NSString, UIColor;

@interface FBComposerPostCompositionPostBuilder : NSObject
{
    NSString *_title;
    UIColor *_backgroundColor;
    unsigned int _style;
    FBComposerAccessibilityPayload *_accessibilityPayload;
}

+ (id)composerPostCompositionPostFromExistingComposerPostCompositionPost:(id)arg1;
+ (id)composerPostCompositionPost;
- (void).cxx_destruct;
- (id)withAccessibilityPayload:(id)arg1;
- (id)withStyle:(unsigned int)arg1;
- (id)withBackgroundColor:(id)arg1;
- (id)withTitle:(id)arg1;
- (id)build;

@end

