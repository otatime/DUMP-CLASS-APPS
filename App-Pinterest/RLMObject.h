//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RLMObjectBase.h"

@class RLMObjectSchema, RLMRealm;

@interface RLMObject : RLMObjectBase
{
    BOOL _deletedFromRealm;
}

+ (id)ignoredProperties;
+ (id)primaryKey;
+ (id)defaultPropertyValues;
+ (id)indexedProperties;
+ (id)className;
+ (id)objectInRealm:(id)arg1 forPrimaryKey:(id)arg2;
+ (id)objectForPrimaryKey:(id)arg1;
+ (id)objectsInRealm:(id)arg1 withPredicate:(id)arg2;
+ (id)objectsWithPredicate:(id)arg1;
+ (id)objectsInRealm:(id)arg1 where:(id)arg2 args:(void *)arg3;
+ (id)objectsInRealm:(id)arg1 where:(id)arg2;
+ (id)objectsWhere:(id)arg1 args:(void *)arg2;
+ (id)objectsWhere:(id)arg1;
+ (id)allObjectsInRealm:(id)arg1;
+ (id)allObjects;
+ (id)createOrUpdateInRealm:(id)arg1 withObject:(id)arg2;
+ (id)createOrUpdateInDefaultRealmWithObject:(id)arg1;
+ (id)createInRealm:(id)arg1 withObject:(id)arg2;
+ (id)createInDefaultRealmWithObject:(id)arg1;
@property(readonly, nonatomic, getter=isDeletedFromRealm) BOOL deletedFromRealm; // @synthesize deletedFromRealm=_deletedFromRealm;
- (BOOL)isEqualToObject:(id)arg1;
- (id)linkingObjectsOfClass:(id)arg1 forProperty:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // @dynamic invalidated;
@property(readonly, nonatomic) RLMObjectSchema *objectSchema; // @dynamic objectSchema;
@property(readonly, nonatomic) RLMRealm *realm; // @dynamic realm;

@end

