//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableDictionary, NSSet;

@interface FBObjectToSetMap : NSObject <NSCopying>
{
    unsigned int _keyOptions;
    NSMutableDictionary *_map;
    unsigned int _valueOptions;
    id <FBObjectToSetMapDelegate> _delegate;
}

@property(nonatomic) id <FBObjectToSetMapDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_setForKey:(id)arg1;
- (void)_notifyDelegateDidRemoveObjects:(id)arg1 forKey:(id)arg2;
- (void)_notifyDelegateDidRemoveAllObjectsFromMap:(id)arg1;
- (void)_removeAllObjectsForAllKeys:(BOOL)arg1;
- (void)_enumerateSet:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateDictionary:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsForKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateKeysUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)removeObject:(id)arg1 forKey:(id)arg2;
- (BOOL)removeAllObjectsForKey:(id)arg1;
- (void)removeAllObjectsForAllKeys;
- (id)objectsForKey:(id)arg1;
- (BOOL)containsObject:(id)arg1 forKey:(id)arg2;
- (BOOL)containsObjectsForKey:(id)arg1;
- (BOOL)addObjects:(id)arg1 forKey:(id)arg2;
- (BOOL)addObject:(id)arg1 forKey:(id)arg2;
- (id)description;
@property(readonly, nonatomic) unsigned int objectCount;
@property(readonly, nonatomic) unsigned int keyCount;
@property(readonly, copy, nonatomic) NSSet *allValues;
@property(readonly, copy, nonatomic) NSSet *allKeys;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithKeyOptions:(unsigned int)arg1 valueOptions:(unsigned int)arg2;

@end

