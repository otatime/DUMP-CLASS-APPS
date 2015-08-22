//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GIPCache.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface GIPLRUCache : NSObject <GIPCache>
{
    NSMutableArray *access_;
    NSMutableDictionary *cache_;
    unsigned int cacheSize_;
}

@property(readonly, nonatomic) unsigned int cacheSize; // @synthesize cacheSize=cacheSize_;
- (void)lowMemoryWarningReceived:(id)arg1;
- (void)pruneLRUEntries:(unsigned int)arg1;
- (void)prune;
- (void)touch:(id)arg1;
- (id)allKeys;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
@property(readonly, nonatomic) unsigned int count;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)flush;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithCacheSize:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
