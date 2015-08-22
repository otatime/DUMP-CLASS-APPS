//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView;

@interface FBComposerOpenAnimationStatusViewLayout : NSObject
{
    BOOL _isProfilePicVisible;
    UIView *_profilePicView;
    UIView *_textView;
    NSString *_textViewPlaceholder;
    struct CGRect _containerFrame;
    struct CGRect _profilePicFrame;
    struct CGRect _textViewFrame;
}

@property(readonly, copy, nonatomic) NSString *textViewPlaceholder; // @synthesize textViewPlaceholder=_textViewPlaceholder;
@property(readonly, nonatomic) UIView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) struct CGRect textViewFrame; // @synthesize textViewFrame=_textViewFrame;
@property(readonly, nonatomic) UIView *profilePicView; // @synthesize profilePicView=_profilePicView;
@property(readonly, nonatomic) struct CGRect profilePicFrame; // @synthesize profilePicFrame=_profilePicFrame;
@property(readonly, nonatomic) BOOL isProfilePicVisible; // @synthesize isProfilePicVisible=_isProfilePicVisible;
@property(readonly, nonatomic) struct CGRect containerFrame; // @synthesize containerFrame=_containerFrame;
- (void).cxx_destruct;
- (id)initWithContainerFrame:(struct CGRect)arg1 isProfilePicVisible:(BOOL)arg2 profilePicFrame:(struct CGRect)arg3 profilePicView:(id)arg4 textViewFrame:(struct CGRect)arg5 textView:(id)arg6 textViewPlaceholder:(id)arg7;

@end
