//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBWebImageFocusPointLayout;

@interface FBBurstAnimationImageViewImageSpecifier : NSObject
{
    id <FBWebImageSpecifier> _webImageSpecifier;
    FBWebImageFocusPointLayout *_focusPointLayout;
}

@property(retain, nonatomic) FBWebImageFocusPointLayout *focusPointLayout; // @synthesize focusPointLayout=_focusPointLayout;
@property(retain, nonatomic) id <FBWebImageSpecifier> webImageSpecifier; // @synthesize webImageSpecifier=_webImageSpecifier;
- (void).cxx_destruct;
- (id)initWithWebImageSpecifier:(id)arg1 focusPoint:(id)arg2;

@end

