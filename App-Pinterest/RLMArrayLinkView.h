//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RLMArray.h"

@class RLMObjectSchema;

@interface RLMArrayLinkView : RLMArray
{
    bind_ptr_f99bada8 _backingLinkView;
    RLMObjectSchema *_objectSchema;
}

+ (id)arrayWithObjectClassName:(id)arg1 view:(bind_ptr_f99bada8)arg2 realm:(id)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)objectsWithPredicate:(id)arg1;
- (id)sortedResultsUsingDescriptors:(id)arg1;
- (void)deleteObjectsFromRealm;
- (unsigned int)indexOfObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeAllObjects;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (BOOL)isInvalidated;
- (unsigned int)count;

@end

