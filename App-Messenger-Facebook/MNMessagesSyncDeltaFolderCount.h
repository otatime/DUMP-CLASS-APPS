//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSMutableDictionary, NSString;

@interface MNMessagesSyncDeltaFolderCount : NSObject <TBase, NSCoding>
{
    int __threadFolder;
    int __count;
    BOOL __hasMore;
    NSMutableDictionary *__counts;
    BOOL __threadFolder_isset;
    BOOL __count_isset;
    BOOL __hasMore_isset;
    BOOL __counts_isset;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetCounts;
- (BOOL)countsIsSet;
@property(retain, nonatomic, getter=counts, setter=setCounts:) NSMutableDictionary *counts;
- (void)unsetHasMore;
- (BOOL)hasMoreIsSet;
@property(nonatomic, getter=hasMore, setter=setHasMore:) BOOL hasMore;
- (void)unsetCount;
- (BOOL)countIsSet;
@property(nonatomic, getter=count, setter=setCount:) int count;
- (void)unsetThreadFolder;
- (BOOL)threadFolderIsSet;
@property(nonatomic, getter=threadFolder, setter=setThreadFolder:) int threadFolder;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithThreadFolder:(int)arg1 count:(int)arg2 hasMore:(BOOL)arg3 counts:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

