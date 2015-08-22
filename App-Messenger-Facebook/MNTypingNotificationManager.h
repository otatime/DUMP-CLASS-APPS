//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNThreadViewModelConfigurable.h"

@class FBMThreadTypingStateTracker, MNThreadViewModel, NSNotificationCenter, NSString;

@interface MNTypingNotificationManager : NSObject <MNThreadViewModelConfigurable>
{
    int _typingState;
    id <MNTypingNotificationManagerDelegate> _delegate;
    MNThreadViewModel *_threadViewModel;
    NSString *_otherParticipantUserId;
    NSNotificationCenter *_notificationCenter;
    id <FBClock> _clock;
    id <FBTimerScheduler> _timerScheduler;
    FBMThreadTypingStateTracker *_threadTypingStateTracker;
    int _lastTypingReceivedState;
    double _lastTypingReceivedTime;
}

+ (id)managerWithNotificationCenter:(id)arg1 clock:(id)arg2 timerScheduler:(id)arg3 threadTypingStateTracker:(id)arg4;
@property(nonatomic) int lastTypingReceivedState; // @synthesize lastTypingReceivedState=_lastTypingReceivedState;
@property(nonatomic) double lastTypingReceivedTime; // @synthesize lastTypingReceivedTime=_lastTypingReceivedTime;
@property(retain, nonatomic) FBMThreadTypingStateTracker *threadTypingStateTracker; // @synthesize threadTypingStateTracker=_threadTypingStateTracker;
@property(retain, nonatomic) id <FBTimerScheduler> timerScheduler; // @synthesize timerScheduler=_timerScheduler;
@property(retain, nonatomic) id <FBClock> clock; // @synthesize clock=_clock;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(copy, nonatomic) NSString *otherParticipantUserId; // @synthesize otherParticipantUserId=_otherParticipantUserId;
@property(retain, nonatomic) MNThreadViewModel *threadViewModel; // @synthesize threadViewModel=_threadViewModel;
@property(nonatomic) __weak id <MNTypingNotificationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int typingState; // @synthesize typingState=_typingState;
- (void).cxx_destruct;
- (void)checkTypingBecameInactive:(id)arg1;
- (void)setTypingInactiveAfterDelay:(id)arg1;
- (void)updateWithReceivedTypingState:(int)arg1;
- (void)setAndNotifyTypingInactive;
- (void)setAndNotifyTypingActive;
- (void)didReceiveTypingNotification:(id)arg1;
- (id)typingParticipant;
@property(readonly, nonatomic) BOOL isTyping;
- (void)setTypingActive;
- (void)setTypingInactive;
- (void)stopManaging;
- (void)startManaging;
- (void)dealloc;
- (void)tearDownThreadViewModelDependencies;
- (void)configureThreadViewModelDependenciesWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

