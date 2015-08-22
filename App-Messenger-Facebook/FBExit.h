//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSObject<OS_dispatch_queue>, NSString;

@interface FBExit : NSObject
{
    NSFileManager *_fileManager;
    BOOL _shouldExit;
    NSObject<OS_dispatch_queue> *_queue;
    struct Mutex _diskOperationMutex;
    NSString *_reason;
}

+ (void)logStateAndExit:(int)arg1 withExitReason:(id)arg2;
+ (id)lastExitReason;
+ (void)removeLogFile;
+ (BOOL)forcedExitLogFileExist;
+ (id)shared;
@property(copy) NSString *reason; // @synthesize reason=_reason;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)queue;
- (id)fileManager;
- (void)exit:(int)arg1;
- (void)logState:(id)arg1 andExit:(int)arg2 exitReason:(id)arg3;
- (void)logState:(id)arg1 andExit:(int)arg2;
- (void)logStateAndExit:(int)arg1 withExitReason:(id)arg2;
- (void)_createDirectoryIfNeeded:(id)arg1;
- (void)writeInformation:(id)arg1 inPath:(id)arg2;
- (id)_lastExitReason;
- (void)_loadReason;
- (void)_removeLogFile;
- (BOOL)forcedExitLogFileExist;
- (id)defaultPath;
- (id)defaultExceptionDirectory;
- (void)dealloc;
- (id)initWithFileManager:(id)arg1 shouldExit:(BOOL)arg2;
- (id)init;

@end

