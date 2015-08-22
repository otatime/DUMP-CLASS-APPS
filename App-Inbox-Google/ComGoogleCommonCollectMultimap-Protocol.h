//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@protocol ComGoogleCommonCollectMultimap <NSObject, JavaObject>
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id <JavaUtilMap>)asMap;
- (id <JavaUtilCollection>)entries;
- (id <JavaUtilCollection>)values;
- (id <ComGoogleCommonCollectMultiset>)keys;
- (id <JavaUtilSet>)keySet;
- (id <JavaUtilCollection>)getWithId:(id)arg1;
- (void)clear;
- (id <JavaUtilCollection>)removeAllWithId:(id)arg1;
- (id <JavaUtilCollection>)replaceValuesWithId:(id)arg1 withJavaLangIterable:(id <JavaLangIterable>)arg2;
- (BOOL)putAllWithComGoogleCommonCollectMultimap:(id <ComGoogleCommonCollectMultimap>)arg1;
- (BOOL)putAllWithId:(id)arg1 withJavaLangIterable:(id <JavaLangIterable>)arg2;
- (BOOL)removeWithId:(id)arg1 withId:(id)arg2;
- (BOOL)putWithId:(id)arg1 withId:(id)arg2;
- (BOOL)containsEntryWithId:(id)arg1 withId:(id)arg2;
- (BOOL)containsValueWithId:(id)arg1;
- (BOOL)containsKeyWithId:(id)arg1;
- (BOOL)isEmpty;
- (int)size;
@end
