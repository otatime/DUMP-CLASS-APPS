//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGRealtimeStore : NSObject
{
}

+ (BOOL)processReplaceOperation:(id)arg1;
+ (BOOL)processRemoveOperation:(id)arg1;
+ (BOOL)processAddOperation:(id)arg1;
+ (void)removeAllObjects;
+ (id)operations;
+ (void)markPathAsTombstone:(id)arg1;
+ (void)patchStoreWithPatches:(id)arg1;
+ (BOOL)patchStoreWithOperation:(id)arg1;
+ (id)tombstoneStore;
+ (id)operationStore;

@end
