//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RLMObjectSchema, RLMRealm;

@interface RLMObjectBase : NSObject
{
    struct BasicRow<tightdb::Table> _row;
    RLMRealm *_realm;
    RLMObjectSchema *_objectSchema;
}

+ (id)sharedSchema;
+ (id)className;
+ (id)primaryKey;
+ (id)ignoredProperties;
+ (id)defaultPropertyValues;
+ (id)indexedProperties;
+ (id)getGenericListPropertyNames:(id)arg1;
@property(nonatomic) RLMObjectSchema *objectSchema; // @synthesize objectSchema=_objectSchema;
@property(retain, nonatomic) RLMRealm *realm; // @synthesize realm=_realm;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToObject:(id)arg1;
- (BOOL)isDeletedFromRealm;
@property(readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
- (id)descriptionWithMaxDepth:(unsigned int)arg1;
- (id)description;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)linkingObjectsOfClass:(id)arg1 forProperty:(id)arg2;
- (id)initWithRealm:(id)arg1 schema:(id)arg2 defaultValues:(BOOL)arg3;
- (id)initWithObject:(id)arg1 schema:(id)arg2;
- (id)initWithObject:(id)arg1;
- (id)initWithObjectSchema:(id)arg1;
- (id)init;

@end

