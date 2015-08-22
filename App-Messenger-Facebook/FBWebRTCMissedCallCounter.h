//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBWebRTCCallLogListener.h"

@class FBWebRTCCallLog, MNUserSettings, NSDate, NSMutableSet, NSString;

@interface FBWebRTCMissedCallCounter : NSObject <FBWebRTCCallLogListener>
{
    FBWebRTCCallLog *_callLog;
    NSDate *_lastRead;
    NSMutableSet *_missedCalls;
    MNUserSettings *_userSettings;
    id <FBWebRTCMissedCallCounterDelegate> _delegate;
}

@property(nonatomic) __weak id <FBWebRTCMissedCallCounterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_callsAdded:(id)arg1;
- (void)callsDeletedBeforeTime:(id)arg1;
- (void)callAdded:(id)arg1;
- (void)clearRecentMissedCallCount;
@property(readonly, nonatomic) int missedCallCount;
- (void)dealloc;
- (id)initWithCallLog:(id)arg1 userSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
