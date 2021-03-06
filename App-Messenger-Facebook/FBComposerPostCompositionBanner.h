//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class FBComposerAccessibilityPayload, FBComposerPostCompositionBannerAction, FBComposerPostCompositionIcon, NSAttributedString, NSString, UIColor;

@interface FBComposerPostCompositionBanner : FBValueObject <NSCopying>
{
    NSAttributedString *_title;
    UIColor *_titleColor;
    NSString *_subtitle;
    UIColor *_subtitleColor;
    FBComposerPostCompositionIcon *_icon;
    UIColor *_backgroundColor;
    FBComposerPostCompositionBannerAction *_action;
    FBComposerAccessibilityPayload *_accessibilityPayload;
}

@property(readonly, copy, nonatomic) FBComposerAccessibilityPayload *accessibilityPayload; // @synthesize accessibilityPayload=_accessibilityPayload;
@property(readonly, copy, nonatomic) FBComposerPostCompositionBannerAction *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) FBComposerPostCompositionIcon *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 titleColor:(id)arg2 subtitle:(id)arg3 subtitleColor:(id)arg4 icon:(id)arg5 backgroundColor:(id)arg6 action:(id)arg7 accessibilityPayload:(id)arg8;

@end

