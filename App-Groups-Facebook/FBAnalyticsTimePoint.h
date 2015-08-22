//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAnalyticsTimePointEvent, NSMutableArray, NSString;

@interface FBAnalyticsTimePoint : NSObject
{
    BOOL _userMaybeSampled;
    BOOL _userSampleStatusKnown;
    NSMutableArray *_timePointQueue;
    FBAnalyticsTimePointEvent *_firstEvent;
    FBAnalyticsTimePointEvent *_previousEvent;
    NSString *_idleEventName;
    float _recurringDelay;
}

+ (id)sharedGenerator;
@property(nonatomic) float recurringDelay; // @synthesize recurringDelay=_recurringDelay;
@property(retain, nonatomic) NSString *idleEventName; // @synthesize idleEventName=_idleEventName;
@property(retain, nonatomic) FBAnalyticsTimePointEvent *previousEvent; // @synthesize previousEvent=_previousEvent;
@property(retain, nonatomic) FBAnalyticsTimePointEvent *firstEvent; // @synthesize firstEvent=_firstEvent;
@property(nonatomic) BOOL userSampleStatusKnown; // @synthesize userSampleStatusKnown=_userSampleStatusKnown;
@property(nonatomic) BOOL userMaybeSampled; // @synthesize userMaybeSampled=_userMaybeSampled;
@property(retain, nonatomic) NSMutableArray *timePointQueue; // @synthesize timePointQueue=_timePointQueue;
- (void).cxx_destruct;
- (void)flush;
- (void)_send:(id)arg1;
- (void)_performMaintenanceTask;
- (void)_scheduleMaintenanceTask:(double)arg1;
- (void)generateTimePointWhenUserInterfaceIsIdle:(id)arg1;
- (void)_generateIdleEvent;
- (void)generateTimePoint:(id)arg1 withData:(id)arg2;
- (void)generateTimePoint:(id)arg1;
- (id)initWithInitialDelay:(float)arg1 recurringDelay:(float)arg2;
- (id)init;

@end
