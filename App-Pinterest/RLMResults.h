//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"
#import "RLMCollection.h"

@class NSString, RLMObjectSchema, RLMRealm;

@interface RLMResults : NSObject <RLMCollection, NSFastEnumeration>
{
    RLMObjectSchema *_objectSchema;
    unique_ptr_a3444300 _backingQuery;
    struct TableView _backingView;
    BOOL _viewCreated;
    struct Sorter _sortOrder;
    RLMRealm *_realm;
    NSString *_objectClassName;
}

+ (id)resultsWithObjectClassName:(id)arg1 query:(unique_ptr_a3444300)arg2 view:(struct TableView)arg3 realm:(id)arg4;
+ (id)resultsWithObjectClassName:(id)arg1 query:(unique_ptr_a3444300)arg2 sort:(const struct Sorter *)arg3 realm:(id)arg4;
+ (id)resultsWithObjectClassName:(id)arg1 query:(unique_ptr_a3444300)arg2 realm:(id)arg3;
@property(readonly, nonatomic) RLMRealm *realm; // @synthesize realm=_realm;
@property(readonly, copy, nonatomic) NSString *objectClassName; // @synthesize objectClassName=_objectClassName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)indexInSource:(unsigned int)arg1;
- (unique_ptr_a3444300)cloneQuery;
- (id)descriptionWithMaxDepth:(unsigned int)arg1;
- (id)description;
- (void)deleteObjectsFromRealm;
- (id)averageOfProperty:(id)arg1;
- (id)sumOfProperty:(id)arg1;
- (id)maxOfProperty:(id)arg1;
- (id)minOfProperty:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)sortedResultsUsingDescriptors:(id)arg1;
- (id)sortedResultsUsingProperty:(id)arg1 ascending:(BOOL)arg2;
- (id)objectsWithPredicate:(id)arg1;
- (id)objectsWhere:(id)arg1 args:(void *)arg2;
- (id)objectsWhere:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1;
- (id)lastObject;
- (id)firstObject;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfObjectWithPredicate:(id)arg1;
- (unsigned int)indexOfObjectWhere:(id)arg1 args:(void *)arg2;
- (unsigned int)indexOfObjectWhere:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
@property(readonly, nonatomic) unsigned int count;
- (id)initPrivate;

@end

