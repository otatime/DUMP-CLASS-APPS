//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBExceptionHandlerDiskCleanup.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface FBTrashCollector : NSObject <FBExceptionHandlerDiskCleanup>
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int deletedCount;
    BOOL _needsCancel;
}

+ (BOOL)clearDirectoryContentIfLowDiskSpace:(id)arg1 diskSpaceThreshold:(unsigned long long)arg2 toDeleteFilter:(id)arg3;
+ (BOOL)clearCachesDirectoryOnLowDiskSpace;
+ (id)sharedCollector;
@property BOOL needsCancel; // @synthesize needsCancel=_needsCancel;
- (void).cxx_destruct;
- (void)_reportAnalytics:(unsigned int)arg1 timeSpent:(double)arg2;
- (void)emptyAllTrash;
- (void)startEmptyingTrash;
- (BOOL)syncEmptyTrashAllowingCancellation:(BOOL)arg1;
- (BOOL)syncEmptyTrash;
- (BOOL)collectURL:(id)arg1 error:(id *)arg2;
- (void)willEnterForeground;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

