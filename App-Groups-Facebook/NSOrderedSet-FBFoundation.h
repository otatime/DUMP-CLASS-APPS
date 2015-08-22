//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOrderedSet.h"

@interface NSOrderedSet (FBFoundation)
@property(readonly, nonatomic) id onlyObject;
- (BOOL)containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)subOrderedSetToIndex:(unsigned int)arg1;
- (id)dictionaryWithKeyBlock:(CDUnknownBlockType)arg1;
- (id)dictionaryWithKeyPath:(id)arg1;
- (id)dictionaryWithKey:(id)arg1;
- (id)orderedSetByPerformingBlock:(CDUnknownBlockType)arg1;
- (id)orderedSetByPerformingSelector:(SEL)arg1;
- (id)setByPerformingBlock:(CDUnknownBlockType)arg1;
- (id)setByPerformingSelector:(SEL)arg1;
- (id)arrayByPerformingBlock:(CDUnknownBlockType)arg1;
- (id)arrayByPerformingSelector:(SEL)arg1;
@end
