//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DDLogFileManager.h"

@class NSString;

@interface DDLogFileManagerDefault : NSObject <DDLogFileManager>
{
    unsigned int maximumNumberOfLogFiles;
    NSString *_logsDirectory;
}

@property unsigned int maximumNumberOfLogFiles; // @synthesize maximumNumberOfLogFiles;
- (id)createNewLogFile;
- (id)generateShortUUID;
- (id)sortedLogFileInfos;
- (id)sortedLogFileNames;
- (id)sortedLogFilePaths;
- (id)unsortedLogFileInfos;
- (id)unsortedLogFileNames;
- (id)unsortedLogFilePaths;
- (BOOL)isLogFile:(id)arg1;
- (id)logsDirectory;
- (id)defaultLogsDirectory;
- (void)deleteOldLogFiles;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithLogsDirectory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

