//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol GIPCache <NSObject>
@property(readonly, nonatomic) unsigned int count;
@property(readonly, nonatomic) unsigned int cacheSize;
- (NSArray *)allKeys;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)flush;
- (id)initWithCacheSize:(unsigned int)arg1;
@end
