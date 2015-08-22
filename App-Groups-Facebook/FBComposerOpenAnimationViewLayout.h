//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBComposerOpenAnimationStatusViewLayout;

@interface FBComposerOpenAnimationViewLayout : NSObject
{
    FBComposerOpenAnimationStatusViewLayout *_statusLayout;
    struct CGRect _navBarFrame;
    struct CGRect _audienceBarFrame;
    struct CGRect _bottomBarFrame;
}

@property(readonly, nonatomic) FBComposerOpenAnimationStatusViewLayout *statusLayout; // @synthesize statusLayout=_statusLayout;
@property(readonly, nonatomic) struct CGRect bottomBarFrame; // @synthesize bottomBarFrame=_bottomBarFrame;
@property(readonly, nonatomic) struct CGRect audienceBarFrame; // @synthesize audienceBarFrame=_audienceBarFrame;
@property(readonly, nonatomic) struct CGRect navBarFrame; // @synthesize navBarFrame=_navBarFrame;
- (void).cxx_destruct;
- (id)initWithNavBarFrame:(struct CGRect)arg1 audienceBarFrame:(struct CGRect)arg2 bottomBarFrame:(struct CGRect)arg3 statusLayout:(id)arg4;

@end
