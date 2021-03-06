//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBStarRatingsTriggering.h"

@class FBStarRatingsUserData, NSString, NSTimer;

@interface FBStarRatingsQuiesenceTrigger : NSObject <FBStarRatingsTriggering>
{
    FBStarRatingsUserData *_userData;
    NSTimer *_timer;
    id <FBStarRatingsQuiesenceTriggerDelegateProtocol> _delegate;
}

+ (id)triggerWithUserData:(id)arg1;
@property(nonatomic) __weak id <FBStarRatingsQuiesenceTriggerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_timerDidFire:(id)arg1;
- (void)stopTrigger;
- (void)startTrigger;
- (id)initWithUserData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

