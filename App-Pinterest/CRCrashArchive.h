//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRPreferences, CRReachability, CritterImpl, NSMutableSet, NSOperationQueue, NSString;

@interface CRCrashArchive : NSObject
{
    unsigned int _maxSavedCrashReports;
    NSString *_baseCritterURL;
    NSString *_crashDirectory;
    NSMutableSet *_reportsInSendQueue;
    CRReachability *_reachability;
    CritterImpl *_critterImpl;
    NSOperationQueue *_sendQueue;
    CRPreferences *_storedState;
}

+ (id)crashReportDirectory;
@property(retain) CRPreferences *storedState; // @synthesize storedState=_storedState;
@property(retain) NSOperationQueue *sendQueue; // @synthesize sendQueue=_sendQueue;
@property __weak CritterImpl *critterImpl; // @synthesize critterImpl=_critterImpl;
@property(retain) CRReachability *reachability; // @synthesize reachability=_reachability;
@property(retain) NSMutableSet *reportsInSendQueue; // @synthesize reportsInSendQueue=_reportsInSendQueue;
@property(retain) NSString *crashDirectory; // @synthesize crashDirectory=_crashDirectory;
@property(retain) NSString *baseCritterURL; // @synthesize baseCritterURL=_baseCritterURL;
@property(nonatomic) unsigned int maxOfflineCrashReports; // @synthesize maxOfflineCrashReports=_maxSavedCrashReports;
- (void).cxx_destruct;
- (void)deleteAllCrashReports;
- (void)deleteCrashReport:(id)arg1;
- (void)notifySendReportFailed:(id)arg1;
- (void)sendCrashReports;
- (BOOL)sendCrashReport:(id)arg1 withError:(id *)arg2;
- (BOOL)loadCrashInfoFromPath:(id)arg1 crashInfo:(id *)arg2 rawCrashData:(id *)arg3;
- (id)saveCrashInfo:(id)arg1 andRawCrashData:(id)arg2;
- (id)makeCrashInfoNameFor:(id)arg1;
- (id)makeCrashDataName;
- (id)pendingCrashReports;
- (void)dealloc;
- (void)registerForOnlineCallbacks;
- (void)reachabilityChanged:(id)arg1;
- (id)init;
- (id)initWithCritterImpl:(id)arg1 andStoredState:(id)arg2 andBaseURL:(id)arg3;

@end

