//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNLikeComposingListener.h"

@class MNSoundController, NSString;

@interface MNLikeSoundController : NSObject <FBClassProvidable, MNLikeComposingListener>
{
    MNSoundController *_soundController;
}

- (void).cxx_destruct;
- (void)didEndComposingLikeStickerWithType:(unsigned int)arg1;
- (void)didCancelComposingLikeStickerTimedOut:(BOOL)arg1;
- (void)didBeginComposingLikeStickerWithType:(unsigned int)arg1 maxDuration:(double)arg2;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

