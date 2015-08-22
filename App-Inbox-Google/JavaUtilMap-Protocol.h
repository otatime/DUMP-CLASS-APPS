//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@protocol JavaUtilMap <NSObject, JavaObject>
- (id <JavaUtilCollection>)values;
- (int)size;
- (id)removeWithId:(id)arg1;
- (void)putAllWithJavaUtilMap:(id <JavaUtilMap>)arg1;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (id <JavaUtilSet>)keySet;
- (BOOL)isEmpty;
- (unsigned int)hash;
- (id)getWithId:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id <JavaUtilSet>)entrySet;
- (BOOL)containsValueWithId:(id)arg1;
- (BOOL)containsKeyWithId:(id)arg1;
- (void)clear;
@end
