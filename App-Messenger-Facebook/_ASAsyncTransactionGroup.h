//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable;

@interface _ASAsyncTransactionGroup : NSObject
{
    NSHashTable *_containerLayers;
}

+ (void)registerTransactionGroupAsMainRunloopObserver:(id)arg1;
+ (id)mainTransactionGroup;
- (void).cxx_destruct;
- (void)commit;
- (void)addTransactionContainer:(id)arg1;
- (id)init;

@end

