//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSTimer;

@interface CRTransaction : NSObject
{
    BOOL _cr_isForegrounded;
    int _state;
    int _value;
    NSDictionary *_metadata;
    int _transactionId;
    NSString *_name;
    NSString *_cr_beginTimeString;
    NSString *_cr_endTimeString;
    NSString *_cr_foregroundTimeString;
    NSTimer *_cr_timer;
    double _timeout;
    double _beginTime;
    double _endTime;
    double _eyeTime;
    double _cr_foregroundTime;
}

+ (id)transactionForName:(id)arg1;
+ (id)transactionForId:(int)arg1;
+ (id)allTransactions;
@property(retain, nonatomic) NSTimer *cr_timer; // @synthesize cr_timer=_cr_timer;
@property(nonatomic) BOOL cr_isForegrounded; // @synthesize cr_isForegrounded=_cr_isForegrounded;
@property(copy, nonatomic) NSString *cr_foregroundTimeString; // @synthesize cr_foregroundTimeString=_cr_foregroundTimeString;
@property(copy, nonatomic) NSString *cr_endTimeString; // @synthesize cr_endTimeString=_cr_endTimeString;
@property(copy, nonatomic) NSString *cr_beginTimeString; // @synthesize cr_beginTimeString=_cr_beginTimeString;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) int transactionId; // @synthesize transactionId=_transactionId;
- (void).cxx_destruct;
- (void)cr_removeTimer;
- (void)cr_removeTimerOnMainThread;
- (void)cr_timerFired:(id)arg1;
- (void)cr_createTimer:(id)arg1;
- (void)cr_createTimerOnMainThread;
- (void)cr_background:(double)arg1;
- (void)cr_foreground:(double)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)cr_legalMetadataKey:(id)arg1;
- (BOOL)cr_legalMetadataObject:(id)arg1;
- (id)cr_toArray;
- (id)cr_toJSONString;
- (void)cr_transition:(int)arg1;
- (BOOL)cr_isFinal;
- (void)cr_interrupt;
- (void)cr_abort;
- (void)crash;
- (void)fail;
- (void)end;
- (void)begin;
- (void)dealloc;
- (id)initFromFile:(id)arg1;
- (id)initAuto:(id)arg1 withBeginTime:(double)arg2 withEndTime:(double)arg3;
- (id)init:(id)arg1 withValue:(int)arg2;
- (id)init:(id)arg1;
@property(nonatomic) double cr_foregroundTime; // @synthesize cr_foregroundTime=_cr_foregroundTime;
@property(readonly, nonatomic) double eyeTime; // @synthesize eyeTime=_eyeTime;
- (void)cr_setEndTime:(double)arg1;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
- (void)cr_setBeginTime:(double)arg1;
@property(readonly, nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) int value; // @synthesize value=_value;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (double)clampTimeout:(double)arg1;
- (void)cr_setState:(int)arg1 atTime:(double)arg2;
@property(readonly, nonatomic) int state; // @synthesize state=_state;

@end

