//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NRMAHarvestAware.h"

@class NRMACrashReportFileManager, NRMAUncaughtExceptionHandler, NRPLCrashReporter, NSString;

@interface NRMAExceptionHandlerManager : NSObject <NRMAHarvestAware>
{
    NRPLCrashReporter *_crashReporter;
    NRMACrashReportFileManager *_reportManager;
    NRMAUncaughtExceptionHandler *_handler;
}

+ (void)startHandler;
+ (id)manager;
+ (void)setManager:(id)arg1;
@property(retain) NRMAUncaughtExceptionHandler *handler; // @synthesize handler=_handler;
@property(retain) NRMACrashReportFileManager *reportManager; // @synthesize reportManager=_reportManager;
@property(retain) NRPLCrashReporter *crashReporter; // @synthesize crashReporter=_crashReporter;
- (void).cxx_destruct;
- (void)didReceiveMemoryUsageNotification:(id)arg1;
- (void)updateNetworkingStatus;
- (void)onHarvestBefore;
- (void)executeDelayedProcessing;
- (void)fireDelayedProcessing;
- (void)registerObservers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

